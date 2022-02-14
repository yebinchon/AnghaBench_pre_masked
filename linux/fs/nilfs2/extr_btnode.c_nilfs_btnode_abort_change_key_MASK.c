
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_btnode_chkey_ctxt {scalar_t__ oldkey; scalar_t__ newkey; TYPE_1__* bh; struct buffer_head* newbh; } ;
struct buffer_head {int dummy; } ;
struct address_space {int i_pages; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int b_page; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;

void FUNC_3(struct address_space *VAR_0,
       struct nilfs_btnode_chkey_ctxt *VAR_1)
{
 struct buffer_head *VAR_2 = VAR_1->newbh;
 __u64 VAR_3 = VAR_1->oldkey, VAR_4 = VAR_1->newkey;

 if (VAR_3 == VAR_4)
  return;

 if (VAR_2 == ((void*)0)) {
  FUNC_2(&VAR_0->i_pages, VAR_4);
  FUNC_1(VAR_1->bh->b_page);
 } else
  FUNC_0(VAR_2);
}
