
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sky2_port *VAR_3)
{
 struct sky2_hw *VAR_4 = VAR_3->hw;
 unsigned VAR_5 = VAR_3->port;
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);
 VAR_6 |= VAR_0 | VAR_1;
 FUNC_1(VAR_4, VAR_5, VAR_2, VAR_6);
}
