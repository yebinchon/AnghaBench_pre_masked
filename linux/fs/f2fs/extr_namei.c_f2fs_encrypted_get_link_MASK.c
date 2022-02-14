
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_mapping; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 char const* FUNC_0 (struct page*) ;
 char const* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 char* FUNC_3 (struct inode*,int ,int ,struct delayed_call*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static const char *FUNC_7(struct dentry *VAR_1,
        struct inode *VAR_2,
        struct delayed_call *VAR_3)
{
 struct page *VAR_4;
 const char *VAR_5;

 if (!VAR_1)
  return FUNC_1(-VAR_0);

 VAR_4 = FUNC_6(VAR_2->i_mapping, 0, ((void*)0));
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_2, FUNC_4(VAR_4),
         VAR_2->i_sb->s_blocksize, VAR_3);
 FUNC_5(VAR_4);
 return VAR_5;
}
