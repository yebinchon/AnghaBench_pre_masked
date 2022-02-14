
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {scalar_t__ size; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,size_t,size_t*,int const*) ;

__attribute__((used)) static int
FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
      size_t * VAR_4, const u_char * VAR_5)
{
 struct mtd_concat *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = -VAR_0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_subdev; VAR_8++) {
  struct mtd_info *VAR_9 = VAR_6->subdev[VAR_8];
  size_t VAR_10, VAR_11;

  if (VAR_2 >= VAR_9->size) {
   VAR_10 = 0;
   VAR_2 -= VAR_9->size;
   continue;
  }
  if (VAR_2 + VAR_3 > VAR_9->size)
   VAR_10 = VAR_9->size - VAR_2;
  else
   VAR_10 = VAR_3;

  VAR_7 = FUNC_1(VAR_9, VAR_2, VAR_10, &VAR_11, VAR_5);
  if (VAR_7)
   break;

  *VAR_4 += VAR_11;
  VAR_3 -= VAR_10;
  if (VAR_3 == 0)
   break;

  VAR_7 = -VAR_0;
  VAR_5 += VAR_10;
  VAR_2 = 0;
 }
 return VAR_7;
}
