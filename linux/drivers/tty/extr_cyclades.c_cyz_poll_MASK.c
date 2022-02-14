
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct cyclades_port {int throttle; } ;
struct cyclades_card {int intr_enabled; unsigned int nports; struct cyclades_port* ports; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 struct cyclades_card* VAR_2 ;
 int FUNC_0 (struct cyclades_card*) ;
 int FUNC_1 (struct cyclades_card*) ;
 int FUNC_2 (struct cyclades_port*) ;
 int FUNC_3 (struct cyclades_port*) ;
 int FUNC_4 (struct cyclades_card*) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct cyclades_card *VAR_7;
 struct cyclades_port *VAR_8;
 unsigned long VAR_9 = VAR_5 + VAR_0;
 unsigned int VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_7 = &VAR_2[VAR_11];

  if (!FUNC_0(VAR_7))
   continue;
  if (!FUNC_4(VAR_7))
   continue;


  if (!VAR_7->intr_enabled) {
   VAR_7->intr_enabled = 1;
   continue;
  }

  FUNC_1(VAR_7);

  for (VAR_10 = 0; VAR_10 < VAR_7->nports; VAR_10++) {
   VAR_8 = &VAR_7->ports[VAR_10];

   if (!VAR_8->throttle)
    FUNC_2(VAR_8);
   FUNC_3(VAR_8);
  }

  VAR_9 = VAR_5 + VAR_3;
 }
 FUNC_5(&VAR_4, VAR_9);
}
