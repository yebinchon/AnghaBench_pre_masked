
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; } ;
struct fib {int dummy; } ;
struct aac_dev {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int,int,int *,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct fib*) ;

int FUNC_7(struct aac_dev *VAR_4, struct timespec64 *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct fib *VAR_7;
 __le32 *VAR_8;

 VAR_7 = FUNC_0(VAR_4);
 if (!VAR_7)
  goto out;

 FUNC_3(VAR_7);
 VAR_8 = (__le32 *)FUNC_6(VAR_7);
 *VAR_8 = FUNC_5(VAR_5->tv_sec);
 VAR_6 = FUNC_4(VAR_3, VAR_7, sizeof(*VAR_8), VAR_2,
     1, 1, ((void*)0), ((void*)0));





 if (VAR_6 >= 0)
  FUNC_1(VAR_7);





 if (VAR_6 != -VAR_1)
  FUNC_2(VAR_7);

out:
 return VAR_6;
}
