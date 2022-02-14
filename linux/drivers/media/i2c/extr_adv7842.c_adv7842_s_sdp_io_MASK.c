
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_sdp_io_sync_adjustment {int hs_beg; int hs_width; int de_beg; int de_end; int vs_beg_o; int vs_beg_e; int vs_end_o; int vs_end_e; int de_v_beg_o; int de_v_beg_e; int de_v_end_o; int de_v_end_e; scalar_t__ adjust; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_0, struct adv7842_sdp_io_sync_adjustment *VAR_1)
{
 if (VAR_1 && VAR_1->adjust) {
  FUNC_0(VAR_0, 0x94, (VAR_1->hs_beg >> 8) & 0xf);
  FUNC_0(VAR_0, 0x95, VAR_1->hs_beg & 0xff);
  FUNC_0(VAR_0, 0x96, (VAR_1->hs_width >> 8) & 0xf);
  FUNC_0(VAR_0, 0x97, VAR_1->hs_width & 0xff);
  FUNC_0(VAR_0, 0x98, (VAR_1->de_beg >> 8) & 0xf);
  FUNC_0(VAR_0, 0x99, VAR_1->de_beg & 0xff);
  FUNC_0(VAR_0, 0x9a, (VAR_1->de_end >> 8) & 0xf);
  FUNC_0(VAR_0, 0x9b, VAR_1->de_end & 0xff);
  FUNC_0(VAR_0, 0xa8, VAR_1->vs_beg_o);
  FUNC_0(VAR_0, 0xa9, VAR_1->vs_beg_e);
  FUNC_0(VAR_0, 0xaa, VAR_1->vs_end_o);
  FUNC_0(VAR_0, 0xab, VAR_1->vs_end_e);
  FUNC_0(VAR_0, 0xac, VAR_1->de_v_beg_o);
  FUNC_0(VAR_0, 0xad, VAR_1->de_v_beg_e);
  FUNC_0(VAR_0, 0xae, VAR_1->de_v_end_o);
  FUNC_0(VAR_0, 0xaf, VAR_1->de_v_end_e);
 } else {

  FUNC_0(VAR_0, 0x94, 0x00);
  FUNC_0(VAR_0, 0x95, 0x00);
  FUNC_0(VAR_0, 0x96, 0x00);
  FUNC_0(VAR_0, 0x97, 0x20);
  FUNC_0(VAR_0, 0x98, 0x00);
  FUNC_0(VAR_0, 0x99, 0x00);
  FUNC_0(VAR_0, 0x9a, 0x00);
  FUNC_0(VAR_0, 0x9b, 0x00);
  FUNC_0(VAR_0, 0xa8, 0x04);
  FUNC_0(VAR_0, 0xa9, 0x04);
  FUNC_0(VAR_0, 0xaa, 0x04);
  FUNC_0(VAR_0, 0xab, 0x04);
  FUNC_0(VAR_0, 0xac, 0x04);
  FUNC_0(VAR_0, 0xad, 0x04);
  FUNC_0(VAR_0, 0xae, 0x04);
  FUNC_0(VAR_0, 0xaf, 0x04);
 }
}
