
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct file**,int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int *VAR_4, struct file **VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6 & ~(VAR_1 | VAR_3 | VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  goto err_read_pipe;
 VAR_9 = VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  goto err_fdr;
 VAR_8 = VAR_7;

 FUNC_0(VAR_9, VAR_8);
 VAR_4[0] = VAR_9;
 VAR_4[1] = VAR_8;
 return 0;

 err_fdr:
 FUNC_4(VAR_9);
 err_read_pipe:
 FUNC_2(VAR_5[0]);
 FUNC_2(VAR_5[1]);
 return VAR_7;
}
