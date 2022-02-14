
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
typedef int get_block_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,int *) ;
 int FUNC_1 (struct file*,struct address_space*,unsigned int,unsigned int*) ;
 unsigned int FUNC_2 (struct inode*) ;

int FUNC_3(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page **VAR_6, void **VAR_7,
   get_block_t *VAR_8, loff_t *VAR_9)
{
 struct inode *VAR_10 = VAR_2->host;
 unsigned int VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_12 = *VAR_9 & ~VAR_0;
 if (VAR_3+VAR_4 > *VAR_9 && VAR_12 & (VAR_11-1)) {
  *VAR_9 |= (VAR_11-1);
  (*VAR_9)++;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
}
