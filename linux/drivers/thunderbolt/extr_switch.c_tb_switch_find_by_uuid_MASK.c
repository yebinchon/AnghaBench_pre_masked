
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct tb_switch {int dummy; } ;
struct tb_sw_lookup {int const* uuid; struct tb* tb; } ;
struct tb {int dummy; } ;
struct device {int dummy; } ;
typedef int lookup ;


 struct device* FUNC_0 (int *,int *,struct tb_sw_lookup*,int ) ;
 int FUNC_1 (struct tb_sw_lookup*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tb_switch* FUNC_2 (struct device*) ;

struct tb_switch *FUNC_3(struct tb *VAR_2, const uuid_t *VAR_3)
{
 struct tb_sw_lookup VAR_4;
 struct device *VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.tb = VAR_2;
 VAR_4.uuid = VAR_3;

 VAR_5 = FUNC_0(&VAR_0, ((void*)0), &VAR_4, VAR_1);
 if (VAR_5)
  return FUNC_2(VAR_5);

 return ((void*)0);
}
