
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_interdomain {unsigned int remote_dom; unsigned int remote_port; int local_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_bind_interdomain*) ;
 int FUNC_1 (int ) ;

int FUNC_2(unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct evtchn_bind_interdomain VAR_3;
 int VAR_4;

 VAR_3.remote_dom = VAR_1;
 VAR_3.remote_port = VAR_2;

 VAR_4 = FUNC_0(VAR_0,
       &VAR_3);

 return VAR_4 ? : FUNC_1(VAR_3.local_port);
}
