
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* dev_addr; } ;
struct mtk_mac {struct mtk_eth* hw; int id; } ;
struct mtk_eth {int page_lock; TYPE_1__* soc; int state; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*,void*) ;
 int FUNC_4 (struct mtk_eth*,char const,int ) ;
 struct mtk_mac* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5, void *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_5, VAR_6);
 struct mtk_mac *VAR_8 = FUNC_5(VAR_5);
 struct mtk_eth *VAR_9 = VAR_8->hw;
 const char *VAR_10 = VAR_5->dev_addr;

 if (VAR_7)
  return VAR_7;

 if (FUNC_9(FUNC_8(VAR_3, &VAR_8->hw->state)))
  return -VAR_0;

 FUNC_6(&VAR_8->hw->page_lock);
 if (FUNC_2(VAR_9->soc->caps, VAR_4)) {
  FUNC_4(VAR_8->hw, (VAR_10[0] << 8) | VAR_10[1],
   VAR_1);
  FUNC_4(VAR_8->hw, (VAR_10[2] << 24) | (VAR_10[3] << 16) |
   (VAR_10[4] << 8) | VAR_10[5],
   VAR_2);
 } else {
  FUNC_4(VAR_8->hw, (VAR_10[0] << 8) | VAR_10[1],
   FUNC_0(VAR_8->id));
  FUNC_4(VAR_8->hw, (VAR_10[2] << 24) | (VAR_10[3] << 16) |
   (VAR_10[4] << 8) | VAR_10[5],
   FUNC_1(VAR_8->id));
 }
 FUNC_7(&VAR_8->hw->page_lock);

 return 0;
}
