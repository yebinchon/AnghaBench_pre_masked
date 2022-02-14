
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi {int dummy; } ;
typedef enum icl_lc_mailbox_cmd { ____Placeholder_icl_lc_mailbox_cmd } icl_lc_mailbox_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb_nhi*,int) ;
 int FUNC_1 (struct tb_nhi*,int ) ;
 int FUNC_2 (struct tb_nhi*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct tb_nhi *VAR_3, bool VAR_4)
{
 enum icl_lc_mailbox_cmd VAR_5;

 if (!FUNC_3())
  return FUNC_2(VAR_3);

 VAR_5 = VAR_4 ? VAR_0 : VAR_1;
 FUNC_0(VAR_3, VAR_5);
 return FUNC_1(VAR_3, VAR_2);
}
