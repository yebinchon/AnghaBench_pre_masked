
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (struct device_node const*,char const*,int *) ;
 int FUNC_2 (char*,char const*,int ,int ) ;

__attribute__((used)) static const __be32 *FUNC_3(const struct device_node *VAR_1,
    const char *VAR_2, u32 *VAR_3)
{
 const __be32 *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, ((void*)0));
 if (VAR_4)
  *VAR_3 = FUNC_0(VAR_4[0]);
 if (VAR_0 && VAR_4)
  FUNC_2("%s: %#x (%u)\n", VAR_2, *VAR_3, *VAR_3);
 return VAR_4;
}
