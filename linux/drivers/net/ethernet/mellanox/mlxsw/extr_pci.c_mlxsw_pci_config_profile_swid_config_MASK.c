
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_swid_config {int properties; scalar_t__ used_properties; int type; scalar_t__ used_type; } ;
struct mlxsw_pci {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_pci *VAR_0,
         char *VAR_1, int VAR_2,
         const struct mlxsw_swid_config *VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3->used_type) {
  FUNC_2(
   VAR_1, VAR_2, VAR_3->type);
  VAR_4 |= 1;
 }
 if (VAR_3->used_properties) {
  FUNC_1(
   VAR_1, VAR_2, VAR_3->properties);
  VAR_4 |= 2;
 }
 FUNC_0(VAR_1, VAR_2, VAR_4);
}
