
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sharpsl_ftl {unsigned int logmax; unsigned int* log2phy; } ;
struct mtd_info {int erasesize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,struct mtd_info*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int,size_t,size_t*,void*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_2,
       loff_t VAR_3,
       size_t VAR_4,
       void *VAR_5,
       struct sharpsl_ftl *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;
 loff_t VAR_10;
 loff_t VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_7 = FUNC_0((u32)VAR_3, VAR_2);
 VAR_8 = FUNC_0(((u32)VAR_3 + VAR_4 - 1), VAR_2);

 if (VAR_4 <= 0 || VAR_7 >= VAR_6->logmax || VAR_8 > VAR_7)
  return -VAR_0;

 VAR_9 = VAR_6->log2phy[VAR_7];
 VAR_10 = (loff_t)VAR_9 * VAR_2->erasesize;
 VAR_11 = FUNC_2((u32)VAR_3, VAR_2);

 VAR_13 = FUNC_3(VAR_2, VAR_10 + VAR_11, VAR_4, &VAR_12, VAR_5);

 if (FUNC_1(VAR_13))
  VAR_13 = 0;

 if (!VAR_13 && VAR_12 != VAR_4)
  VAR_13 = -VAR_1;

 if (VAR_13)
  FUNC_4("sharpslpart: error, read failed at %#llx\n",
         VAR_10 + VAR_11);

 return VAR_13;
}
