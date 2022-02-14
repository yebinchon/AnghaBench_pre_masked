
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {char* name; TYPE_1__* parent; struct device_node* sibling; int * child; int phandle; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device_node* child; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (struct device_node*,int ) ;

__attribute__((used)) static void FUNC_5(struct device_node *VAR_3)
{
 const __be32 *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_3, VAR_2)) {
  VAR_3->name = FUNC_1(VAR_3, "name", ((void*)0));
  if (!VAR_3->name)
   VAR_3->name = "<NULL>";

  VAR_4 = FUNC_1(VAR_3, "phandle", &VAR_5);
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_3, "linux,phandle", &VAR_5);
  if (FUNC_0(VAR_0) && !VAR_4)
   VAR_4 = FUNC_1(VAR_3, "ibm,phandle", &VAR_5);
  if (VAR_4 && (VAR_5 >= 4))
   VAR_3->phandle = FUNC_2(VAR_4);
  else
   VAR_3->phandle = 0;
 }

 VAR_3->child = ((void*)0);
 VAR_3->sibling = VAR_3->parent->child;
 VAR_3->parent->child = VAR_3;
 FUNC_4(VAR_3, VAR_1);
}
