
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ast_vhub_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ast_vhub_dev*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ast_vhub_dev *VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_2, "SET_ADDRESS: Got address %x\n", VAR_3);

 VAR_4 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_4 |= FUNC_1(VAR_3);
 FUNC_3(VAR_4, VAR_2->regs + VAR_0);
}
