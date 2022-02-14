
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_property_dir {int properties; } ;
struct TYPE_2__ {int immediate; } ;
struct tb_property {int length; int list; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct tb_property* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

int FUNC_3(struct tb_property_dir *VAR_3, const char *VAR_4,
         u32 VAR_5)
{
 struct tb_property *VAR_6;

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->length = 1;
 VAR_6->value.immediate = VAR_5;

 FUNC_0(&VAR_6->list, &VAR_3->properties);
 return 0;
}
