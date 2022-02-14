
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_vf_bulletin_content {int valid_bitmap; int link_flags; int link_speed; } ;
struct bnx2x_virtf {scalar_t__ link_cfg; } ;
struct bnx2x_link_report_data {int link_report_flags; int line_speed; } ;
struct bnx2x {TYPE_1__* vfdb; struct bnx2x_link_report_data last_reported_link; } ;
struct TYPE_2__ {int bulletin_mutex; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int,scalar_t__,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int,struct bnx2x_virtf**,struct pf_vf_bulletin_content**,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct bnx2x *VAR_14, int VAR_15)
{
 struct bnx2x_link_report_data *VAR_16 = &VAR_14->last_reported_link;
 struct pf_vf_bulletin_content *VAR_17;
 struct bnx2x_virtf *VAR_18;
 bool VAR_19 = 1;
 int VAR_20 = 0;


 VAR_20 = FUNC_4(VAR_14, VAR_15, &VAR_18, &VAR_17, 0);
 if (VAR_20)
  return VAR_20;

 FUNC_5(&VAR_14->vfdb->bulletin_mutex);

 if (VAR_18->link_cfg == VAR_5) {
  VAR_17->valid_bitmap |= 1 << VAR_8;

  VAR_17->link_speed = VAR_16->line_speed;
  VAR_17->link_flags = 0;
  if (FUNC_7(VAR_1,
        &VAR_16->link_report_flags))
   VAR_17->link_flags |= VAR_11;
  if (FUNC_7(VAR_0,
        &VAR_16->link_report_flags))
   VAR_17->link_flags |= VAR_10;
  if (FUNC_7(VAR_2,
        &VAR_16->link_report_flags))
   VAR_17->link_flags |= VAR_12;
  if (FUNC_7(VAR_3,
        &VAR_16->link_report_flags))
   VAR_17->link_flags |= VAR_13;
 } else if (VAR_18->link_cfg == VAR_6 &&
     !(VAR_17->link_flags & VAR_11)) {
  VAR_17->valid_bitmap |= 1 << VAR_8;
  VAR_17->link_flags |= VAR_11;
 } else if (VAR_18->link_cfg == VAR_7 &&
     (VAR_17->link_flags & VAR_11)) {
  VAR_17->valid_bitmap |= 1 << VAR_8;
  VAR_17->link_speed = FUNC_2(VAR_14);
  VAR_17->link_flags &= ~VAR_11;
 } else {
  VAR_19 = 0;
 }

 if (VAR_19) {
  FUNC_1(VAR_9 | VAR_4,
     "vf %d mode %u speed %d flags %x\n", VAR_15,
     VAR_18->link_cfg, VAR_17->link_speed, VAR_17->link_flags);


  VAR_20 = FUNC_3(VAR_14, VAR_15);
  if (VAR_20) {
   FUNC_0("failed to update VF[%d] bulletin\n", VAR_15);
   goto out;
  }
 }

out:
 FUNC_6(&VAR_14->vfdb->bulletin_mutex);
 return VAR_20;
}
