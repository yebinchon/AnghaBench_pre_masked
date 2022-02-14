
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* get_fault ) (struct fm10k_hw*,int,struct fm10k_fault*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {TYPE_3__* pdev; struct fm10k_hw hw; } ;
struct fm10k_fault {int member_0; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fm10k_intfc*,int,struct fm10k_fault*) ;
 int FUNC_2 (struct fm10k_hw*,int,struct fm10k_fault*) ;

__attribute__((used)) static void FUNC_3(struct fm10k_intfc *VAR_3, u32 VAR_4)
{
 struct fm10k_hw *VAR_5 = &VAR_3->hw;
 struct fm10k_fault VAR_6 = { 0 };
 int VAR_7, VAR_8;

 for (VAR_4 &= VAR_0, VAR_7 = VAR_2;
      VAR_4;
      VAR_4 >>= 1, VAR_7 += VAR_1) {

  if (!(VAR_4 & 0x1))
   continue;


  VAR_8 = VAR_5->mac.ops.get_fault(VAR_5, VAR_7, &VAR_6);
  if (VAR_8) {
   FUNC_0(&VAR_3->pdev->dev,
    "error reading fault\n");
   continue;
  }

  FUNC_1(VAR_3, VAR_7, &VAR_6);
 }
}
