
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sff_8247_a0 {int fc_ll_cc7; int length_km; int length_100m; } ;
struct TYPE_9__ {int detected_lr_sfp; int using_lr_setting; } ;
struct qla_hw_data {TYPE_1__ flags; int long_range_distance; scalar_t__ sfp_data; } ;
struct TYPE_10__ {int init_done; } ;
struct TYPE_11__ {TYPE_2__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_3__*,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;

int
FUNC_4(scsi_qla_host_t *VAR_6)
{
 int VAR_7 = VAR_4;
 struct sff_8247_a0 *VAR_8;
 struct qla_hw_data *VAR_9 = VAR_6->hw;

 if (!FUNC_0(VAR_6))
  goto out;

 VAR_7 = FUNC_2(VAR_6, ((void*)0), 0);
 if (VAR_7)
  goto out;

 VAR_8 = (struct sff_8247_a0 *)VAR_6->hw->sfp_data;
 FUNC_3(VAR_6);

 if (VAR_8->fc_ll_cc7 & VAR_1 || VAR_8->fc_ll_cc7 & VAR_0) {

  VAR_9->flags.detected_lr_sfp = 1;

  if (VAR_8->length_km > 5 || VAR_8->length_100m > 50)
   VAR_9->long_range_distance = VAR_2;
  else
   VAR_9->long_range_distance = VAR_3;

  if (VAR_9->flags.detected_lr_sfp != VAR_9->flags.using_lr_setting)
   FUNC_1(VAR_5, VAR_6, 0x507b,
       "Detected Long Range SFP.\n");
 } else {

  VAR_9->flags.detected_lr_sfp = 0;
  if (VAR_9->flags.using_lr_setting)
   FUNC_1(VAR_5, VAR_6, 0x5084,
       "Detected Short Range SFP.\n");
 }

 if (!VAR_6->flags.init_done)
  VAR_7 = VAR_4;
out:
 return VAR_7;
}
