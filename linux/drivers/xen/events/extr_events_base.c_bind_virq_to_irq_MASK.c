
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ type; } ;
struct evtchn_bind_virq {unsigned int virq; int port; int vcpu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct evtchn_bind_virq*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct irq_info* FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int,int *,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int* FUNC_10 (int ,unsigned int) ;
 int VAR_6 ;
 int FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 (unsigned int,int,int,unsigned int) ;
 int VAR_8 ;
 int FUNC_13 (unsigned int) ;

int FUNC_14(unsigned int VAR_9, unsigned int VAR_10, bool VAR_11)
{
 struct evtchn_bind_virq VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_8(&VAR_5);

 VAR_14 = FUNC_10(VAR_6, VAR_10)[VAR_9];

 if (VAR_14 == -1) {
  VAR_14 = FUNC_11();
  if (VAR_14 < 0)
   goto out;

  if (VAR_11)
   FUNC_7(VAR_14, &VAR_8,
            VAR_4, "virq");
  else
   FUNC_7(VAR_14, &VAR_7,
            VAR_3, "virq");

  VAR_12.virq = VAR_9;
  VAR_12.vcpu = FUNC_13(VAR_10);
  VAR_15 = FUNC_1(VAR_1,
      &VAR_12);
  if (VAR_15 == 0)
   VAR_13 = VAR_12.port;
  else {
   if (VAR_15 == -VAR_0)
    VAR_15 = FUNC_5(VAR_9, VAR_10);
   FUNC_0(VAR_15 < 0);
   VAR_13 = VAR_15;
  }

  VAR_15 = FUNC_12(VAR_10, VAR_14, VAR_13, VAR_9);
  if (VAR_15 < 0) {
   FUNC_3(VAR_14);
   VAR_14 = VAR_15;
   goto out;
  }

  FUNC_4(VAR_13, VAR_10);
 } else {
  struct irq_info *VAR_16 = FUNC_6(VAR_14);
  FUNC_2(VAR_16 == ((void*)0) || VAR_16->type != VAR_2);
 }

out:
 FUNC_9(&VAR_5);

 return VAR_14;
}
