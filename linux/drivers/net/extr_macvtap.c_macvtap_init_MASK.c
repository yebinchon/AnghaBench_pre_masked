
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_6;

 VAR_6 = FUNC_4(&VAR_1, &VAR_4, "macvtap",
         VAR_0);
 if (VAR_6)
  goto out1;

 VAR_6 = FUNC_0(&VAR_2);
 if (VAR_6)
  goto out2;

 VAR_6 = FUNC_3(&VAR_5);
 if (VAR_6)
  goto out3;

 VAR_6 = FUNC_2(&VAR_3);
 if (VAR_6)
  goto out4;

 return 0;

out4:
 FUNC_6(&VAR_5);
out3:
 FUNC_1(&VAR_2);
out2:
 FUNC_5(VAR_4, &VAR_1);
out1:
 return VAR_6;
}
