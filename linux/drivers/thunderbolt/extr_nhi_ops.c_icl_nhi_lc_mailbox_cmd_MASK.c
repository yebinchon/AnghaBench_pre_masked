
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {int pdev; } ;
typedef enum icl_lc_mailbox_cmd { ____Placeholder_icl_lc_mailbox_cmd } icl_lc_mailbox_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tb_nhi *VAR_4, enum icl_lc_mailbox_cmd VAR_5)
{
 u32 VAR_6;

 VAR_6 = (VAR_5 << VAR_2) & VAR_1;
 FUNC_0(VAR_4->pdev, VAR_0, VAR_6 | VAR_3);
}
