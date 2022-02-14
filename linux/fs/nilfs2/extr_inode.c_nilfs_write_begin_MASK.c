
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct address_space*,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, struct address_space *VAR_2,
        loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
        struct page **VAR_6, void **VAR_7)

{
 struct inode *VAR_8 = VAR_2->host;
 int VAR_9 = FUNC_2(VAR_8->i_sb, ((void*)0), 1);

 if (FUNC_4(VAR_9))
  return VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_0);
 if (FUNC_4(VAR_9)) {
  FUNC_3(VAR_2, VAR_3 + VAR_4);
  FUNC_1(VAR_8->i_sb);
 }
 return VAR_9;
}
