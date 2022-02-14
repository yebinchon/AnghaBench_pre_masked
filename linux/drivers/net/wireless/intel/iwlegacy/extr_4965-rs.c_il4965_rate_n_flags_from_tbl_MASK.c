
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct il_scale_tbl_info {int ant_type; scalar_t__ is_SGI; int lq_type; scalar_t__ is_dup; scalar_t__ is_ht40; } ;
struct il_priv {int dummy; } ;
struct TYPE_2__ {int plcp; int plcp_siso; int plcp_mimo2; } ;


 int FUNC_0 (char*,...) ;
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
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static u32
FUNC_4(struct il_priv *VAR_12, struct il_scale_tbl_info *VAR_13,
        int VAR_14, u8 VAR_15)
{
 u32 VAR_16 = 0;

 if (FUNC_2(VAR_13->lq_type)) {
  VAR_16 = VAR_11[VAR_14].plcp;
  if (VAR_14 >= VAR_0 && VAR_14 <= VAR_1)
   VAR_16 |= VAR_5;

 } else if (FUNC_1(VAR_13->lq_type)) {
  if (VAR_14 > VAR_2) {
   FUNC_0("Invalid HT rate idx %d\n", VAR_14);
   VAR_14 = VAR_2;
  }
  VAR_16 = VAR_9;

  if (FUNC_3(VAR_13->lq_type))
   VAR_16 |= VAR_11[VAR_14].plcp_siso;
  else
   VAR_16 |= VAR_11[VAR_14].plcp_mimo2;
 } else {
  FUNC_0("Invalid tbl->lq_type %d\n", VAR_13->lq_type);
 }

 VAR_16 |=
     ((VAR_13->ant_type << VAR_4) & VAR_3);

 if (FUNC_1(VAR_13->lq_type)) {
  if (VAR_13->is_ht40) {
   if (VAR_13->is_dup)
    VAR_16 |= VAR_6;
   else
    VAR_16 |= VAR_8;
  }
  if (VAR_13->is_SGI)
   VAR_16 |= VAR_10;

  if (VAR_15) {
   VAR_16 |= VAR_7;
   if (FUNC_3(VAR_13->lq_type) && VAR_13->is_SGI) {
    VAR_16 &= ~VAR_10;
    FUNC_0("GF was set with SGI:SISO\n");
   }
  }
 }
 return VAR_16;
}
