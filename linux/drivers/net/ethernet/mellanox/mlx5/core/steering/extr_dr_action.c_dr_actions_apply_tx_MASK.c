
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5dr_domain {int mdev; } ;
struct TYPE_2__ {int count; int * headers; } ;
struct dr_action_apply_attr {int ctr_id; int reformat_size; int reformat_id; int gvmi; TYPE_1__ vlans; int modify_index; int modify_actions; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__**,int *,int ,int ) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,int ) ;
 int FUNC_6 (scalar_t__*,int ,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(struct mlx5dr_domain *VAR_8,
    u8 *VAR_9,
    u8 *VAR_10,
    struct dr_action_apply_attr *VAR_11,
    u32 *VAR_12)
{
 bool VAR_13 = VAR_9[VAR_1] ||
  VAR_9[VAR_2];





 if (VAR_9[VAR_3]) {
  FUNC_3(VAR_10, VAR_5);
  FUNC_5(VAR_10,
            VAR_11->modify_actions,
            VAR_11->modify_index);
 }

 if (VAR_9[VAR_4]) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_11->vlans.count; VAR_14++) {
   if (VAR_14 || VAR_9[VAR_3])
    FUNC_1(&VAR_10,
        VAR_12,
        VAR_6,
        VAR_11->gvmi);

   FUNC_7(VAR_10,
          VAR_11->vlans.headers[VAR_14],
          VAR_13);
  }
 }

 if (VAR_13) {




  if (VAR_9[VAR_3] ||
      VAR_9[VAR_4])
   FUNC_1(&VAR_10,
       VAR_12,
       VAR_6,
       VAR_11->gvmi);

  FUNC_6(VAR_10,
     VAR_11->reformat_id,
     VAR_11->reformat_size,
     VAR_9[VAR_2]);





  if (FUNC_0(VAR_8->mdev, VAR_7))
   FUNC_4(VAR_10);
 }

 if (VAR_9[VAR_0])
  FUNC_2(VAR_10, VAR_11->ctr_id);
}
