
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sky2_port {int dummy; } ;
struct sky2_hw {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sky2_port* FUNC_0 (int ) ;
 int FUNC_1 (struct sky2_port*) ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int) ;
 int FUNC_4 (struct sky2_hw*,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int ) ;
 int FUNC_6 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sky2_hw *VAR_6)
{
 struct sky2_port *VAR_7 = FUNC_0(VAR_6->dev[0]);
 u32 VAR_8;
 u16 VAR_9;


 VAR_8 = FUNC_4(VAR_6, VAR_0);
 VAR_8 &= ~VAR_5;
 FUNC_5(VAR_6, VAR_0, VAR_8);


 VAR_9 = FUNC_2(VAR_6, VAR_2);
 FUNC_6(VAR_6, VAR_1, VAR_4);
 FUNC_3(VAR_6, VAR_2, VAR_9 | 1);
 FUNC_6(VAR_6, VAR_1, VAR_3);

 FUNC_1(VAR_7);
}
