
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mb100; scalar_t__ mb200; scalar_t__ mb400; scalar_t__ mb800; scalar_t__ mb1600; } ;
union sfp_xcvr_fc3_code_u {int b; TYPE_3__ r; } ;
struct TYPE_5__ {scalar_t__ e10g_lr; scalar_t__ e10g_sr; } ;
union sfp_xcvr_e10g_code_u {int b; TYPE_2__ r; } ;
struct sfp_xcvr_s {union sfp_xcvr_e10g_code_u e10g; union sfp_xcvr_fc3_code_u fc3; } ;
struct TYPE_4__ {scalar_t__ xcvr; } ;
struct sfp_mem_s {TYPE_1__ srlid_base; } ;
struct bfa_sfp_s {scalar_t__ dbuf_kva; } ;
typedef enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bfa_sfp_s*,int) ;

__attribute__((used)) static bfa_status_t
FUNC_1(struct bfa_sfp_s *VAR_8, enum bfa_port_speed VAR_9)
{
 struct sfp_mem_s *VAR_10 = (struct sfp_mem_s *)VAR_8->dbuf_kva;
 struct sfp_xcvr_s *VAR_11 = (struct sfp_xcvr_s *) VAR_10->srlid_base.xcvr;
 union sfp_xcvr_fc3_code_u VAR_12 = VAR_11->fc3;
 union sfp_xcvr_e10g_code_u VAR_13 = VAR_11->e10g;

 if (VAR_9 == VAR_0) {
  if (VAR_13.r.e10g_sr || VAR_13.r.e10g_lr)
   return VAR_6;
  else {
   FUNC_0(VAR_8, VAR_13.b);
   return VAR_7;
  }
 }
 if (((VAR_9 & VAR_1) && VAR_12) ||
     ((VAR_9 & VAR_5) && VAR_12) ||
     ((VAR_9 & VAR_4) && VAR_12) ||
     ((VAR_9 & VAR_3) && VAR_12) ||
     ((VAR_9 & VAR_2) && VAR_12))
  return VAR_6;
 else {
  FUNC_0(VAR_8, VAR_9);
  FUNC_0(VAR_8, VAR_12);
  FUNC_0(VAR_8, VAR_13.b);
  return VAR_7;
 }
}
