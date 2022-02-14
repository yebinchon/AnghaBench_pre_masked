
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {scalar_t__ state; int tail; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int const,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 scalar_t__ FUNC_4 (struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_4,
      struct fm10k_mbx_info *VAR_5)
{
 const u32 *VAR_6 = &VAR_5->mbx_hdr;
 u16 VAR_7, VAR_8;
 s32 VAR_9;


 VAR_7 = FUNC_0(*VAR_6, VAR_2);
 VAR_8 = FUNC_0(*VAR_6, VAR_3);


 if (VAR_5->state == VAR_0) {
  VAR_5->tail = VAR_7;
  VAR_5->state = VAR_1;
 }


 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9)
  return VAR_9;


 FUNC_2(VAR_4, VAR_5);

 return FUNC_1(VAR_4, VAR_5, VAR_7);
}
