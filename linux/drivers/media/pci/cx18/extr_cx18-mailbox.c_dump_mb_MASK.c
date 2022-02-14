
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_mailbox {int args; int error; int cmd; int ack; int request; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static void FUNC_2(struct cx18 *VAR_3, struct cx18_mailbox *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_1*11+1];

 if (!(VAR_2 & VAR_0))
  return;

 FUNC_0("%s: req %#010x ack %#010x cmd %#010x err %#010x args%s\n",
         VAR_5, VAR_4->request, VAR_4->ack, VAR_4->cmd, VAR_4->error,
         FUNC_1(VAR_4->args, VAR_1, VAR_6));
}
