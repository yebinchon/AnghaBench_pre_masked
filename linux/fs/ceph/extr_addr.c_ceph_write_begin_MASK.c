
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int,unsigned int,struct page*) ;
 int FUNC_1 (char*,struct file*,struct inode*,struct page*,int,int) ;
 struct inode* FUNC_2 (struct file*) ;
 struct page* FUNC_3 (struct address_space*,int,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct address_space *VAR_4,
       loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
       struct page **VAR_8, void **VAR_9)
{
 struct inode *VAR_10 = FUNC_2(VAR_3);
 struct page *VAR_11;
 pgoff_t VAR_12 = VAR_5 >> VAR_2;
 int VAR_13;

 do {

  VAR_11 = FUNC_3(VAR_4, VAR_12, 0);
  if (!VAR_11)
   return -VAR_1;

  FUNC_1("write_begin file %p inode %p page %p %d~%d\n", VAR_3,
       VAR_10, VAR_11, (int)VAR_5, (int)VAR_6);

  VAR_13 = FUNC_0(VAR_3, VAR_5, VAR_6, VAR_11);
  if (VAR_13 < 0)
   FUNC_4(VAR_11);
  else
   *VAR_8 = VAR_11;
 } while (VAR_13 == -VAR_0);

 return VAR_13;
}
