
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {scalar_t__ state; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,int ) ;

 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_3 (struct fm10k_mbx_info*,scalar_t__) ;
 int FUNC_4 (struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_5 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_6 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_7 (struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_8(struct fm10k_hw *VAR_3,
    struct fm10k_mbx_info *VAR_4)
{
 s32 VAR_5;


 if (VAR_4->state == VAR_0)
  return 0;


 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 < 0)
  goto fifo_err;

 if (FUNC_0(VAR_4->mbx_hdr, VAR_1)) {
  FUNC_4(VAR_4);
  goto fifo_err;
 }

 switch (FUNC_0(VAR_4->mbx_hdr, VAR_2)) {
 case 0:
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  break;
 }

fifo_err:
 if (VAR_5 < 0)
  FUNC_3(VAR_4, VAR_5);


 FUNC_2(VAR_3, VAR_4);

 return VAR_5;
}
