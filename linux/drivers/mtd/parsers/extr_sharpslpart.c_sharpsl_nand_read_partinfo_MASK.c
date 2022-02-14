
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpsl_nand_partinfo {int start; int end; int magic; } ;
struct sharpsl_ftl {int dummy; } ;
struct mtd_info {int size; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct mtd_info*,int ,size_t,struct sharpsl_nand_partinfo*,struct sharpsl_ftl*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_4,
          loff_t VAR_5,
          size_t VAR_6,
          struct sharpsl_nand_partinfo *VAR_7,
          struct sharpsl_ftl *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;


 if (FUNC_0(VAR_7[0].magic) != VAR_0 ||
     FUNC_0(VAR_7[1].magic) != VAR_2 ||
     FUNC_0(VAR_7[2].magic) != VAR_3) {
  FUNC_3("sharpslpart: magic values mismatch\n");
  return -VAR_1;
 }


 VAR_7[2].end = FUNC_1(VAR_4->size);


 if (FUNC_2(VAR_7[0].end) <= FUNC_2(VAR_7[0].start) ||
     FUNC_2(VAR_7[1].start) < FUNC_2(VAR_7[0].end) ||
     FUNC_2(VAR_7[1].end) <= FUNC_2(VAR_7[1].start) ||
     FUNC_2(VAR_7[2].start) < FUNC_2(VAR_7[1].end) ||
     FUNC_2(VAR_7[2].end) <= FUNC_2(VAR_7[2].start)) {
  FUNC_3("sharpslpart: partition sizes mismatch\n");
  return -VAR_1;
 }

 return 0;
}
