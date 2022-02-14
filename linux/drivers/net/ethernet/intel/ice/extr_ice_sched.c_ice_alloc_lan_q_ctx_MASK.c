
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct ice_vsi_ctx {scalar_t__* num_lan_q_entries; struct ice_q_ctx** lan_q_ctx; } ;
struct ice_q_ctx {int dummy; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int ,struct ice_q_ctx*) ;
 struct ice_vsi_ctx* FUNC_2 (struct ice_hw*,scalar_t__) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (struct ice_q_ctx*,struct ice_q_ctx*,scalar_t__) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_hw *VAR_3, u16 VAR_4, u8 VAR_5, u16 VAR_6)
{
 struct ice_vsi_ctx *VAR_7;
 struct ice_q_ctx *VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_7)
  return VAR_2;

 if (!VAR_7->lan_q_ctx[VAR_5]) {
  VAR_7->lan_q_ctx[VAR_5] = FUNC_0(FUNC_3(VAR_3),
            VAR_6,
            sizeof(*VAR_8),
            VAR_0);
  if (!VAR_7->lan_q_ctx[VAR_5])
   return VAR_1;
  VAR_7->num_lan_q_entries[VAR_5] = VAR_6;
  return 0;
 }

 if (VAR_6 > VAR_7->num_lan_q_entries[VAR_5]) {
  u16 VAR_9 = VAR_7->num_lan_q_entries[VAR_5];

  VAR_8 = FUNC_0(FUNC_3(VAR_3), VAR_6,
         sizeof(*VAR_8), VAR_0);
  if (!VAR_8)
   return VAR_1;
  FUNC_4(VAR_8, VAR_7->lan_q_ctx[VAR_5],
         VAR_9 * sizeof(*VAR_8));
  FUNC_1(FUNC_3(VAR_3), VAR_7->lan_q_ctx[VAR_5]);
  VAR_7->lan_q_ctx[VAR_5] = VAR_8;
  VAR_7->num_lan_q_entries[VAR_5] = VAR_6;
 }
 return 0;
}
