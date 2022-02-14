
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(void)
{
 int VAR_9;

 if (!FUNC_8(&VAR_4, VAR_1))
  return -VAR_0;

 VAR_9 = FUNC_6(&VAR_8);
 if (VAR_9)
  goto out1;
 VAR_9 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_9)
  goto out2;
 VAR_9 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_9)
  goto out3;
 VAR_9 = FUNC_4(&VAR_5);
 if (VAR_9)
  goto out4;

 FUNC_5();

out:
 return VAR_9;
out4:
 FUNC_3(VAR_2, &VAR_6);
out3:
 FUNC_3(VAR_3, &VAR_7);
out2:
 FUNC_7(&VAR_8);
 FUNC_0();
out1:
 FUNC_1(VAR_4);
 goto out;
}
