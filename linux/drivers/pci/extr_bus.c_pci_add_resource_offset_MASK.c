
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_entry {int offset; } ;
struct resource {int dummy; } ;
struct list_head {int dummy; } ;
typedef int resource_size_t ;


 int FUNC_0 (char*,struct resource*) ;
 int FUNC_1 (struct resource_entry*,struct list_head*) ;
 struct resource_entry* FUNC_2 (struct resource*,int ) ;

void FUNC_3(struct list_head *VAR_0, struct resource *VAR_1,
        resource_size_t VAR_2)
{
 struct resource_entry *VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0);
 if (!VAR_3) {
  FUNC_0("PCI: can't add host bridge window %pR\n", VAR_1);
  return;
 }

 VAR_3->offset = VAR_2;
 FUNC_1(VAR_3, VAR_0);
}
