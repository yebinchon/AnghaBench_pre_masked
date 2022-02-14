
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {struct dentry* dentry; } ;
struct page {int dummy; } ;
struct kstat {int size; } ;
struct inode {int i_mapping; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct path *VAR_0, struct kstat *VAR_1,
    u32 VAR_2, unsigned int VAR_3)
{
 struct dentry *VAR_4 = VAR_0->dentry;
 struct inode *VAR_5 = FUNC_2(VAR_4);
 struct page *VAR_6;

 FUNC_3(VAR_5, VAR_1);
 VAR_6 = FUNC_6(VAR_5->i_mapping, 0, ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_1->size = FUNC_7(FUNC_4(VAR_6));
 FUNC_5(VAR_6);

 return 0;
}
