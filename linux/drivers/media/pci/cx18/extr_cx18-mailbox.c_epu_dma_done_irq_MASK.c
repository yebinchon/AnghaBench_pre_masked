
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx18_mdl_ack {int dummy; } ;
struct cx18_mailbox {scalar_t__* args; } ;
struct cx18_in_work_order {int flags; scalar_t__ mdl_ack; struct cx18_mailbox mb; } ;
struct cx18 {scalar_t__ enc_mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct cx18*,scalar_t__) ;
 int FUNC_1 (struct cx18*,struct cx18_in_work_order*) ;

__attribute__((used)) static int FUNC_2(struct cx18 *VAR_3, struct cx18_in_work_order *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct cx18_mailbox *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_4->mb;
 VAR_5 = VAR_8->args[0];
 VAR_6 = VAR_8->args[1];
 VAR_7 = VAR_8->args[2];

 if (VAR_5 == VAR_1 ||
     VAR_7 == 0 || VAR_7 > VAR_2) {
  if ((VAR_4->flags & VAR_0) == 0)
   FUNC_1(VAR_3, VAR_4);
  return -1;
 }

 for (VAR_9 = 0; VAR_9 < sizeof(struct cx18_mdl_ack) * VAR_7; VAR_9 += sizeof(u32))
  ((u32 *)VAR_4->mdl_ack)[VAR_9 / sizeof(u32)] =
   FUNC_0(VAR_3, VAR_3->enc_mem + VAR_6 + VAR_9);

 if ((VAR_4->flags & VAR_0) == 0)
  FUNC_1(VAR_3, VAR_4);
 return 1;
}
