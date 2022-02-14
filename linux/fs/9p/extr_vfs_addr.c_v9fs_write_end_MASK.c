
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
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,unsigned int) ;
 int FUNC_3 (struct inode*,unsigned int) ;
 int FUNC_4 (int ,char*,struct file*,struct address_space*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2, struct address_space *VAR_3,
     loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
     struct page *VAR_7, void *VAR_8)
{
 loff_t VAR_9 = VAR_4 + VAR_6;
 struct inode *VAR_10 = VAR_7->mapping->host;

 FUNC_4(VAR_0, "filp %p, mapping %p\n", VAR_2, VAR_3);

 if (!FUNC_0(VAR_7)) {
  if (FUNC_7(VAR_6 < VAR_5)) {
   VAR_6 = 0;
   goto out;
  } else if (VAR_5 == VAR_1) {
   FUNC_1(VAR_7);
  }
 }




 if (VAR_9 > VAR_10->i_size) {
  FUNC_3(VAR_10, VAR_9 - VAR_10->i_size);
  FUNC_2(VAR_10, VAR_9);
 }
 FUNC_6(VAR_7);
out:
 FUNC_8(VAR_7);
 FUNC_5(VAR_7);

 return VAR_6;
}
