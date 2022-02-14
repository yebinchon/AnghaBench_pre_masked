
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {unsigned char* i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenEAttr; int i_data_sem; TYPE_2__ i_ext; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_size; TYPE_3__* i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {unsigned char* b_data; } ;
struct TYPE_7__ {scalar_t__ s_blocksize; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (struct page*) ;
 struct buffer_head* FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (TYPE_3__*,unsigned char*,scalar_t__,unsigned char*,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_4, struct page *VAR_5)
{
 struct inode *VAR_6 = VAR_5->mapping->host;
 struct buffer_head *VAR_7 = ((void*)0);
 unsigned char *VAR_8;
 int VAR_9;
 unsigned char *VAR_10 = FUNC_5(VAR_5);
 struct udf_inode_info *VAR_11;
 uint32_t VAR_12;


 if (VAR_6->i_size > VAR_6->i_sb->s_blocksize) {
  VAR_9 = -VAR_1;
  goto out_unmap;
 }

 VAR_11 = FUNC_2(VAR_6);
 VAR_12 = FUNC_7(VAR_6, 0);

 FUNC_4(&VAR_11->i_data_sem);
 if (VAR_11->i_alloc_type == VAR_2) {
  VAR_8 = VAR_11->i_ext.i_data + VAR_11->i_lenEAttr;
 } else {
  VAR_7 = FUNC_6(VAR_6->i_sb, VAR_12);

  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto out_unlock_inode;
  }

  VAR_8 = VAR_7->b_data;
 }

 VAR_9 = FUNC_8(VAR_6->i_sb, VAR_8, VAR_6->i_size, VAR_10, VAR_3);
 FUNC_3(VAR_7);
 if (VAR_9)
  goto out_unlock_inode;

 FUNC_10(&VAR_11->i_data_sem);
 FUNC_1(VAR_5);
 FUNC_9(VAR_5);
 return 0;

out_unlock_inode:
 FUNC_10(&VAR_11->i_data_sem);
 FUNC_0(VAR_5);
out_unmap:
 FUNC_9(VAR_5);
 return VAR_9;
}
