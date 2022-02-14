
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_bin_attribute {int dummy; } ;
struct configfs_attribute {int dummy; } ;
struct config_item_type {struct configfs_bin_attribute** ct_bin_attrs; struct configfs_attribute** ct_attrs; } ;
struct config_item {struct config_item_type* ci_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_item*,struct configfs_bin_attribute*) ;
 int FUNC_1 (struct config_item*,struct configfs_attribute*) ;
 int FUNC_2 (struct config_item*) ;

__attribute__((used)) static int FUNC_3(struct config_item *VAR_1)
{
 const struct config_item_type *VAR_2 = VAR_1->ci_type;
 struct configfs_attribute *VAR_3;
 struct configfs_bin_attribute *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;
 if (VAR_2->ct_attrs) {
  for (VAR_6 = 0; (VAR_3 = VAR_2->ct_attrs[VAR_6]) != ((void*)0); VAR_6++) {
   if ((VAR_5 = FUNC_1(VAR_1, VAR_3)))
    break;
  }
 }
 if (VAR_2->ct_bin_attrs) {
  for (VAR_6 = 0; (VAR_4 = VAR_2->ct_bin_attrs[VAR_6]) != ((void*)0); VAR_6++) {
   VAR_5 = FUNC_0(VAR_1, VAR_4);
   if (VAR_5)
    break;
  }
 }

 if (VAR_5)
  FUNC_2(VAR_1);

 return VAR_5;
}
