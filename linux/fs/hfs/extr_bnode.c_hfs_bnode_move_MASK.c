
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct hfs_bnode *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct page *VAR_5;
 void *VAR_6;

 FUNC_0(VAR_0, "movebytes: %u,%u,%u\n", VAR_2, VAR_3, VAR_4);
 if (!VAR_4)
  return;
 VAR_3 += VAR_1->page_offset;
 VAR_2 += VAR_1->page_offset;
 VAR_5 = VAR_1->page[0];
 VAR_6 = FUNC_1(VAR_5);
 FUNC_3(VAR_6 + VAR_2, VAR_6 + VAR_3, VAR_4);
 FUNC_2(VAR_5);
 FUNC_4(VAR_5);
}
