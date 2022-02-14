
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;} ;
struct fm10k_mbx_info {TYPE_1__ ops; } ;
struct fm10k_mac_update {int action; scalar_t__ flags; void* glort; void* vlan; void* mac_upper; int mac_lower; } ;
struct fm10k_hw {struct fm10k_mbx_info mbx; } ;
typedef int s32 ;
typedef int mac_update ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fm10k_hw*,int) ;
 int FUNC_3 (int*,int ,struct fm10k_mac_update*,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;

__attribute__((used)) static s32 FUNC_6(struct fm10k_hw *VAR_5, u16 VAR_6,
       const u8 *VAR_7, u16 VAR_8, bool VAR_9, u8 VAR_10)
{
 struct fm10k_mbx_info *VAR_11 = &VAR_5->mbx;
 struct fm10k_mac_update VAR_12;
 u32 VAR_13[5];


 VAR_8 &= ~VAR_3;


 if (!FUNC_2(VAR_5, VAR_6) || VAR_8 >= VAR_4)
  return VAR_0;


 VAR_12.mac_lower = FUNC_1(((u32)VAR_7[2] << 24) |
       ((u32)VAR_7[3] << 16) |
       ((u32)VAR_7[4] << 8) |
       ((u32)VAR_7[5]));
 VAR_12.mac_upper = FUNC_0(((u16)VAR_7[0] << 8) |
        ((u16)VAR_7[1]));
 VAR_12.vlan = FUNC_0(VAR_8);
 VAR_12.glort = FUNC_0(VAR_6);
 VAR_12.action = VAR_9 ? 0 : 1;
 VAR_12.flags = VAR_10;


 FUNC_4(VAR_13, VAR_2);
 FUNC_3(VAR_13, VAR_1,
         &VAR_12, sizeof(VAR_12));


 return VAR_11->ops.enqueue_tx(VAR_5, VAR_11, VAR_13);
}
