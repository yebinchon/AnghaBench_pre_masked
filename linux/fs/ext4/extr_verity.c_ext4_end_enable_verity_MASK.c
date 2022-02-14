
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_mapping; } ;
struct file {int dummy; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ) ;
 int * FUNC_3 (struct inode*,int ,int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,void const*,size_t,int ) ;
 struct inode* FUNC_12 (struct file*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_3, const void *VAR_4,
      size_t VAR_5, u64 VAR_6)
{
 struct inode *VAR_7 = FUNC_12(VAR_3);
 const int VAR_8 = 2;
 handle_t *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 if (VAR_4 != ((void*)0)) {

  VAR_10 = FUNC_11(VAR_7, VAR_4, VAR_5,
         VAR_6);


  if (!VAR_10)
   VAR_10 = FUNC_13(VAR_7->i_mapping);
 }


 if (VAR_4 == ((void*)0) || VAR_10)
  FUNC_10(VAR_7);
 FUNC_2(VAR_7, VAR_2);

 VAR_9 = FUNC_3(VAR_7, VAR_0, VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_6(((void*)0), VAR_7);
  return FUNC_1(VAR_9);
 }

 VAR_11 = FUNC_6(VAR_9, VAR_7);
 if (VAR_11)
  goto out_stop;

 if (VAR_4 != ((void*)0) && !VAR_10) {
  struct ext4_iloc VAR_12;

  VAR_10 = FUNC_7(VAR_9, VAR_7, &VAR_12);
  if (VAR_10)
   goto out_stop;
  FUNC_8(VAR_7, VAR_1);
  FUNC_9(VAR_7);
  VAR_10 = FUNC_5(VAR_9, VAR_7, &VAR_12);
 }
out_stop:
 FUNC_4(VAR_9);
 return VAR_10 ?: VAR_11;
}
