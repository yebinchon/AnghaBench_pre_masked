
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_find_data {int entrylength; int entryoffset; int bnode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (struct hfs_find_data*,int ) ;
 int VAR_1 ;

int FUNC_2(struct hfs_find_data *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;
 if (VAR_2->entrylength > VAR_4)
  return -VAR_0;
 FUNC_0(VAR_2->bnode, VAR_3, VAR_2->entryoffset, VAR_2->entrylength);
 return 0;
}
