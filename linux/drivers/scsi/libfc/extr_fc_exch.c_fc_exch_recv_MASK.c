
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_lport {scalar_t__ state; } ;
struct fc_frame_header {int fh_type; int fh_rx_id; int fh_ox_id; int fh_f_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_exch_mgr_anchor {int mp; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct fc_lport*,char*,int,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,struct fc_frame*) ;
 int FUNC_4 (struct fc_lport*,int ,struct fc_frame*) ;
 int FUNC_5 (int ,struct fc_frame*) ;
 int FUNC_6 (int ,struct fc_frame*) ;
 struct fc_exch_mgr_anchor* FUNC_7 (int,struct fc_lport*,struct fc_frame_header*) ;
 int FUNC_8 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_9 (struct fc_frame*) ;
 int FUNC_10 (struct fc_frame*) ;
 int FUNC_11 (struct fc_frame*) ;
 scalar_t__ FUNC_12 (struct fc_frame*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,scalar_t__) ;

void FUNC_16(struct fc_lport *VAR_5, struct fc_frame *VAR_6)
{
 struct fc_frame_header *VAR_7 = FUNC_9(VAR_6);
 struct fc_exch_mgr_anchor *VAR_8;
 u32 VAR_9;


 if (!VAR_5 || VAR_5->state == VAR_4) {
  FUNC_1("Receiving frames for an lport that "
        "has not been initialized correctly\n");
  FUNC_8(VAR_6);
  return;
 }

 VAR_9 = FUNC_13(VAR_7->fh_f_ctl);
 VAR_8 = FUNC_7(VAR_9, VAR_5, VAR_7);
 if (!VAR_8) {
  FUNC_2(VAR_5, "Unable to find Exchange Manager Anchor,"
        "fc_ctl <0x%x>, xid <0x%x>\n",
         VAR_9,
         (VAR_9 & VAR_1) ?
         FUNC_14(VAR_7->fh_ox_id) :
         FUNC_14(VAR_7->fh_rx_id));
  FUNC_8(VAR_6);
  return;
 }




 switch (FUNC_11(VAR_6)) {
 case 128:
  if (VAR_9 & VAR_0)
   FUNC_15(FUNC_10(VAR_6), FUNC_12(VAR_6) - FUNC_0(VAR_9));

 case 129:
  if (VAR_7->fh_type == VAR_3)
   FUNC_3(VAR_8->mp, VAR_6);
  else if ((VAR_9 & (VAR_1 | VAR_2)) ==
    VAR_1)
   FUNC_6(VAR_8->mp, VAR_6);
  else if (VAR_9 & VAR_2)
   FUNC_5(VAR_8->mp, VAR_6);
  else
   FUNC_4(VAR_5, VAR_8->mp, VAR_6);
  break;
 default:
  FUNC_2(VAR_5, "dropping invalid frame (eof %x)",
        FUNC_11(VAR_6));
  FUNC_8(VAR_6);
 }
}
