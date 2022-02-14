
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *,struct address_space*,int ,int ,int ,struct page**,void**) ;
 int FUNC_3 (int *,struct address_space*,int ,int ,int ,struct page*,void*) ;

int FUNC_4(struct inode *VAR_1, loff_t VAR_2)
{
 struct address_space *VAR_3 = VAR_1->i_mapping;
 struct page *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(((void*)0), VAR_3, VAR_2, 0,
        VAR_0, &VAR_4, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_3(((void*)0), VAR_3, VAR_2, 0, 0, VAR_4, VAR_5);
 FUNC_0(VAR_6 > 0);

out:
 return VAR_6;
}
