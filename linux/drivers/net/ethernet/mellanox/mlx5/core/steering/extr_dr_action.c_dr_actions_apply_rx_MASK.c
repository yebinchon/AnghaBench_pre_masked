
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int count; } ;
struct dr_action_apply_attr {int flow_tag; int gvmi; int modify_index; int modify_actions; TYPE_1__ vlans; int decap_index; int decap_actions; int decap_with_vlan; int ctr_id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__**,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ,int ) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,int ) ;
 int FUNC_8 (scalar_t__*) ;

__attribute__((used)) static void FUNC_9(u8 *VAR_8,
    u8 *VAR_9,
    struct dr_action_apply_attr *VAR_10,
    u32 *VAR_11)
{
 if (VAR_8[VAR_0])
  FUNC_3(VAR_9, VAR_10->ctr_id);

 if (VAR_8[VAR_5]) {
  FUNC_4(VAR_9, VAR_6);
  FUNC_7(VAR_9, VAR_10->decap_with_vlan);
  FUNC_5(VAR_9,
            VAR_10->decap_actions,
            VAR_10->decap_index);
 }

 if (VAR_8[VAR_4])
  FUNC_6(VAR_9);

 if (VAR_8[VAR_2]) {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_10->vlans.count; VAR_12++) {
   if (VAR_12 ||
       VAR_8[VAR_4] ||
       VAR_8[VAR_5])
    FUNC_0(&VAR_9,
        VAR_11,
        VAR_7,
        VAR_10->gvmi);

   FUNC_8(VAR_9);
  }
 }

 if (VAR_8[VAR_1]) {
  if (FUNC_1(VAR_9) == VAR_6)
   FUNC_0(&VAR_9,
       VAR_11,
       VAR_6,
       VAR_10->gvmi);
  else
   FUNC_4(VAR_9, VAR_6);

  FUNC_5(VAR_9,
            VAR_10->modify_actions,
            VAR_10->modify_index);
 }

 if (VAR_8[VAR_3]) {
  if (FUNC_1(VAR_9) == VAR_6)
   FUNC_0(&VAR_9,
       VAR_11,
       VAR_7,
       VAR_10->gvmi);

  FUNC_2(VAR_9, VAR_10->flow_tag);
 }
}
