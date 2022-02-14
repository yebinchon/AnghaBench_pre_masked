
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_mapping; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct TYPE_4__ {void* i_data; } ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 char const* FUNC_0 (struct page*) ;
 char const* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 char* FUNC_5 (struct inode*,void const*,unsigned int,struct delayed_call*) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 struct page* FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static const char *FUNC_9(struct dentry *VAR_1,
        struct inode *VAR_2,
        struct delayed_call *VAR_3)
{
 struct page *VAR_4 = ((void*)0);
 const void *VAR_5;
 unsigned int VAR_6;
 const char *VAR_7;

 if (!VAR_1)
  return FUNC_1(-VAR_0);

 if (FUNC_4(VAR_2)) {
  VAR_5 = FUNC_2(VAR_2)->i_data;
  VAR_6 = sizeof(FUNC_2(VAR_2)->i_data);
 } else {
  VAR_4 = FUNC_8(VAR_2->i_mapping, 0, ((void*)0));
  if (FUNC_3(VAR_4))
   return FUNC_0(VAR_4);
  VAR_5 = FUNC_6(VAR_4);
  VAR_6 = VAR_2->i_sb->s_blocksize;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_5, VAR_6, VAR_3);
 if (VAR_4)
  FUNC_7(VAR_4);
 return VAR_7;
}
