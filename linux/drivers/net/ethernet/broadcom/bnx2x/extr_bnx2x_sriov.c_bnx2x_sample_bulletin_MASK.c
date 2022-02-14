
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union pf_vf_bulletin {int dummy; } pf_vf_bulletin ;
typedef scalar_t__ u32 ;
struct pf_vf_bulletin_content {scalar_t__ crc; scalar_t__ version; int valid_bitmap; int link_flags; int link_speed; struct pf_vf_bulletin_content* mac; } ;
struct TYPE_6__ {scalar_t__ version; int mac; struct pf_vf_bulletin_content content; } ;
struct TYPE_5__ {scalar_t__ link_report_flags; int line_speed; } ;
struct bnx2x {TYPE_3__ old_bulletin; TYPE_2__ vf_link_vars; TYPE_1__* dev; TYPE_3__ shadow_bulletin; struct pf_vf_bulletin_content* pf2vf_bulletin; } ;
typedef enum sample_bulletin_result { ____Placeholder_sample_bulletin_result } sample_bulletin_result ;
struct TYPE_4__ {TYPE_3__* dev_addr; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct pf_vf_bulletin_content*) ;
 int FUNC_5 (struct pf_vf_bulletin_content*,int ) ;
 int FUNC_6 (TYPE_3__*,struct pf_vf_bulletin_content*,int) ;

enum sample_bulletin_result FUNC_7(struct bnx2x *VAR_16)
{
 struct pf_vf_bulletin_content *VAR_17;
 int VAR_18;




 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  u32 VAR_19;


  FUNC_6(&VAR_16->shadow_bulletin, VAR_16->pf2vf_bulletin,
         sizeof(union pf_vf_bulletin));

  VAR_19 = FUNC_4(&VAR_16->shadow_bulletin.content);

  if (VAR_16->shadow_bulletin.content.crc == VAR_19)
   break;

  FUNC_0("bad crc on bulletin board. Contained %x computed %x\n",
     VAR_16->shadow_bulletin.content.crc, VAR_19);
 }

 if (VAR_18 >= VAR_5) {
  FUNC_0("pf to vf bulletin board crc was wrong %d consecutive times. Aborting\n",
     VAR_18);
  return VAR_9;
 }
 VAR_17 = &VAR_16->shadow_bulletin.content;


 if (VAR_16->old_bulletin.version == VAR_17->version)
  return VAR_10;


 if (VAR_17->valid_bitmap & 1 << VAR_8 &&
     !FUNC_5(VAR_17->mac, VAR_16->old_bulletin.mac)) {

  FUNC_6(VAR_16->dev->dev_addr, VAR_17->mac, VAR_6);
 }

 if (VAR_17->valid_bitmap & (1 << VAR_7)) {
  FUNC_1(VAR_4, "link update speed %d flags %x\n",
     VAR_17->link_speed, VAR_17->link_flags);

  VAR_16->vf_link_vars.line_speed = VAR_17->link_speed;
  VAR_16->vf_link_vars.link_report_flags = 0;

  if (VAR_17->link_flags & VAR_13)
   FUNC_3(VAR_1,
      &VAR_16->vf_link_vars.link_report_flags);

  if (VAR_17->link_flags & VAR_12)
   FUNC_3(VAR_0,
      &VAR_16->vf_link_vars.link_report_flags);

  if (VAR_17->link_flags & VAR_14)
   FUNC_3(VAR_2,
      &VAR_16->vf_link_vars.link_report_flags);

  if (VAR_17->link_flags & VAR_15)
   FUNC_3(VAR_3,
      &VAR_16->vf_link_vars.link_report_flags);
  FUNC_2(VAR_16);
 }


 FUNC_6(&VAR_16->old_bulletin, VAR_17,
        sizeof(struct pf_vf_bulletin_content));

 return VAR_11;
}
