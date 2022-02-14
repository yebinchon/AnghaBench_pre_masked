
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct nicpf {TYPE_1__* hw; int pdev; } ;
struct TYPE_2__ {int bgx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nicpf*,int) ;
 int FUNC_1 (struct nicpf*,int,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct nicpf *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 u16 VAR_8;
 u64 VAR_9;







 if (VAR_5 > 52)
  VAR_5 = 52;

 FUNC_2(VAR_4->pdev, VAR_2, &VAR_8);

 if (VAR_8 == VAR_3)
  VAR_7 = ((VAR_4->hw->bgx_cnt - 1) * VAR_0) + 1;
 else
  VAR_7 = VAR_4->hw->bgx_cnt * VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_9 = FUNC_0(VAR_4, VAR_1 | (VAR_6 << 3));
  VAR_9 &= ~(0xF << 2);
  VAR_9 |= ((VAR_5 / 4) << 2);
  FUNC_1(VAR_4, VAR_1 | (VAR_6 << 3), VAR_9);
 }
}
