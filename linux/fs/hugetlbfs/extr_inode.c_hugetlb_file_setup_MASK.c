
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vfsmount {int mnt_sb; } ;
struct user_struct {int dummy; } ;
struct inode {size_t i_size; int i_flags; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct file*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct file* FUNC_2 (struct inode*,struct vfsmount*,char const*,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 TYPE_1__* VAR_10 ;
 struct user_struct* FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct inode*,int ,size_t,int *,int ) ;
 int VAR_11 ;
 struct inode* FUNC_10 (int ,int *,int,int ) ;
 struct vfsmount** VAR_12 ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (size_t,struct user_struct*) ;
 int FUNC_16 (size_t,struct user_struct*) ;

struct file *FUNC_17(const char *VAR_13, size_t VAR_14,
    vm_flags_t VAR_15, struct user_struct **VAR_16,
    int VAR_17, int VAR_18)
{
 struct inode *VAR_19;
 struct vfsmount *VAR_20;
 int VAR_21;
 struct file *VAR_22;

 VAR_21 = FUNC_6(VAR_18);
 if (VAR_21 < 0)
  return FUNC_0(-VAR_0);

 *VAR_16 = ((void*)0);
 VAR_20 = VAR_12[VAR_21];
 if (!VAR_20)
  return FUNC_0(-VAR_1);

 if (VAR_17 == VAR_5 && !FUNC_3()) {
  *VAR_16 = FUNC_5();
  if (FUNC_15(VAR_14, *VAR_16)) {
   FUNC_13(VAR_10);
   FUNC_12("%s (%d): Using mlock ulimits for SHM_HUGETLB is deprecated\n",
    VAR_10->comm, VAR_10->pid);
   FUNC_14(VAR_10);
  } else {
   *VAR_16 = ((void*)0);
   return FUNC_0(-VAR_4);
  }
 }

 VAR_22 = FUNC_0(-VAR_3);
 VAR_19 = FUNC_10(VAR_20->mnt_sb, ((void*)0), VAR_7 | VAR_8, 0);
 if (!VAR_19)
  goto out;
 if (VAR_17 == VAR_5)
  VAR_19->i_flags |= VAR_9;

 VAR_19->i_size = VAR_14;
 FUNC_4(VAR_19);

 if (FUNC_9(VAR_19, 0,
   VAR_14 >> FUNC_8(FUNC_7(VAR_19)), ((void*)0),
   VAR_15))
  VAR_22 = FUNC_0(-VAR_2);
 else
  VAR_22 = FUNC_2(VAR_19, VAR_20, VAR_13, VAR_6,
     &VAR_11);
 if (!FUNC_1(VAR_22))
  return VAR_22;

 FUNC_11(VAR_19);
out:
 if (*VAR_16) {
  FUNC_16(VAR_14, *VAR_16);
  *VAR_16 = ((void*)0);
 }
 return VAR_22;
}
