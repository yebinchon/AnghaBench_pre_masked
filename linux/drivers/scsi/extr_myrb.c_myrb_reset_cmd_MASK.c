
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union myrb_cmd_mbox {int dummy; } myrb_cmd_mbox ;
struct myrb_cmdblk {scalar_t__ status; union myrb_cmd_mbox mbox; } ;


 int FUNC_0 (union myrb_cmd_mbox*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct myrb_cmdblk *VAR_0)
{
 union myrb_cmd_mbox *VAR_1 = &VAR_0->mbox;

 FUNC_0(VAR_1, 0, sizeof(union myrb_cmd_mbox));
 VAR_0->status = 0;
}
