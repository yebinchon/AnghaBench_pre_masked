
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int (* process ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;int (* connect ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;} ;
struct fm10k_mbx_info {TYPE_4__ ops; int timeout; } ;
struct fm10k_vf_info {scalar_t__ vf_flags; int glort; struct fm10k_mbx_info mbx; } ;
struct fm10k_iov_data {int next_vf_mbx; int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_9__ {int (* tx_ready ) (TYPE_5__*,int ) ;int (* process ) (struct fm10k_hw*,TYPE_5__*) ;} ;
struct TYPE_11__ {scalar_t__ state; TYPE_3__ ops; } ;
struct TYPE_7__ {int (* reset_resources ) (struct fm10k_hw*,struct fm10k_vf_info*) ;int (* reset_lport ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_5__ mbx; TYPE_2__ iov; } ;
struct fm10k_intfc {int hw_sm_mbx_full; struct fm10k_iov_data* iov_data; struct fm10k_hw hw; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_iov_data*) ;
 int FUNC_1 (struct fm10k_intfc*,int ,int) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct fm10k_hw*,TYPE_5__*) ;
 int FUNC_9 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_10 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_11 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (struct fm10k_hw*,struct fm10k_mbx_info*) ;

s32 FUNC_14(struct fm10k_intfc *VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_2->hw;
 struct fm10k_iov_data *VAR_4;
 int VAR_5;


 if (!FUNC_0(VAR_2->iov_data))
  return 0;

 FUNC_6();

 VAR_4 = VAR_2->iov_data;


 if (!VAR_4)
  goto read_unlock;


 FUNC_3(VAR_2);
process_mbx:
 for (VAR_5 = VAR_4->next_vf_mbx ? : VAR_4->num_vfs; VAR_5--;) {
  struct fm10k_vf_info *VAR_6 = &VAR_4->vf_info[VAR_5];
  struct fm10k_mbx_info *VAR_7 = &VAR_6->mbx;
  u16 VAR_8 = VAR_6->glort;


  VAR_3->mbx.ops.process(VAR_3, &VAR_3->mbx);


  if (VAR_6->vf_flags && !FUNC_2(VAR_3, VAR_8)) {
   VAR_3->iov.ops.reset_lport(VAR_3, VAR_6);
   FUNC_1(VAR_2, VAR_8, 0);
  }


  if (!VAR_7->timeout) {
   VAR_3->iov.ops.reset_resources(VAR_3, VAR_6);
   VAR_7->ops.connect(VAR_3, VAR_7);
  }


  if (VAR_3->mbx.state == VAR_0 &&
      !VAR_3->mbx.ops.tx_ready(&VAR_3->mbx, VAR_1)) {

   VAR_2->hw_sm_mbx_full++;


   FUNC_5(VAR_2);

   break;
  }


  VAR_7->ops.process(VAR_3, VAR_7);
 }





 if (VAR_5 >= 0) {
  VAR_4->next_vf_mbx = VAR_5 + 1;
 } else if (VAR_4->next_vf_mbx) {
  VAR_4->next_vf_mbx = 0;
  goto process_mbx;
 }


 FUNC_4(VAR_2);

read_unlock:
 FUNC_7();

 return 0;
}
