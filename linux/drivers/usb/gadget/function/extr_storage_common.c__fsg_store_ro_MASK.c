
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int ro; int initially_ro; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_lun*,char*,...) ;
 scalar_t__ FUNC_1 (struct fsg_lun*) ;

__attribute__((used)) static ssize_t FUNC_2(struct fsg_lun *VAR_1, bool VAR_2)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_1, "read-only status change prevented\n");
  return -VAR_0;
 }

 VAR_1->ro = VAR_2;
 VAR_1->initially_ro = VAR_2;
 FUNC_0(VAR_1, "read-only status set to %d\n", VAR_1->ro);

 return 0;
}
