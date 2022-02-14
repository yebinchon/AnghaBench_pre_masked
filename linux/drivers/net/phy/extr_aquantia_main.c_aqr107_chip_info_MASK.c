
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct phy_device *VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, VAR_0, VAR_1);
 if (VAR_12 < 0)
  return;

 VAR_8 = FUNC_0(VAR_2, VAR_12);
 VAR_9 = FUNC_0(VAR_3, VAR_12);

 VAR_12 = FUNC_1(VAR_7, VAR_0, VAR_4);
 if (VAR_12 < 0)
  return;

 VAR_10 = FUNC_0(VAR_5, VAR_12);
 VAR_11 = FUNC_0(VAR_6, VAR_12);

 FUNC_2(VAR_7, "FW %u.%u, Build %u, Provisioning %u\n",
     VAR_8, VAR_9, VAR_10, VAR_11);
}
