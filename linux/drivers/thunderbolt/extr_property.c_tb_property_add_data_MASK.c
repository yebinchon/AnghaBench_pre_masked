
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_property_dir {int properties; } ;
struct TYPE_2__ {int data; } ;
struct tb_property {size_t length; int list; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb_property*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void const*,size_t) ;
 size_t FUNC_4 (size_t,int) ;
 struct tb_property* FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*) ;

int FUNC_7(struct tb_property_dir *VAR_4, const char *VAR_5,
    const void *VAR_6, size_t VAR_7)
{

 size_t VAR_8 = FUNC_4(VAR_7, 4);
 struct tb_property *VAR_9;

 if (!FUNC_6(VAR_5))
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_5, VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->length = VAR_8 / 4;
 VAR_9->value.data = FUNC_1(VAR_8, VAR_2);
 if (!VAR_9->value.data) {
  FUNC_0(VAR_9);
  return -VAR_1;
 }

 FUNC_3(VAR_9->value.data, VAR_6, VAR_7);

 FUNC_2(&VAR_9->list, &VAR_4->properties);
 return 0;
}
