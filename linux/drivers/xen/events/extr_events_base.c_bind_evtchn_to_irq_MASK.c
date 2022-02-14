
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_2 ;
 struct irq_info* FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int,int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_4 ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (int,unsigned int) ;

int FUNC_11(unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_5 >= FUNC_9())
  return -VAR_0;

 FUNC_6(&VAR_3);

 VAR_6 = FUNC_3(VAR_5);

 if (VAR_6 == -1) {
  VAR_6 = FUNC_8();
  if (VAR_6 < 0)
   goto out;

  FUNC_5(VAR_6, &VAR_4,
           VAR_2, "event");

  VAR_7 = FUNC_10(VAR_6, VAR_5);
  if (VAR_7 < 0) {
   FUNC_1(VAR_6);
   VAR_6 = VAR_7;
   goto out;
  }

  FUNC_2(VAR_5, 0);
 } else {
  struct irq_info *VAR_8 = FUNC_4(VAR_6);
  FUNC_0(VAR_8 == ((void*)0) || VAR_8->type != VAR_1);
 }

out:
 FUNC_7(&VAR_3);

 return VAR_6;
}
