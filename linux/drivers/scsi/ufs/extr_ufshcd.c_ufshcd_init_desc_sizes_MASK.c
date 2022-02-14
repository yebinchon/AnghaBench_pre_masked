
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ufs_hba*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ufs_hba *VAR_14)
{
 int VAR_15;

 VAR_15 = FUNC_0(VAR_14, VAR_5, 0,
  &VAR_14->desc_size.dev_desc);
 if (VAR_15)
  VAR_14->desc_size.dev_desc = VAR_1;

 VAR_15 = FUNC_0(VAR_14, VAR_9, 0,
  &VAR_14->desc_size.pwr_desc);
 if (VAR_15)
  VAR_14->desc_size.pwr_desc = VAR_12;

 VAR_15 = FUNC_0(VAR_14, VAR_8, 0,
  &VAR_14->desc_size.interc_desc);
 if (VAR_15)
  VAR_14->desc_size.interc_desc = VAR_11;

 VAR_15 = FUNC_0(VAR_14, VAR_4, 0,
  &VAR_14->desc_size.conf_desc);
 if (VAR_15)
  VAR_14->desc_size.conf_desc = VAR_0;

 VAR_15 = FUNC_0(VAR_14, VAR_10, 0,
  &VAR_14->desc_size.unit_desc);
 if (VAR_15)
  VAR_14->desc_size.unit_desc = VAR_13;

 VAR_15 = FUNC_0(VAR_14, VAR_6, 0,
  &VAR_14->desc_size.geom_desc);
 if (VAR_15)
  VAR_14->desc_size.geom_desc = VAR_2;
 VAR_15 = FUNC_0(VAR_14, VAR_7, 0,
  &VAR_14->desc_size.hlth_desc);
 if (VAR_15)
  VAR_14->desc_size.hlth_desc = VAR_3;
}
