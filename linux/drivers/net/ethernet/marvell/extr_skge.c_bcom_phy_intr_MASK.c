
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skge_port {int port; int netdev; struct skge_hw* hw; } ;
struct skge_hw {TYPE_1__** dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct skge_hw*,int) ;
 int VAR_8 ;
 int FUNC_1 (struct skge_port*,int ,int ,int ,char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ) ;
 int FUNC_4 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_5(struct skge_port *VAR_9)
{
 struct skge_hw *VAR_10 = VAR_9->hw;
 int VAR_11 = VAR_9->port;
 u16 VAR_12;

 VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_2);
 FUNC_1(VAR_9, VAR_8, VAR_0, VAR_9->netdev,
       "phy interrupt status 0x%x\n", VAR_12);

 if (VAR_12 & VAR_6)
  FUNC_2("%s: uncorrectable pair swap error\n",
         VAR_10->dev[VAR_11]->name);




 if (VAR_12 & VAR_5) {
  u16 VAR_13 = FUNC_3(VAR_10, VAR_11, VAR_1);
  FUNC_4(VAR_10, VAR_11, VAR_1,
      VAR_13 | VAR_7);
  FUNC_4(VAR_10, VAR_11, VAR_1,
      VAR_13 & ~VAR_7);
 }

 if (VAR_12 & (VAR_3 | VAR_4))
  FUNC_0(VAR_10, VAR_11);

}
