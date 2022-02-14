
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
struct afs_vnode {int cache; } ;
struct TYPE_2__ {int host; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,struct page*) ;
 int FUNC_9 (int ,struct page*) ;
 unsigned long FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;
 int FUNC_12 (struct afs_vnode*,int ,int ,unsigned long) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(struct page *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 struct afs_vnode *VAR_4 = FUNC_0(VAR_1->mapping->host);
 unsigned long VAR_5;

 FUNC_6("{%lu},%u,%u", VAR_1->index, VAR_2, VAR_3);

 FUNC_1(!FUNC_4(VAR_1));


 if (VAR_2 == 0 && VAR_3 == VAR_0) {
  if (FUNC_5(VAR_1)) {
   VAR_5 = FUNC_10(VAR_1);
   FUNC_12(VAR_4, FUNC_13("inval"),
          VAR_1->index, VAR_5);
   FUNC_11(VAR_1, 0);
   FUNC_2(VAR_1);
  }
 }

 FUNC_7("");
}
