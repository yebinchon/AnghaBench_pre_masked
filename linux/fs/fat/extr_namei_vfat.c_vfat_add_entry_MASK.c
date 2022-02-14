
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct qstr {int name; } ;
struct msdos_dir_slot {int dummy; } ;
struct inode {int dummy; } ;
struct fat_slot_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,struct msdos_dir_slot*,int,struct fat_slot_info*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct timespec64*,int) ;
 int FUNC_4 (struct msdos_dir_slot*) ;
 struct msdos_dir_slot* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ,unsigned int,int,int,struct timespec64*,struct msdos_dir_slot*,int*) ;
 unsigned int FUNC_8 (struct qstr const*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, const struct qstr *VAR_7,
     int VAR_8, int VAR_9, struct timespec64 *VAR_10,
     struct fat_slot_info *VAR_11)
{
 struct msdos_dir_slot *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_8(VAR_7);
 if (VAR_13 == 0)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_3, sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_6, VAR_7->name, VAR_13, VAR_8, VAR_9, VAR_10,
          VAR_12, &VAR_15);
 if (VAR_14)
  goto cleanup;

 VAR_14 = FUNC_1(VAR_6, VAR_12, VAR_15, VAR_11);
 if (VAR_14)
  goto cleanup;


 FUNC_3(VAR_6, VAR_10, VAR_4|VAR_5);
 if (FUNC_0(VAR_6))
  (void)FUNC_2(VAR_6);
 else
  FUNC_6(VAR_6);
cleanup:
 FUNC_4(VAR_12);
 return VAR_14;
}
