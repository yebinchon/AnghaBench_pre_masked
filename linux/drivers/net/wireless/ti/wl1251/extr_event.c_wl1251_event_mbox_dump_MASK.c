
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_mailbox {int events_mask; int events_vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct event_mailbox *VAR_1)
{
 FUNC_0(VAR_0, "MBOX DUMP:");
 FUNC_0(VAR_0, "\tvector: 0x%x", VAR_1->events_vector);
 FUNC_0(VAR_0, "\tmask: 0x%x", VAR_1->events_mask);
}
