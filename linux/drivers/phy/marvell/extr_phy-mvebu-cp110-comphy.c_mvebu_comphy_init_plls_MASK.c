
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvebu_comphy_priv {scalar_t__ base; } ;
struct mvebu_comphy_lane {int id; struct mvebu_comphy_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mvebu_comphy_lane *VAR_8)
{
 struct mvebu_comphy_priv *VAR_9 = VAR_8->priv;
 u32 VAR_10;


 VAR_10 = FUNC_3(VAR_9->base + FUNC_0(VAR_8->id));
 VAR_10 |= VAR_1 |
        VAR_2 |
        VAR_3;
 FUNC_5(VAR_10, VAR_9->base + FUNC_0(VAR_8->id));


 FUNC_4(VAR_9->base + FUNC_2(VAR_8->id),
      VAR_10,
      VAR_10 & (VAR_6 |
      VAR_7),
      1000, 150000);
 if (!(VAR_10 & (VAR_6 |
       VAR_7)))
  return -VAR_0;


 VAR_10 = FUNC_3(VAR_9->base + FUNC_1(VAR_8->id));
 VAR_10 |= VAR_4;
 FUNC_5(VAR_10, VAR_9->base + FUNC_1(VAR_8->id));


 FUNC_4(VAR_9->base + FUNC_2(VAR_8->id),
      VAR_10, VAR_10 & VAR_5,
      1000, 10000);
 if (!(VAR_10 & VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9->base + FUNC_1(VAR_8->id));
 VAR_10 &= ~VAR_4;
 FUNC_5(VAR_10, VAR_9->base + FUNC_1(VAR_8->id));

 return 0;
}
