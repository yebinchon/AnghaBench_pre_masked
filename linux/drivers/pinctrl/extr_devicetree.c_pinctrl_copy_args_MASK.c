
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int * args; struct device_node* np; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct of_phandle_args*,int ,int) ;

__attribute__((used)) static int FUNC_2(const struct device_node *VAR_1,
        const __be32 *VAR_2,
        int VAR_3, int VAR_4, int VAR_5,
        struct of_phandle_args *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->np = (struct device_node *)VAR_1;
 VAR_6->args_count = VAR_4 + 1;

 if (VAR_3 >= VAR_5)
  return -VAR_0;

 VAR_2 += VAR_3 * (VAR_4 + 1);

 for (VAR_7 = 0; VAR_7 < VAR_4 + 1; VAR_7++)
  VAR_6->args[VAR_7] = FUNC_0(VAR_2++);

 return 0;
}
