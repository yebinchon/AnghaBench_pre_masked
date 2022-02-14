
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {scalar_t__ size; TYPE_1__ ecc_stats; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mtd_info*,scalar_t__,size_t,size_t*,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
     size_t * VAR_4, u_char * VAR_5)
{
 struct mtd_concat *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 0, VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_subdev; VAR_9++) {
  struct mtd_info *VAR_10 = VAR_6->subdev[VAR_9];
  size_t VAR_11, VAR_12;

  if (VAR_2 >= VAR_10->size) {

   VAR_11 = 0;
   VAR_2 -= VAR_10->size;
   continue;
  }
  if (VAR_2 + VAR_3 > VAR_10->size)

   VAR_11 = VAR_10->size - VAR_2;
  else

   VAR_11 = VAR_3;

  VAR_8 = FUNC_3(VAR_10, VAR_2, VAR_11, &VAR_12, VAR_5);


  if (FUNC_4(VAR_8)) {
   if (FUNC_2(VAR_8)) {
    VAR_1->ecc_stats.failed++;
    VAR_7 = VAR_8;
   } else if (FUNC_1(VAR_8)) {
    VAR_1->ecc_stats.corrected++;

    if (!VAR_7)
     VAR_7 = VAR_8;
   } else
    return VAR_8;
  }

  *VAR_4 += VAR_12;
  VAR_3 -= VAR_11;
  if (VAR_3 == 0)
   return VAR_7;

  VAR_5 += VAR_11;
  VAR_2 = 0;
 }
 return -VAR_0;
}
