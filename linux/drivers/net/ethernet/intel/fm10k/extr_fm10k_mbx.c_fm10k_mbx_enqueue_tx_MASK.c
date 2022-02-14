
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int (* process ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;} ;
struct fm10k_mbx_info {int state; TYPE_1__ ops; int tail_len; int tx_busy; scalar_t__ timeout; int tx; int udelay; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int *,scalar_t__ const*) ;
 int FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_hw *VAR_1,
    struct fm10k_mbx_info *VAR_2, const u32 *VAR_3)
{
 u32 VAR_4 = VAR_2->timeout;
 s32 VAR_5;

 switch (VAR_2->state) {
 case 129:
 case 128:
  return VAR_0;
 default:
  break;
 }


 VAR_5 = FUNC_0(&VAR_2->tx, VAR_3);


 while (VAR_5 && VAR_4) {
  VAR_4--;
  FUNC_3(VAR_2->udelay);
  VAR_2->ops.process(VAR_1, VAR_2);
  VAR_5 = FUNC_0(&VAR_2->tx, VAR_3);
 }


 if (VAR_5) {
  VAR_2->timeout = 0;
  VAR_2->tx_busy++;
 }





 if (!VAR_2->tail_len)
  VAR_2->ops.process(VAR_1, VAR_2);

 return 0;
}
