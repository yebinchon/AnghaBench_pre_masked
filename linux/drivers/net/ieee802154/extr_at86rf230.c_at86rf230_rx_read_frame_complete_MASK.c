
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct at86rf230_state_change {int* buf; struct at86rf230_local* lp; } ;
struct at86rf230_local {int hw; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct sk_buff*,int) ;
 int FUNC_4 (struct at86rf230_state_change*) ;
 int FUNC_5 (struct sk_buff*,int const*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct at86rf230_state_change *VAR_2 = VAR_1;
 struct at86rf230_local *VAR_3 = VAR_2->lp;
 const u8 *VAR_4 = VAR_2->buf;
 struct sk_buff *VAR_5;
 u8 VAR_6, VAR_7;

 VAR_6 = VAR_4[1];
 if (!FUNC_2(VAR_6)) {
  FUNC_1(&VAR_3->spi->dev, "corrupted frame received\n");
  VAR_6 = VAR_0;
 }
 VAR_7 = VAR_4[2 + VAR_6];

 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5) {
  FUNC_1(&VAR_3->spi->dev, "failed to allocate sk_buff\n");
  FUNC_4(VAR_2);
  return;
 }

 FUNC_5(VAR_5, VAR_4 + 2, VAR_6);
 FUNC_3(VAR_3->hw, VAR_5, VAR_7);
 FUNC_4(VAR_2);
}
