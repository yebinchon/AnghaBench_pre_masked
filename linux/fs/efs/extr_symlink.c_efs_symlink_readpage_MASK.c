
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int i_size; int i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int efs_block_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (struct page*) ;
 struct buffer_head* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, struct page *VAR_4)
{
 char *VAR_5 = FUNC_5(VAR_4);
 struct buffer_head * VAR_6;
 struct inode * VAR_7 = VAR_4->mapping->host;
 efs_block_t VAR_8 = VAR_7->i_size;
 int VAR_9;

 VAR_9 = -VAR_2;
 if (VAR_8 > 2 * VAR_0)
  goto fail;


 VAR_9 = -VAR_1;
 VAR_6 = FUNC_6(VAR_7->i_sb, FUNC_3(VAR_7, 0));
 if (!VAR_6)
  goto fail;
 FUNC_4(VAR_5, VAR_6->b_data, (VAR_8 > VAR_0) ? VAR_0 : VAR_8);
 FUNC_2(VAR_6);
 if (VAR_8 > VAR_0) {
  VAR_6 = FUNC_6(VAR_7->i_sb, FUNC_3(VAR_7, 1));
  if (!VAR_6)
   goto fail;
  FUNC_4(VAR_5 + VAR_0, VAR_6->b_data, VAR_8 - VAR_0);
  FUNC_2(VAR_6);
 }
 VAR_5[VAR_8] = '\0';
 FUNC_1(VAR_4);
 FUNC_7(VAR_4);
 return 0;
fail:
 FUNC_0(VAR_4);
 FUNC_7(VAR_4);
 return VAR_9;
}
