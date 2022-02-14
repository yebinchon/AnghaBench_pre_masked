
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hlth_desc; int geom_desc; int unit_desc; int conf_desc; int interc_desc; int pwr_desc; int dev_desc; } ;
struct ufs_hba {TYPE_1__ desc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct ufs_hba *VAR_7)
{
 VAR_7->desc_size.dev_desc = VAR_1;
 VAR_7->desc_size.pwr_desc = VAR_5;
 VAR_7->desc_size.interc_desc = VAR_4;
 VAR_7->desc_size.conf_desc = VAR_0;
 VAR_7->desc_size.unit_desc = VAR_6;
 VAR_7->desc_size.geom_desc = VAR_2;
 VAR_7->desc_size.hlth_desc = VAR_3;
}
