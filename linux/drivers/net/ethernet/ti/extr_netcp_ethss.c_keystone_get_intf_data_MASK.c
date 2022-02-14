
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int dummy; } ;
struct gbe_intf {int dummy; } ;


 int VAR_0 ;
 struct gbe_intf* FUNC_0 (int *,struct netcp_intf*) ;
 int VAR_1 ;

__attribute__((used)) static struct gbe_intf *FUNC_1(struct netcp_intf *VAR_2)
{
 struct gbe_intf *VAR_3;

 VAR_3 = FUNC_0(&VAR_0, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_0(&VAR_1, VAR_2);

 return VAR_3;
}
