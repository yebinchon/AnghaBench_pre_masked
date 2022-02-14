
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct ksz_device {int phy_port_cnt; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_3, int VAR_4,
         struct phy_device *VAR_5)
{

 if (VAR_4 >= VAR_3->phy_port_cnt)
  return;


 FUNC_0(VAR_5,
        VAR_1);


 if (!(VAR_3->features & VAR_2))
  FUNC_0(VAR_5,
         VAR_0);
}
