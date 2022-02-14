
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_dirty; } ;


 int FUNC_0 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct address_space*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_1->host;
 int VAR_8;
 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < VAR_3)
  FUNC_4(VAR_1, VAR_2 + VAR_3);
 if (!(VAR_8 < 0)) {

  FUNC_2(VAR_7->i_sb);
  FUNC_1(VAR_7)->i_dirty = 1;
  FUNC_3(VAR_7->i_sb);
 }
 return VAR_8;
}
