
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib {int dummy; } ;
struct aac_dev {int adapter_shutdown; scalar_t__ msi_enabled; int ioctl_mutex; } ;
struct aac_close {void* cid; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct aac_dev*) ;
 struct fib* FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (struct fib*) ;
 int FUNC_5 (int ,struct fib*,int,int ,int,int,int *,int *) ;
 scalar_t__ FUNC_6 (struct aac_dev*) ;
 int FUNC_7 (struct aac_dev*) ;
 int FUNC_8 (struct aac_dev*) ;
 void* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct fib*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct aac_dev * VAR_5)
{
 struct fib * VAR_6;
 struct aac_close *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_5))
  return VAR_8;

 if (!VAR_5->adapter_shutdown) {
  FUNC_11(&VAR_5->ioctl_mutex);
  VAR_5->adapter_shutdown = 1;
  FUNC_12(&VAR_5->ioctl_mutex);
 }

 FUNC_8(VAR_5);

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return -VAR_1;
 FUNC_4(VAR_6);

 VAR_7 = (struct aac_close *) FUNC_10(VAR_6);
 VAR_7->command = FUNC_9(VAR_4);
 VAR_7->cid = FUNC_9(0xfffffffe);

 VAR_8 = FUNC_5(VAR_0,
     VAR_6,
     sizeof(struct aac_close),
     VAR_3,
     -2 , 1,
     ((void*)0), ((void*)0));

 if (VAR_8 >= 0)
  FUNC_2(VAR_6);

 if (VAR_8 != -VAR_2)
  FUNC_3(VAR_6);
 if (FUNC_6(VAR_5) &&
      VAR_5->msi_enabled)
  FUNC_7(VAR_5);
 return VAR_8;
}
