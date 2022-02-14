
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_btree_node {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; int b_size; scalar_t__ b_data; TYPE_2__* b_page; } ;
struct TYPE_4__ {TYPE_1__* mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nilfs_btree_node*,int ,struct inode*,int ) ;
 int FUNC_3 (struct buffer_head*) ;

int FUNC_4(struct buffer_head *VAR_0)
{
 struct inode *VAR_1;
 int VAR_2;

 if (FUNC_0(VAR_0))
  return 0;

 VAR_1 = VAR_0->b_page->mapping->host;
 VAR_2 = FUNC_2((struct nilfs_btree_node *)VAR_0->b_data,
          VAR_0->b_size, VAR_1, VAR_0->b_blocknr);
 if (FUNC_1(!VAR_2))
  FUNC_3(VAR_0);
 return VAR_2;
}
