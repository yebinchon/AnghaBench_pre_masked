
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mb_cache_entry {int e_value; } ;
struct mb_cache {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int ,int ,int ) ;
 void* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct inode*,void*,size_t) ;
 int FUNC_6 (struct inode*,int *,void*,size_t) ;
 size_t FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (void*) ;
 struct mb_cache_entry* FUNC_11 (struct mb_cache*,int ) ;
 struct mb_cache_entry* FUNC_12 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_13 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_14 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_15 (void const*,void*,size_t) ;

__attribute__((used)) static struct inode *
FUNC_16(struct inode *VAR_3, const void *VAR_4,
       size_t VAR_5, u32 VAR_6)
{
 struct inode *VAR_7;
 struct mb_cache_entry *VAR_8;
 struct mb_cache *VAR_9 = FUNC_0(VAR_3);
 void *VAR_10;

 if (!VAR_9)
  return ((void*)0);

 VAR_8 = FUNC_11(VAR_9, VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_10 = FUNC_4(VAR_5, VAR_2);
 if (!VAR_10) {
  FUNC_13(VAR_9, VAR_8);
  return ((void*)0);
 }

 while (VAR_8) {
  VAR_7 = FUNC_3(VAR_3->i_sb, VAR_8->e_value,
         VAR_1);
  if (!FUNC_2(VAR_7) &&
      !FUNC_9(VAR_7) &&
      (FUNC_1(VAR_7)->i_flags & VAR_0) &&
      FUNC_7(VAR_7) == VAR_5 &&
      !FUNC_5(VAR_7, VAR_10, VAR_5) &&
      !FUNC_6(VAR_7, ((void*)0), VAR_10,
          VAR_5) &&
      !FUNC_15(VAR_4, VAR_10, VAR_5)) {
   FUNC_14(VAR_9, VAR_8);
   FUNC_13(VAR_9, VAR_8);
   FUNC_10(VAR_10);
   return VAR_7;
  }

  if (!FUNC_2(VAR_7))
   FUNC_8(VAR_7);
  VAR_8 = FUNC_12(VAR_9, VAR_8);
 }
 FUNC_10(VAR_10);
 return ((void*)0);
}
