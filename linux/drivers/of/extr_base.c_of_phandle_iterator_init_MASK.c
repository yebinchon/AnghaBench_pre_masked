
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_iterator {char const* cells_name; int cell_count; int const* cur; int const* phandle_end; int const* list_end; struct device_node const* parent; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct of_phandle_iterator*,int ,int) ;
 int * FUNC_1 (struct device_node const*,char const*,int*) ;

int FUNC_2(struct of_phandle_iterator *VAR_2,
  const struct device_node *VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  int VAR_6)
{
 const __be32 *VAR_7;
 int VAR_8;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));





 if (VAR_6 < 0 && !VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_8);
 if (!VAR_7)
  return -VAR_1;

 VAR_2->cells_name = VAR_5;
 VAR_2->cell_count = VAR_6;
 VAR_2->parent = VAR_3;
 VAR_2->list_end = VAR_7 + VAR_8 / sizeof(*VAR_7);
 VAR_2->phandle_end = VAR_7;
 VAR_2->cur = VAR_7;

 return 0;
}
