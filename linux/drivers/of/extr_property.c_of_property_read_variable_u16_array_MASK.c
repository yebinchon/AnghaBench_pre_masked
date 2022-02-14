
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device_node {int dummy; } ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct device_node const*,char const*,size_t,size_t,size_t*) ;

int FUNC_4(const struct device_node *VAR_0,
     const char *VAR_1, u16 *VAR_2,
     size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 const __be16 *VAR_7 = FUNC_3(VAR_0, VAR_1,
      (VAR_3 * sizeof(*VAR_2)),
      (VAR_4 * sizeof(*VAR_2)),
      &VAR_5);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (!VAR_4)
  VAR_5 = VAR_3;
 else
  VAR_5 /= sizeof(*VAR_2);

 VAR_6 = VAR_5;
 while (VAR_6--)
  *VAR_2++ = FUNC_2(VAR_7++);

 return VAR_5;
}
