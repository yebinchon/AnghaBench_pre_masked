
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_nt0_area {int rs; int vf; int fla; int rsid; } ;
struct chp_id {int id; } ;
struct chp_link {int fla_mask; int fla; struct chp_id chpid; } ;
struct channel_path {int lock; } ;


 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct chp_id) ;
 int FUNC_2 (struct chp_id*) ;
 int FUNC_3 (struct chp_id) ;
 int FUNC_4 (struct channel_path*) ;
 struct channel_path* FUNC_5 (struct chp_id) ;
 int FUNC_6 (struct chp_link*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct chp_link*) ;

__attribute__((used)) static void FUNC_10(struct chsc_sei_nt0_area *VAR_0)
{
 struct channel_path *VAR_1;
 struct chp_link VAR_2;
 struct chp_id VAR_3;
 int VAR_4;

 FUNC_0(4, "chsc: resource accessibility event (rs=%02x, "
        "rs_id=%04x)\n", VAR_0->rs, VAR_0->rsid);
 if (VAR_0->rs != 4)
  return;
 FUNC_2(&VAR_3);
 VAR_3.id = VAR_0->rsid;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return;

 if (VAR_4 < 0) {
  FUNC_3(VAR_3);
 } else {
  VAR_1 = FUNC_5(VAR_3);
  FUNC_7(&VAR_1->lock);
  FUNC_4(VAR_1);
  FUNC_8(&VAR_1->lock);
 }
 FUNC_6(&VAR_2, 0, sizeof(struct chp_link));
 VAR_2.chpid = VAR_3;
 if ((VAR_0->vf & 0xc0) != 0) {
  VAR_2.fla = VAR_0->fla;
  if ((VAR_0->vf & 0xc0) == 0xc0)

   VAR_2.fla_mask = 0xffff;
  else

   VAR_2.fla_mask = 0xff00;
 }
 FUNC_9(&VAR_2);
}
