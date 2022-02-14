
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode_desc {int mode; int vdo; int svid; } ;
struct pd_mode_data {size_t altmodes; size_t svid_index; int * svids; struct typec_altmode_desc* altmode_desc; } ;
struct tcpm_port {int partner_altmode; struct pd_mode_data mode_data; } ;
typedef int __le32 ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct typec_altmode_desc*,int ,int) ;
 int FUNC_3 (struct tcpm_port*,char*,size_t,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct tcpm_port *VAR_0, const __le32 *VAR_1,
          int VAR_2)
{
 struct pd_mode_data *VAR_3 = &VAR_0->mode_data;
 struct typec_altmode_desc *VAR_4;
 int VAR_5;

 if (VAR_3->altmodes >= FUNC_0(VAR_0->partner_altmode)) {

  return;
 }

 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = &VAR_3->altmode_desc[VAR_3->altmodes];
  FUNC_2(VAR_4, 0, sizeof(*VAR_4));

  VAR_4->svid = VAR_3->svids[VAR_3->svid_index];
  VAR_4->mode = VAR_5;
  VAR_4->vdo = FUNC_1(VAR_1[VAR_5]);

  FUNC_3(VAR_0, " Alternate mode %d: SVID 0x%04x, VDO %d: 0x%08x",
    VAR_3->altmodes, VAR_4->svid,
    VAR_4->mode, VAR_4->vdo);

  VAR_3->altmodes++;
 }
}
