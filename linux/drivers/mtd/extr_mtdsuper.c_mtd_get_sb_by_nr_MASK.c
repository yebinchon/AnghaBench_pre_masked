
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct fs_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct fs_context*,char*,int) ;
 struct mtd_info* FUNC_3 (int *,int) ;
 int FUNC_4 (struct fs_context*,struct mtd_info*,int (*) (struct super_block*,struct fs_context*)) ;

__attribute__((used)) static int FUNC_5(struct fs_context *VAR_0, int VAR_1,
       int (*VAR_2)(struct super_block *,
           struct fs_context *))
{
 struct mtd_info *VAR_3;

 VAR_3 = FUNC_3(((void*)0), VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0, "MTDSB: Device #%u doesn't appear to exist\n", VAR_1);
  return FUNC_1(VAR_3);
 }

 return FUNC_4(VAR_0, VAR_3, VAR_2);
}
