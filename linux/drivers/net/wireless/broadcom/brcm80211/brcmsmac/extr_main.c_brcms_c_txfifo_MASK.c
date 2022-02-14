
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct dma_pub {scalar_t__ txavail; } ;
struct brcms_c_info {TYPE_1__* pub; int wiphy; TYPE_2__* hw; } ;
struct TYPE_4__ {struct dma_pub** di; } ;
struct TYPE_3__ {int ieee_hw; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcms_c_info*,struct dma_pub*,struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(struct brcms_c_info *VAR_2, uint VAR_3, struct sk_buff *VAR_4)
{
 struct dma_pub *VAR_5 = VAR_2->hw->di[VAR_3];
 int VAR_6;
 u16 VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4);
 if (VAR_6 < 0)
  FUNC_4(VAR_2->wiphy, "txfifo: fatal, toss frames !!!\n");






 VAR_7 = FUNC_3(VAR_4);
 if (VAR_5->txavail <= VAR_1 && VAR_3 < VAR_0 &&
     !FUNC_1(VAR_2->pub->ieee_hw, VAR_7))
  FUNC_2(VAR_2->pub->ieee_hw, VAR_7);

 return VAR_6;
}
