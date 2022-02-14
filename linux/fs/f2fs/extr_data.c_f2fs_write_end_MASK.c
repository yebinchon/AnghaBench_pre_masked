
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*,unsigned int) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*) ;
 unsigned int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1,
   struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_6->mapping->host;

 FUNC_9(VAR_8, VAR_3, VAR_4, VAR_5);






 if (!FUNC_1(VAR_6)) {
  if (FUNC_10(VAR_5 != VAR_4))
   VAR_5 = 0;
  else
   FUNC_2(VAR_6);
 }
 if (!VAR_5)
  goto unlock_out;

 FUNC_8(VAR_6);

 if (VAR_3 + VAR_5 > FUNC_7(VAR_8) &&
     !FUNC_6(VAR_8))
  FUNC_3(VAR_8, VAR_3 + VAR_5);
unlock_out:
 FUNC_4(VAR_6, 1);
 FUNC_5(FUNC_0(VAR_8), VAR_0);
 return VAR_5;
}
