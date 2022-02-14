
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_xattr_entry {char* e_name; int e_name_len; int e_value_size; } ;
struct TYPE_2__ {int i_xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct page*,int,unsigned int,char const*,struct f2fs_xattr_entry**,void**,int*) ;
 int FUNC_5 (void*,char*,unsigned int) ;
 unsigned int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct inode *VAR_3, int VAR_4, const char *VAR_5,
  void *VAR_6, size_t VAR_7, struct page *VAR_8)
{
 struct f2fs_xattr_entry *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 unsigned int VAR_11, VAR_12;
 void *VAR_13 = ((void*)0);
 int VAR_14;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_5);
 if (VAR_12 > VAR_2)
  return -VAR_1;

 FUNC_1(&FUNC_0(VAR_3)->i_xattr_sem);
 VAR_10 = FUNC_4(VAR_3, VAR_8, VAR_4, VAR_12, VAR_5,
    &VAR_9, &VAR_13, &VAR_14);
 FUNC_7(&FUNC_0(VAR_3)->i_xattr_sem);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_3(VAR_9->e_value_size);

 if (VAR_6 && VAR_11 > VAR_7) {
  VAR_10 = -VAR_1;
  goto out;
 }

 if (VAR_6) {
  char *VAR_15 = VAR_9->e_name + VAR_9->e_name_len;

  if (VAR_14 - (VAR_15 - (char *)VAR_13) < VAR_11) {
   VAR_10 = -VAR_1;
   goto out;
  }
  FUNC_5(VAR_6, VAR_15, VAR_11);
 }
 VAR_10 = VAR_11;
out:
 FUNC_2(VAR_13);
 return VAR_10;
}
