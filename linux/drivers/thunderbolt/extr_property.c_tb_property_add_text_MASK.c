
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_property_dir {int properties; } ;
struct TYPE_2__ {int text; } ;
struct tb_property {size_t length; int list; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb_property*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 struct tb_property* FUNC_6 (char const*,int ) ;
 int FUNC_7 (char const*) ;

int FUNC_8(struct tb_property_dir *VAR_4, const char *VAR_5,
    const char *VAR_6)
{

 size_t VAR_7 = FUNC_3(FUNC_5(VAR_6) + 1, 4);
 struct tb_property *VAR_8;

 if (!FUNC_7(VAR_5))
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_5, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->length = VAR_7 / 4;
 VAR_8->value.text = FUNC_1(VAR_7, VAR_2);
 if (!VAR_8->value.text) {
  FUNC_0(VAR_8);
  return -VAR_1;
 }

 FUNC_4(VAR_8->value.text, VAR_6);

 FUNC_2(&VAR_8->list, &VAR_4->properties);
 return 0;
}
