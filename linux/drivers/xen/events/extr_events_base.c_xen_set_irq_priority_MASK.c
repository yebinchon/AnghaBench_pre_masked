
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_set_priority {unsigned int priority; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_set_priority*) ;
 int FUNC_1 (unsigned int) ;

int FUNC_2(unsigned VAR_1, unsigned VAR_2)
{
 struct evtchn_set_priority VAR_3;

 VAR_3.port = FUNC_1(VAR_1);
 VAR_3.priority = VAR_2;

 return FUNC_0(VAR_0,
        &VAR_3);
}
