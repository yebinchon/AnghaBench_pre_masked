
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xfrm_replay_state_esn {scalar_t__ seq; scalar_t__ replay_window; } ;
struct TYPE_5__ {int trigger; int overlap; scalar_t__ esn; } ;
struct mlx5e_ipsec_sa_entry {TYPE_2__ esn_state; TYPE_3__* x; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_6__ {struct xfrm_replay_state_esn* replay_esn; TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static bool FUNC_3(struct mlx5e_ipsec_sa_entry *VAR_2)
{
 struct xfrm_replay_state_esn *VAR_3;
 u32 VAR_4;
 u8 VAR_5;
 u32 *VAR_6;

 if (!(VAR_2->x->props.flags & VAR_1)) {
  VAR_2->esn_state.trigger = 0;
  return 0;
 }

 VAR_3 = VAR_2->x->replay_esn;
 VAR_4 = VAR_3->seq - VAR_3->replay_window + 1;
 VAR_5 = VAR_2->esn_state.overlap;

 VAR_2->esn_state.esn = FUNC_2(VAR_2->x,
          FUNC_0(VAR_4));
 VAR_6 = &VAR_2->esn_state.esn;

 VAR_2->esn_state.trigger = 1;
 if (FUNC_1(VAR_5 && VAR_4 < VAR_0)) {
  ++(*VAR_6);
  VAR_2->esn_state.overlap = 0;
  return 1;
 } else if (FUNC_1(!VAR_5 &&
       (VAR_4 >= VAR_0))) {
  VAR_2->esn_state.overlap = 1;
  return 1;
 }

 return 0;
}
