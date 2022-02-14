
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {int* reta; struct fm10k_hw hw; TYPE_1__* ring_feature; } ;
struct TYPE_2__ {int indices; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct fm10k_hw*,int ,int) ;

void FUNC_3(struct fm10k_intfc *VAR_2, const u32 *VAR_3)
{
 u16 VAR_4 = VAR_2->ring_feature[VAR_1].indices;
 struct fm10k_hw *VAR_5 = &VAR_2->hw;
 u32 VAR_6[4];
 int VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  u32 VAR_9, VAR_10;


  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   if (VAR_3)
    VAR_10 = VAR_3[4 * VAR_7 + VAR_8];
   else
    VAR_10 = FUNC_1(4 * VAR_7 + VAR_8,
              VAR_4);

   VAR_6[VAR_8] = VAR_10;
  }

  VAR_9 = VAR_6[0] |
   (VAR_6[1] << 8) |
   (VAR_6[2] << 16) |
   (VAR_6[3] << 24);

  if (VAR_2->reta[VAR_7] == VAR_9)
   continue;

  VAR_2->reta[VAR_7] = VAR_9;
  FUNC_2(VAR_5, FUNC_0(0, VAR_7), VAR_9);
 }
}
