
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int spa_order; scalar_t__ spa_mem; } ;
struct ocxl_link {struct spa* spa; int dev; int bus; int domain; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct spa*) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ocxl_link *VAR_0)
{
 struct spa *VAR_1 = VAR_0->spa;

 FUNC_2("Freeing SPA for %x:%x:%x\n", VAR_0->domain, VAR_0->bus,
  VAR_0->dev);

 if (VAR_1 && VAR_1->spa_mem) {
  FUNC_0((unsigned long) VAR_1->spa_mem, VAR_1->spa_order);
  FUNC_1(VAR_1);
  VAR_0->spa = ((void*)0);
 }
}
