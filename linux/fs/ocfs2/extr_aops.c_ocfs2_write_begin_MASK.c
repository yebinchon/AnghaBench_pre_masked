
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct address_space*,int ,unsigned int,int ,struct page**,void**,struct buffer_head*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1, struct address_space *VAR_2,
        loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
        struct page **VAR_6, void **VAR_7)
{
 int VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct inode *VAR_10 = VAR_2->host;

 VAR_8 = FUNC_4(VAR_10, &VAR_9, 1);
 if (VAR_8) {
  FUNC_3(VAR_8);
  return VAR_8;
 }
 FUNC_2(&FUNC_0(VAR_10)->ip_alloc_sem);

 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_0,
           VAR_6, VAR_7, VAR_9, ((void*)0));
 if (VAR_8) {
  FUNC_3(VAR_8);
  goto out_fail;
 }

 FUNC_1(VAR_9);

 return 0;

out_fail:
 FUNC_7(&FUNC_0(VAR_10)->ip_alloc_sem);

 FUNC_1(VAR_9);
 FUNC_5(VAR_10, 1);

 return VAR_8;
}
