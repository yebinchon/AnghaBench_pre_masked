
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcms_phy*,int ) ;

int FUNC_6(struct brcms_phy *VAR_0, u16 VAR_1)
{
 int VAR_2 = -1;
 uint VAR_3 = FUNC_0(VAR_1);
 uint VAR_4 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_0))
  VAR_2 = FUNC_5(VAR_0, VAR_3);
 else if (FUNC_1(VAR_0))
  VAR_2 = FUNC_4(VAR_4);

 return VAR_2;
}
