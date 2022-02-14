
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_vcpu {int port; int vcpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct evtchn_bind_vcpu*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7(int VAR_1, unsigned int VAR_2)
{
 struct evtchn_bind_vcpu VAR_3;
 int VAR_4;

 if (!FUNC_1(VAR_1))
  return -1;

 if (!FUNC_5())
  return -1;


 VAR_3.port = VAR_1;
 VAR_3.vcpu = FUNC_6(VAR_2);





 VAR_4 = FUNC_3(VAR_1);






 if (FUNC_0(VAR_0, &VAR_3) >= 0)
  FUNC_2(VAR_1, VAR_2);

 if (!VAR_4)
  FUNC_4(VAR_1);

 return 0;
}
