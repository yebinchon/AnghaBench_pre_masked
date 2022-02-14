
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {scalar_t__ state; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fm10k_mbx_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_4 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_5 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_6 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_7 (struct fm10k_mbx_info*) ;
 int FUNC_8 (struct fm10k_hw*,struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_9(struct fm10k_hw *VAR_3,
        struct fm10k_mbx_info *VAR_4)
{
 s32 VAR_5;


 if (VAR_4->state == VAR_1)
  return 0;


 VAR_5 = FUNC_6(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 < 0)
  goto msg_err;

 switch (FUNC_0(VAR_4->mbx_hdr, VAR_2)) {
 case 131:
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }

msg_err:

 if (VAR_5 < 0)
  FUNC_1(VAR_4, VAR_5);


 FUNC_8(VAR_3, VAR_4);

 return VAR_5;
}
