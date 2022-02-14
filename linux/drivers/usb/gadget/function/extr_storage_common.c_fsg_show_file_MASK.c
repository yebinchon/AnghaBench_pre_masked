
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dummy; } ;
struct fsg_lun {int filp; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (struct rw_semaphore*) ;
 char* FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct fsg_lun*) ;
 int FUNC_5 (char*,char*,size_t) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (struct rw_semaphore*) ;

ssize_t FUNC_8(struct fsg_lun *VAR_1, struct rw_semaphore *VAR_2,
        char *VAR_3)
{
 char *VAR_4;
 ssize_t VAR_5;

 FUNC_2(VAR_2);
 if (FUNC_4(VAR_1)) {
  VAR_4 = FUNC_3(VAR_1->filp, VAR_3, VAR_0 - 1);
  if (FUNC_0(VAR_4))
   VAR_5 = FUNC_1(VAR_4);
  else {
   VAR_5 = FUNC_6(VAR_4);
   FUNC_5(VAR_3, VAR_4, VAR_5);
   VAR_3[VAR_5] = '\n';
   VAR_3[++VAR_5] = 0;
  }
 } else {
  *VAR_3 = 0;
  VAR_5 = 0;
 }
 FUNC_7(VAR_2);
 return VAR_5;
}
