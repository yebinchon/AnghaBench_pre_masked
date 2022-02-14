
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sdricoh_host*,int ) ;
 int FUNC_2 (struct sdricoh_host*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sdricoh_host *VAR_6)
{
 FUNC_0(VAR_6->dev, "reset\n");
 FUNC_2(VAR_6, VAR_5, 0x10001);
 FUNC_2(VAR_6, VAR_4, 0x10000);
 if (FUNC_1(VAR_6, VAR_4) != 0x10000)
  return -VAR_0;
 FUNC_2(VAR_6, VAR_4, 0x10007);

 FUNC_2(VAR_6, VAR_2, 0x2000000);
 FUNC_2(VAR_6, VAR_3, 0xe0);



 FUNC_2(VAR_6, VAR_1, 0x18);

 return 0;
}
