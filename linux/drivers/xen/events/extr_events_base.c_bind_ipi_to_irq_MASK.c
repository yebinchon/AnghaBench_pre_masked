
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ type; } ;
struct evtchn_bind_ipi {int port; int vcpu; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct evtchn_bind_ipi*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned int) ;
 int VAR_2 ;
 struct irq_info* FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int *,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int* FUNC_9 (int ,unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int,int,int,unsigned int) ;
 int VAR_5 ;
 int FUNC_12 (unsigned int) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_6, unsigned int VAR_7)
{
 struct evtchn_bind_ipi VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 FUNC_7(&VAR_4);

 VAR_10 = FUNC_9(VAR_3, VAR_7)[VAR_6];

 if (VAR_10 == -1) {
  VAR_10 = FUNC_10();
  if (VAR_10 < 0)
   goto out;

  FUNC_6(VAR_10, &VAR_5,
           VAR_2, "ipi");

  VAR_8.vcpu = FUNC_12(VAR_7);
  if (FUNC_1(VAR_0,
      &VAR_8) != 0)
   FUNC_0();
  VAR_9 = VAR_8.port;

  VAR_11 = FUNC_11(VAR_7, VAR_10, VAR_9, VAR_6);
  if (VAR_11 < 0) {
   FUNC_3(VAR_10);
   VAR_10 = VAR_11;
   goto out;
  }
  FUNC_4(VAR_9, VAR_7);
 } else {
  struct irq_info *VAR_12 = FUNC_5(VAR_10);
  FUNC_2(VAR_12 == ((void*)0) || VAR_12->type != VAR_1);
 }

 out:
 FUNC_8(&VAR_4);
 return VAR_10;
}
