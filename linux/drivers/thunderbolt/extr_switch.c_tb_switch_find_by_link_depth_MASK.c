
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct tb_switch {int dummy; } ;
struct tb_sw_lookup {void* depth; void* link; struct tb* tb; } ;
struct tb {int dummy; } ;
struct device {int dummy; } ;
typedef int lookup ;


 struct device* FUNC_0 (int *,int *,struct tb_sw_lookup*,int ) ;
 int FUNC_1 (struct tb_sw_lookup*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tb_switch* FUNC_2 (struct device*) ;

struct tb_switch *FUNC_3(struct tb *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct tb_sw_lookup VAR_5;
 struct device *VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.tb = VAR_2;
 VAR_5.link = VAR_3;
 VAR_5.depth = VAR_4;

 VAR_6 = FUNC_0(&VAR_0, ((void*)0), &VAR_5, VAR_1);
 if (VAR_6)
  return FUNC_2(VAR_6);

 return ((void*)0);
}
