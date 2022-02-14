
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int qsel; int priority; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_2, struct pkt_attrib *VAR_3)
{
 u8 VAR_4;

 VAR_4 = VAR_3->priority;
 FUNC_0(VAR_1, VAR_0, ("### do_queue_select priority =%d , qsel = %d\n", VAR_3->priority, VAR_4));

 VAR_3->qsel = VAR_4;
}
