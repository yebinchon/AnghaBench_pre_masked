
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dummy; } ;
struct fsg_lun {int cdrom; } ;
typedef int ssize_t ;


 int FUNC_0 (struct fsg_lun*,int) ;
 int FUNC_1 (struct rw_semaphore*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct rw_semaphore*) ;

ssize_t FUNC_4(struct fsg_lun *VAR_0, struct rw_semaphore *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_1);
 VAR_5 = VAR_4 ? FUNC_0(VAR_0, 1) : 0;

 if (!VAR_5) {
  VAR_0->cdrom = VAR_4;
  VAR_5 = VAR_3;
 }
 FUNC_3(VAR_1);

 return VAR_5;
}
