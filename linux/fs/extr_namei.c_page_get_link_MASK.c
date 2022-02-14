
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_size; struct address_space* i_mapping; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char const* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct page*) ;
 int VAR_2 ;
 struct page* FUNC_4 (struct address_space*,int ) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 char* FUNC_7 (struct page*) ;
 int VAR_3 ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (struct address_space*,int ,int *) ;
 int FUNC_10 (struct delayed_call*,int ,struct page*) ;

const char *FUNC_11(struct dentry *VAR_4, struct inode *VAR_5,
     struct delayed_call *VAR_6)
{
 char *VAR_7;
 struct page *VAR_8;
 struct address_space *VAR_9 = VAR_5->i_mapping;

 if (!VAR_4) {
  VAR_8 = FUNC_4(VAR_9, 0);
  if (!VAR_8)
   return FUNC_1(-VAR_0);
  if (!FUNC_3(VAR_8)) {
   FUNC_8(VAR_8);
   return FUNC_1(-VAR_0);
  }
 } else {
  VAR_8 = FUNC_9(VAR_9, 0, ((void*)0));
  if (FUNC_2(VAR_8))
   return (char*)VAR_8;
 }
 FUNC_10(VAR_6, VAR_3, VAR_8);
 FUNC_0(FUNC_5(VAR_9) & VAR_2);
 VAR_7 = FUNC_7(VAR_8);
 FUNC_6(VAR_7, VAR_5->i_size, VAR_1 - 1);
 return VAR_7;
}
