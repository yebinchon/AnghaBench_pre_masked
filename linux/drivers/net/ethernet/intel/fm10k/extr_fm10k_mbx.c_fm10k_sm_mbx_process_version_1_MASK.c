
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {scalar_t__ state; int remote; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_5,
       struct fm10k_mbx_info *VAR_6)
{
 const u32 *VAR_7 = &VAR_6->mbx_hdr;
 u16 VAR_8, VAR_9;
 s32 VAR_10;


 VAR_9 = FUNC_0(*VAR_7, VAR_4);
 VAR_8 = FUNC_0(*VAR_7, VAR_3);


 if (VAR_6->state == VAR_1) {
  if (!VAR_6->remote)
   goto send_reply;
  if (VAR_6->remote != 1)
   return VAR_0;

  VAR_6->state = VAR_2;
 }

 do {

  VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;


 } while (VAR_10);

send_reply:
 FUNC_1(VAR_5, VAR_6, VAR_8);

 return 0;
}
