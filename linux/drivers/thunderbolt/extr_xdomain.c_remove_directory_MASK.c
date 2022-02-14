
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_property_dir {int dummy; } ;
struct TYPE_2__ {struct tb_property_dir const* dir; } ;
struct tb_property {TYPE_1__ value; } ;


 int VAR_0 ;
 struct tb_property* FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (struct tb_property*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, const struct tb_property_dir *VAR_3)
{
 struct tb_property *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2,
        VAR_0);
 if (VAR_4 && VAR_4->value.dir == VAR_3) {
  FUNC_1(VAR_4);
  return 1;
 }
 return 0;
}
