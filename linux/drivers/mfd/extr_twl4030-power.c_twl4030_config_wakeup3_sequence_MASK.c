
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6;


 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_2);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_1(VAR_3, &VAR_6, VAR_1);
 if (VAR_5)
  goto out;
 VAR_6 |= VAR_0;
 VAR_5 = FUNC_2(VAR_3, VAR_6, VAR_1);
out:
 if (VAR_5)
  FUNC_0("TWL4030 wakeup sequence for P3 config error\n");
 return VAR_5;
}
