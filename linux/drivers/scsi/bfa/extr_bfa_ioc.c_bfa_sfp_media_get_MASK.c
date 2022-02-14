
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ e10g_unall; scalar_t__ e10g_lr; scalar_t__ e10g_lrm; scalar_t__ e10g_sr; } ;
union sfp_xcvr_e10g_code_u {int b; TYPE_2__ r; } ;
typedef int u16 ;
struct TYPE_3__ {int* xcvr; } ;
struct sfp_mem_s {TYPE_1__ srlid_base; } ;
struct bfa_sfp_s {int* media; int state; scalar_t__ dbuf_kva; } ;
typedef enum bfa_defs_sfp_media_e { ____Placeholder_bfa_defs_sfp_media_e } bfa_defs_sfp_media_e ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct bfa_sfp_s*,int) ;

__attribute__((used)) static void
FUNC_1(struct bfa_sfp_s *VAR_18)
{
 enum bfa_defs_sfp_media_e *VAR_19 = VAR_18->media;

 *VAR_19 = VAR_4;

 if (VAR_18->state == VAR_6)
  *VAR_19 = VAR_5;
 else if (VAR_18->state == VAR_7) {
  union sfp_xcvr_e10g_code_u VAR_20;
  struct sfp_mem_s *VAR_21 = (struct sfp_mem_s *)VAR_18->dbuf_kva;
  u16 VAR_22 = (VAR_21->srlid_base.xcvr[4] & 0x3) << 7 |
    (VAR_21->srlid_base.xcvr[5] >> 1);

  VAR_20.b = VAR_21->srlid_base.xcvr[0];
  FUNC_0(VAR_18, VAR_20.b);
  FUNC_0(VAR_18, VAR_22);

  if ((VAR_22 & VAR_10) ||
      (VAR_22 & VAR_9) ||
      (VAR_22 & VAR_8))
   *VAR_19 = VAR_0;
  else if ((VAR_22 & VAR_12) ||
    (VAR_22 & VAR_11))
   *VAR_19 = VAR_1;
  else if ((VAR_22 & VAR_14) ||
    (VAR_22 & VAR_13))
   *VAR_19 = VAR_2;
  else if ((VAR_22 & VAR_16) ||
    (VAR_22 & VAR_17) ||
    (VAR_22 & VAR_15))
   *VAR_19 = VAR_3;

  else if (VAR_20.r.e10g_sr)
   *VAR_19 = VAR_3;
  else if (VAR_20.r.e10g_lrm && VAR_20.r.e10g_lr)
   *VAR_19 = VAR_2;
  else if (VAR_20.r.e10g_unall)
   *VAR_19 = VAR_4;
  else
   FUNC_0(VAR_18, 0);
 } else
  FUNC_0(VAR_18, VAR_18->state);
}
