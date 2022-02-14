
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct page* FUNC_1 (int ,int,int *) ;

__attribute__((used)) static struct page *FUNC_2(struct inode *VAR_1,
            pgoff_t VAR_2)
{
 VAR_2 += FUNC_0(VAR_1) >> VAR_0;

 return FUNC_1(VAR_1->i_mapping, VAR_2, ((void*)0));
}
