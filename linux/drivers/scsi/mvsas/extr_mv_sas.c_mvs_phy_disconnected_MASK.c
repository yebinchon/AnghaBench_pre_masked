
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_phy {scalar_t__ att_dev_sas_addr; scalar_t__ att_dev_info; scalar_t__ phy_attached; } ;



__attribute__((used)) static void FUNC_0(struct mvs_phy *VAR_0)
{
 VAR_0->phy_attached = 0;
 VAR_0->att_dev_info = 0;
 VAR_0->att_dev_sas_addr = 0;
}
