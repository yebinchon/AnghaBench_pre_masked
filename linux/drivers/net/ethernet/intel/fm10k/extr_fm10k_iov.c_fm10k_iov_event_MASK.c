
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* connect ) (struct fm10k_hw*,TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct fm10k_vf_info {TYPE_4__ mbx; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_5__ {int (* reset_resources ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ iov; } ;
struct fm10k_intfc {struct fm10k_iov_data* iov_data; struct fm10k_hw hw; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fm10k_iov_data*) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_6 (struct fm10k_hw*,TYPE_4__*) ;

s32 FUNC_7(struct fm10k_intfc *VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_2->hw;
 struct fm10k_iov_data *VAR_4;
 s64 VAR_5;
 int VAR_6;


 if (!FUNC_1(VAR_2->iov_data))
  return 0;

 FUNC_3();

 VAR_4 = VAR_2->iov_data;


 if (!VAR_4)
  goto read_unlock;

 if (!(FUNC_2(VAR_3, VAR_0) & VAR_1))
  goto read_unlock;


 VAR_5 = FUNC_2(VAR_3, FUNC_0(1));
 VAR_5 <<= 32;
 VAR_5 |= FUNC_2(VAR_3, FUNC_0(0));

 VAR_6 = VAR_4->num_vfs;

 for (VAR_5 <<= 64 - VAR_6; VAR_5 && VAR_6--; VAR_5 += VAR_5) {
  struct fm10k_vf_info *VAR_7 = &VAR_4->vf_info[VAR_6];

  if (VAR_5 >= 0)
   continue;

  VAR_3->iov.ops.reset_resources(VAR_3, VAR_7);
  VAR_7->mbx.ops.connect(VAR_3, &VAR_7->mbx);
 }

read_unlock:
 FUNC_4();

 return 0;
}
