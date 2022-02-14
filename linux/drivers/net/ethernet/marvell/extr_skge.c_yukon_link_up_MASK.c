
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; scalar_t__ duplex; scalar_t__ autoneg; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct skge_hw*,int,int ,int ) ;
 int FUNC_2 (struct skge_hw*,int,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ,int) ;
 int FUNC_4 (struct skge_port*) ;
 int FUNC_5 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct skge_port *VAR_10)
{
 struct skge_hw *VAR_11 = VAR_10->hw;
 int VAR_12 = VAR_10->port;
 u16 VAR_13;


 FUNC_5(VAR_11, FUNC_0(VAR_12, VAR_3), VAR_2);

 VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_7);
 if (VAR_10->duplex == VAR_1 || VAR_10->autoneg == VAR_0)
  VAR_13 |= VAR_4;


 VAR_13 |= VAR_5 | VAR_6;
 FUNC_3(VAR_11, VAR_12, VAR_7, VAR_13);

 FUNC_1(VAR_11, VAR_12, VAR_8, VAR_9);
 FUNC_4(VAR_10);
}
