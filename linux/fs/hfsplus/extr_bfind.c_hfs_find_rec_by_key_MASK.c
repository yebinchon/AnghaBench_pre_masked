
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfs_find_data {int search_key; int key; } ;
struct hfs_bnode {TYPE_1__* tree; } ;
struct TYPE_2__ {int (* keycmp ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct hfs_bnode *VAR_0,
    struct hfs_find_data *VAR_1,
    int *VAR_2,
    int *VAR_3,
    int *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_0->tree->keycmp(VAR_1->key, VAR_1->search_key);
 if (!VAR_5) {
  (*VAR_3) = (*VAR_4);
  return 1;
 }
 if (VAR_5 < 0)
  (*VAR_2) = (*VAR_4) + 1;
 else
  *(VAR_3) = (*VAR_4) - 1;

 return 0;
}
