
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* update_bits ) (int ,int ,int ) ;} ;
struct qcom_smem_state {int priv; TYPE_1__ ops; scalar_t__ orphan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct qcom_smem_state *VAR_2,
    u32 VAR_3,
    u32 VAR_4)
{
 if (VAR_2->orphan)
  return -VAR_1;

 if (!VAR_2->ops.update_bits)
  return -VAR_0;

 return VAR_2->ops.update_bits(VAR_2->priv, VAR_3, VAR_4);
}
