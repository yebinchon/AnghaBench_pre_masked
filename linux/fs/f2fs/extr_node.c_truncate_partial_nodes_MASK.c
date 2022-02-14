
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_inode {int * i_nid; } ;
struct dnode_of_data {int node_changed; int inode; void* nid; struct page* node_page; } ;
typedef void* nid_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ,void*) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*,int,int) ;
 void* FUNC_6 (struct page*,int,int) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct page*,int,int ,int) ;
 int FUNC_9 (int ,void**,int,int) ;
 int FUNC_10 (struct dnode_of_data*) ;
 int FUNC_11 (struct dnode_of_data*) ;

__attribute__((used)) static int FUNC_12(struct dnode_of_data *VAR_2,
   struct f2fs_inode *VAR_3, int *VAR_4, int VAR_5)
{
 struct page *VAR_6[2];
 nid_t VAR_7[3];
 nid_t VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11 = VAR_5 - 2;

 VAR_7[0] = FUNC_7(VAR_3->i_nid[VAR_4[0] - VAR_1]);
 if (!VAR_7[0])
  return 0;


 for (VAR_10 = 0; VAR_10 < VAR_11 + 1; VAR_10++) {

  VAR_6[VAR_10] = FUNC_3(FUNC_0(VAR_2->inode), VAR_7[VAR_10]);
  if (FUNC_1(VAR_6[VAR_10])) {
   VAR_9 = FUNC_2(VAR_6[VAR_10]);
   VAR_11 = VAR_10 - 1;
   goto fail;
  }
  VAR_7[VAR_10 + 1] = FUNC_6(VAR_6[VAR_10], VAR_4[VAR_10 + 1], 0);
 }

 FUNC_5(VAR_6[VAR_11], VAR_4[VAR_11 + 1], VAR_0);


 for (VAR_10 = VAR_4[VAR_11 + 1]; VAR_10 < VAR_0; VAR_10++) {
  VAR_8 = FUNC_6(VAR_6[VAR_11], VAR_10, 0);
  if (!VAR_8)
   continue;
  VAR_2->nid = VAR_8;
  VAR_9 = FUNC_10(VAR_2);
  if (VAR_9 < 0)
   goto fail;
  if (FUNC_8(VAR_6[VAR_11], VAR_10, 0, 0))
   VAR_2->node_changed = 1;
 }

 if (VAR_4[VAR_11 + 1] == 0) {
  VAR_2->node_page = VAR_6[VAR_11];
  VAR_2->nid = VAR_7[VAR_11];
  VAR_9 = FUNC_11(VAR_2);
  if (VAR_9)
   goto fail;
 } else {
  FUNC_4(VAR_6[VAR_11], 1);
 }
 VAR_4[VAR_11]++;
 VAR_4[VAR_11 + 1] = 0;
 VAR_11--;
fail:
 for (VAR_10 = VAR_11; VAR_10 >= 0; VAR_10--)
  FUNC_4(VAR_6[VAR_10], 1);

 FUNC_9(VAR_2->inode, VAR_7, VAR_5, VAR_9);

 return VAR_9;
}
