
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_attrs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int *,int) ;
 int FUNC_2 (struct address_space*,scalar_t__) ;
 int FUNC_3 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct address_space *VAR_4,
   loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
   struct page *VAR_8, void *VAR_9)
{
 struct inode *VAR_10 = VAR_4->host;
 int VAR_11;
 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_11 < VAR_6)
  FUNC_2(VAR_4, VAR_5 + VAR_6);
 if (!(VAR_11 < 0) && !(FUNC_0(VAR_10)->i_attrs & VAR_0)) {
  FUNC_1(VAR_10, ((void*)0), VAR_1|VAR_2);
  FUNC_0(VAR_10)->i_attrs |= VAR_0;
  FUNC_4(VAR_10);
 }
 return VAR_11;
}
