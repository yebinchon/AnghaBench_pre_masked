
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {unsigned int size; int device_node; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (int const) ;
 int * FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct map_info *VAR_0)
{
 const __be32 *VAR_1 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0->device_node, "erase-size", ((void*)0));

 return !VAR_1 ? VAR_0->size : FUNC_0(*VAR_1);
}
