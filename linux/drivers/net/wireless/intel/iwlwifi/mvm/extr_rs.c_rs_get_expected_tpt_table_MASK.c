
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rs_tx_column {scalar_t__ mode; scalar_t__ sgi; } ;
struct iwl_lq_sta {scalar_t__ is_agg; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int const* VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int ** VAR_9 ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int ** VAR_12 ;

__attribute__((used)) static const u16 *FUNC_1(struct iwl_lq_sta *VAR_13,
         const struct rs_tx_column *VAR_14,
         u32 VAR_15)
{

 const u16 (*VAR_16)[VAR_0];

 if (FUNC_0(VAR_14->mode != VAR_1 &&
    VAR_14->mode != VAR_3 &&
    VAR_14->mode != VAR_2))
  return VAR_4;


 if (VAR_14->mode == VAR_1)
  return VAR_4;

 VAR_16 = VAR_6;



 if (VAR_14->mode == VAR_3) {
  switch (VAR_15) {
  case 130:
   VAR_16 = VAR_10;
   break;
  case 129:
   VAR_16 = VAR_11;
   break;
  case 128:
   VAR_16 = VAR_12;
   break;
  case 131:
   VAR_16 = VAR_9;
   break;
  default:
   FUNC_0(1);
  }
 } else if (VAR_14->mode == VAR_2) {
  switch (VAR_15) {
  case 130:
   VAR_16 = VAR_6;
   break;
  case 129:
   VAR_16 = VAR_7;
   break;
  case 128:
   VAR_16 = VAR_8;
   break;
  case 131:
   VAR_16 = VAR_5;
   break;
  default:
   FUNC_0(1);
  }
 } else {
  FUNC_0(1);
 }

 if (!VAR_14->sgi && !VAR_13->is_agg)
  return VAR_16[0];
 else if (VAR_14->sgi && !VAR_13->is_agg)
  return VAR_16[1];
 else if (!VAR_14->sgi && VAR_13->is_agg)
  return VAR_16[2];
 else
  return VAR_16[3];
}
