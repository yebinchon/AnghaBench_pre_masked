
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (struct device_node*,int ,scalar_t__*,int *) ;
 int FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (int const*,int ) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1, u64 *VAR_2)
{
 const __be32 *VAR_3;
 u64 VAR_4;


 VAR_3 = FUNC_0(VAR_1, 0, &VAR_4, ((void*)0));
 if (VAR_4)
  return -VAR_0;


 *VAR_2 = FUNC_2(VAR_3, FUNC_1(VAR_1));
 return 0;
}
