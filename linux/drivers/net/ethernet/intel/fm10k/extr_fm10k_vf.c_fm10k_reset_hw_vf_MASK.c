
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_while_pending; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fm10k_hw*,int ) ;
 scalar_t__ FUNC_1 (struct fm10k_hw*) ;
 int FUNC_2 (struct fm10k_hw*) ;
 int FUNC_3 (struct fm10k_hw*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_5)
{
 s32 VAR_6;


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == VAR_0)
  VAR_5->mac.reset_while_pending++;
 else if (VAR_6)
  return VAR_6;


 FUNC_3(VAR_5, VAR_3, VAR_4);


 FUNC_2(VAR_5);
 FUNC_4(VAR_2);


 FUNC_3(VAR_5, VAR_3, 0);
 if (FUNC_0(VAR_5, VAR_3) & VAR_4)
  return VAR_1;

 return 0;
}
