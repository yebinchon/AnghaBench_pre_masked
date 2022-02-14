
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct page*) ;
 void* FUNC_6 (struct inode*,struct page*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,void*,int ) ;
 int FUNC_10 (struct page*,int ,int ) ;

void FUNC_11(struct page *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_1->mapping->host;
 void *VAR_4, *VAR_5;

 if (FUNC_2(VAR_1))
  return;

 FUNC_4(FUNC_0(VAR_1), VAR_1->index);

 FUNC_10(VAR_1, FUNC_1(VAR_3), VAR_0);


 VAR_4 = FUNC_6(VAR_3, VAR_2);
 VAR_5 = FUNC_7(VAR_1);
 FUNC_9(VAR_5, VAR_4, FUNC_1(VAR_3));
 FUNC_5(VAR_1);
 FUNC_8(VAR_5);
 if (!FUNC_2(VAR_1))
  FUNC_3(VAR_1);
}
