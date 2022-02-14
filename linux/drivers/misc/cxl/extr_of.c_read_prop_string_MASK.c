
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct device_node const*,char const*,int *) ;
 int FUNC_1 (char*,char const*,char*) ;

__attribute__((used)) static const __be32 *FUNC_2(const struct device_node *VAR_1,
    const char *VAR_2)
{
 const __be32 *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0));
 if (VAR_0 && VAR_3)
  FUNC_1("%s: %s\n", VAR_2, (char *) VAR_3);
 return VAR_3;
}
