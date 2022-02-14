
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_size; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_2__ {int fd; } ;


 TYPE_1__* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ,int*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1, struct address_space *VAR_2,
       loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
       struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_2->host;
 void *VAR_9;
 unsigned VAR_10 = VAR_3 & (VAR_0 - 1);
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6);
 VAR_11 = FUNC_7(FUNC_0(VAR_1)->fd, &VAR_3, VAR_9 + VAR_10, VAR_5);
 FUNC_4(VAR_6);

 if (!FUNC_1(VAR_6) && VAR_11 == VAR_0)
  FUNC_2(VAR_6);





 if (VAR_11 > 0 && (VAR_3 > VAR_8->i_size))
  VAR_8->i_size = VAR_3;
 FUNC_6(VAR_6);
 FUNC_5(VAR_6);

 return VAR_11;
}
