
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct resource const**) ;
 struct resource** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct resource const**) ;
 int FUNC_3 (struct resource const*,int ) ;

int FUNC_4(struct device *VAR_3, const struct resource *VAR_4,
      phys_addr_t VAR_5)
{
 const struct resource **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
 } else {
  *VAR_6 = VAR_4;
  FUNC_0(VAR_3, VAR_6);
 }

 return VAR_7;
}
