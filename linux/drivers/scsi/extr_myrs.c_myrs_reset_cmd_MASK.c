
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union myrs_cmd_mbox {int dummy; } myrs_cmd_mbox ;
struct myrs_cmdblk {scalar_t__ status; union myrs_cmd_mbox mbox; } ;


 int FUNC_0 (union myrs_cmd_mbox*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct myrs_cmdblk *VAR_0)
{
 union myrs_cmd_mbox *VAR_1 = &VAR_0->mbox;

 FUNC_0(VAR_1, 0, sizeof(union myrs_cmd_mbox));
 VAR_0->status = 0;
}
