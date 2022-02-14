
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {unsigned int port; int netdev; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ,int ) ;
 int FUNC_2 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_3 (struct sky2_hw*,unsigned int,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sky2_port*,int ,int ,char*) ;
 int FUNC_6 (struct sky2_hw*,unsigned int) ;
 int FUNC_7 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct sky2_port *VAR_7)
{
 struct sky2_hw *VAR_8 = VAR_7->hw;
 unsigned VAR_9 = VAR_7->port;
 u16 VAR_10;

 FUNC_1(VAR_8, VAR_9, VAR_5, 0);

 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_2);
 VAR_10 &= ~(VAR_0 | VAR_1);
 FUNC_3(VAR_8, VAR_9, VAR_2, VAR_10);

 FUNC_4(VAR_7->netdev);


 FUNC_7(VAR_8, FUNC_0(VAR_9, VAR_4), VAR_3);

 FUNC_5(VAR_7, VAR_6, VAR_7->netdev, "Link is down\n");

 FUNC_6(VAR_8, VAR_9);
}
