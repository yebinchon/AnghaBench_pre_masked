
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {int refcnt; int list; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,struct irq_info*) ;
 struct irq_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(unsigned VAR_3)
{
 struct irq_info *VAR_4;





 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (VAR_4 == ((void*)0))
  FUNC_6("Unable to allocate metadata for IRQ%d\n", VAR_3);

 VAR_4->type = VAR_1;
 VAR_4->refcnt = -1;

 FUNC_3(VAR_3, VAR_4);

 FUNC_5(&VAR_4->list, &VAR_2);
}
