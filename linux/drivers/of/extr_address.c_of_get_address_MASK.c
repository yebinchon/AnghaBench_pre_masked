
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct of_bus {unsigned int (* get_flags ) (int const*) ;int addresses; int (* count_cells ) (struct device_node*,int*,int*) ;} ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int * FUNC_2 (struct device_node*,int ,unsigned int*) ;
 struct of_bus* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (struct device_node*,int*,int*) ;
 unsigned int FUNC_7 (int const*) ;

const __be32 *FUNC_8(struct device_node *VAR_0, int VAR_1, u64 *VAR_2,
      unsigned int *VAR_3)
{
 const __be32 *VAR_4;
 unsigned int VAR_5;
 struct device_node *VAR_6;
 struct of_bus *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_7 = FUNC_3(VAR_6);
 VAR_7->count_cells(VAR_0, &VAR_10, &VAR_11);
 FUNC_4(VAR_6);
 if (!FUNC_0(VAR_10))
  return ((void*)0);


 VAR_4 = FUNC_2(VAR_0, VAR_7->addresses, &VAR_5);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_5 /= 4;

 VAR_8 = VAR_10 + VAR_11;
 for (VAR_9 = 0; VAR_5 >= VAR_8; VAR_5 -= VAR_8, VAR_4 += VAR_8, VAR_9++)
  if (VAR_9 == VAR_1) {
   if (VAR_2)
    *VAR_2 = FUNC_5(VAR_4 + VAR_10, VAR_11);
   if (VAR_3)
    *VAR_3 = VAR_7->get_flags(VAR_4);
   return VAR_4;
  }
 return ((void*)0);
}
