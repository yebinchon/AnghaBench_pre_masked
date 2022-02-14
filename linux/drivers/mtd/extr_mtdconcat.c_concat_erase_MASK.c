
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct mtd_info {scalar_t__ size; } ;
struct mtd_erase_region_info {scalar_t__ offset; int erasesize; } ;
struct TYPE_2__ {int numeraseregions; int erasesize; struct mtd_erase_region_info* eraseregions; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; TYPE_1__ mtd; } ;
struct erase_info {int addr; int len; scalar_t__ fail_addr; } ;


 int FUNC_0 (int) ;
 struct mtd_concat* FUNC_1 (struct mtd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct erase_info*) ;
 struct erase_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mtd_info*,struct erase_info*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_4, struct erase_info *VAR_5)
{
 struct mtd_concat *VAR_6 = FUNC_1(VAR_4);
 struct mtd_info *VAR_7;
 int VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11 = 0;
 struct erase_info *VAR_12;







 if (!VAR_6->mtd.numeraseregions) {

  if (VAR_5->addr & (VAR_6->mtd.erasesize - 1))
   return -VAR_0;
  if (VAR_5->len & (VAR_6->mtd.erasesize - 1))
   return -VAR_0;
 } else {

  struct mtd_erase_region_info *VAR_13 =
      VAR_6->mtd.eraseregions;




  for (VAR_8 = 0; VAR_8 < VAR_6->mtd.numeraseregions &&
       VAR_5->addr >= VAR_13[VAR_8].offset; VAR_8++) ;
  --VAR_8;






  if (VAR_8 < 0 || VAR_5->addr & (VAR_13[VAR_8].erasesize - 1))
   return -VAR_0;




  for (; VAR_8 < VAR_6->mtd.numeraseregions &&
       (VAR_5->addr + VAR_5->len) >= VAR_13[VAR_8].offset;
       ++VAR_8) ;
  --VAR_8;



  if (VAR_8 < 0 || ((VAR_5->addr + VAR_5->len) &
     (VAR_13[VAR_8].erasesize - 1)))
   return -VAR_0;
 }


 VAR_12 = FUNC_3(sizeof (struct erase_info), VAR_2);

 if (!VAR_12)
  return -VAR_1;

 *VAR_12 = *VAR_5;
 VAR_10 = VAR_5->len;





 for (VAR_8 = 0; VAR_8 < VAR_6->num_subdev; VAR_8++) {
  VAR_7 = VAR_6->subdev[VAR_8];
  if (VAR_7->size <= VAR_12->addr) {
   VAR_12->addr -= VAR_7->size;
   VAR_11 += VAR_7->size;
  } else {
   break;
  }
 }


 FUNC_0(VAR_8 >= VAR_6->num_subdev);


 VAR_9 = 0;
 for (; VAR_10 > 0; VAR_8++) {

  VAR_7 = VAR_6->subdev[VAR_8];


  if (VAR_12->addr + VAR_10 > VAR_7->size)
   VAR_12->len = VAR_7->size - VAR_12->addr;
  else
   VAR_12->len = VAR_10;

  VAR_10 -= VAR_12->len;
  if ((VAR_9 = FUNC_4(VAR_7, VAR_12))) {


   FUNC_0(VAR_9 == -VAR_0);
   if (VAR_12->fail_addr != VAR_3)
    VAR_5->fail_addr = VAR_12->fail_addr + VAR_11;
   break;
  }
  VAR_12->addr = 0;
  VAR_11 += VAR_7->size;
 }
 FUNC_2(VAR_12);

 return VAR_9;
}
