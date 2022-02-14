
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_xattr_entry {int dummy; } ;
typedef scalar_t__ nid_t ;
struct TYPE_2__ {scalar_t__ i_xattr_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct f2fs_xattr_entry*) ;
 int VAR_4 ;
 void* FUNC_3 (void*) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,struct inode*) ;
 struct f2fs_xattr_entry* FUNC_5 (struct inode*,void*,void**,unsigned int,unsigned int,char const*) ;
 struct f2fs_xattr_entry* FUNC_6 (void*,void*,unsigned int,unsigned int,char const*) ;
 int FUNC_7 (int ,char*,int ) ;
 void* FUNC_8 (int ,int,int ) ;
 unsigned int FUNC_9 (struct inode*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct inode*,struct page*,void*) ;
 int FUNC_12 (struct inode*,void*) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_6, struct page *VAR_7,
    unsigned int VAR_8, unsigned int VAR_9,
    const char *VAR_10, struct f2fs_xattr_entry **VAR_11,
    void **VAR_12, int *VAR_13)
{
 void *VAR_14, *VAR_15, *VAR_16;
 void *VAR_17 = ((void*)0);
 nid_t VAR_18 = FUNC_0(VAR_6)->i_xattr_nid;
 unsigned int VAR_19 = FUNC_9(VAR_6);
 int VAR_20 = 0;

 if (!VAR_18 && !VAR_19)
  return -VAR_1;

 *VAR_13 = FUNC_4(VAR_18, VAR_6) + VAR_5;
 VAR_15 = FUNC_8(FUNC_1(VAR_6), *VAR_13, VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = (void *)VAR_15 + FUNC_4(VAR_18, VAR_6);


 if (VAR_19) {
  VAR_20 = FUNC_11(VAR_6, VAR_7, VAR_15);
  if (VAR_20)
   goto out;

  *VAR_11 = FUNC_5(VAR_6, VAR_15, &VAR_17,
      VAR_8, VAR_9, VAR_10);
  if (*VAR_11) {
   *VAR_13 = VAR_19;
   goto check;
  }
 }


 if (VAR_18) {
  VAR_20 = FUNC_12(VAR_6, VAR_15);
  if (VAR_20)
   goto out;
 }

 if (VAR_17)
  VAR_14 = FUNC_3(VAR_17) - 1;
 else
  VAR_14 = VAR_15;

 *VAR_11 = FUNC_6(VAR_14, VAR_16, VAR_8, VAR_9, VAR_10);
 if (!*VAR_11) {
  FUNC_7(FUNC_1(VAR_6), "inode (%lu) has corrupted xattr",
        VAR_6->i_ino);
  FUNC_13(FUNC_1(VAR_6), VAR_4);
  VAR_20 = -VAR_0;
  goto out;
 }
check:
 if (FUNC_2(*VAR_11)) {
  VAR_20 = -VAR_1;
  goto out;
 }

 *VAR_12 = VAR_15;
 return 0;
out:
 FUNC_10(VAR_15);
 return VAR_20;
}
