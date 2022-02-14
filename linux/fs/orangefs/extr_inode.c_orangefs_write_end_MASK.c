
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {unsigned int i_size; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*,unsigned int) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,unsigned int,unsigned int) ;
 int FUNC_10 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1, struct address_space *VAR_2,
    loff_t VAR_3, unsigned VAR_4, unsigned VAR_5, struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_6->mapping->host;
 loff_t VAR_9 = VAR_3 + VAR_5;





 if (VAR_9 > VAR_8->i_size)
  FUNC_3(VAR_8, VAR_9);


 if (!FUNC_0(VAR_6)) {
  unsigned VAR_10 = VAR_3 & (VAR_0 - 1);
  if (VAR_5 < VAR_4) {
   FUNC_9(VAR_6, VAR_10 + VAR_5, VAR_4 - VAR_5);
  }

  if (VAR_3 == FUNC_5(VAR_6) &&
      (VAR_4 == VAR_0 || VAR_3 + VAR_4 == VAR_8->i_size)) {
   FUNC_10(VAR_6, VAR_10 + VAR_5, VAR_0);
   FUNC_1(VAR_6);
  }
 }

 FUNC_7(VAR_6);
 FUNC_8(VAR_6);
 FUNC_6(VAR_6);

 FUNC_4(FUNC_2(VAR_1));
 return VAR_5;
}
