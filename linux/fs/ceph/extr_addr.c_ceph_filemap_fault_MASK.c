
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vm_fault_t ;
struct vm_fault {scalar_t__ pgoff; struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct ceph_inode_info {scalar_t__ i_inline_version; } ;
struct ceph_file_info {int fmode; } ;
struct address_space {int dummy; } ;
typedef int sigset_t ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {struct ceph_file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct page*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct inode*,struct page*,int ,int) ;
 int FUNC_3 (struct ceph_file_info*,int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (struct ceph_file_info*,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int,int,int*,struct page**) ;
 struct ceph_inode_info* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ceph_inode_info*,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,struct inode*,scalar_t__,size_t,size_t,...) ;
 struct inode* FUNC_13 (TYPE_1__*) ;
 size_t FUNC_14 (struct vm_fault*) ;
 struct page* FUNC_15 (struct address_space*,int ,int ) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct address_space*,int ) ;
 int FUNC_19 (struct page*) ;
 int VAR_14 ;
 int FUNC_20 (struct page*) ;
 size_t FUNC_21 (int) ;
 int FUNC_22 (struct page*,int,scalar_t__) ;

__attribute__((used)) static vm_fault_t FUNC_23(struct vm_fault *VAR_15)
{
 struct vm_area_struct *VAR_16 = VAR_15->vma;
 struct inode *VAR_17 = FUNC_13(VAR_16->vm_file);
 struct ceph_inode_info *VAR_18 = FUNC_8(VAR_17);
 struct ceph_file_info *VAR_19 = VAR_16->vm_file->private_data;
 struct page *VAR_20 = ((void*)0);
 loff_t VAR_21 = VAR_15->pgoff << VAR_7;
 int VAR_22, VAR_23, VAR_24;
 sigset_t VAR_25;
 vm_fault_t VAR_26 = VAR_12;

 FUNC_4(&VAR_25);

 FUNC_12("filemap_fault %p %llx.%llx %llu~%zd trying to get caps\n",
      VAR_17, FUNC_11(VAR_17), VAR_21, (size_t)VAR_8);
 if (VAR_19->fmode & VAR_3)
  VAR_22 = VAR_0 | VAR_1;
 else
  VAR_22 = VAR_0;

 VAR_23 = 0;
 VAR_24 = FUNC_7(VAR_16->vm_file, VAR_2, VAR_22, -1,
       &VAR_23, &VAR_20);
 if (VAR_24 < 0)
  goto out_restore;

 FUNC_12("filemap_fault %p %llu~%zd got cap refs on %s\n",
      VAR_17, VAR_21, (size_t)VAR_8, FUNC_5(VAR_23));

 if ((VAR_23 & (VAR_0 | VAR_1)) ||
     VAR_18->i_inline_version == VAR_4) {
  FUNC_0(VAR_14, VAR_23);
  FUNC_3(VAR_19, &VAR_14);
  VAR_26 = FUNC_14(VAR_15);
  FUNC_6(VAR_19, &VAR_14);
  FUNC_12("filemap_fault %p %llu~%zd drop cap refs %s ret %x\n",
   VAR_17, VAR_21, (size_t)VAR_8,
    FUNC_5(VAR_23), VAR_26);
 } else
  VAR_24 = -VAR_6;

 if (VAR_20)
  FUNC_19(VAR_20);
 FUNC_9(VAR_18, VAR_23);

 if (VAR_24 != -VAR_6)
  goto out_restore;


 if (VAR_21 >= VAR_8) {

  VAR_26 = VAR_12;
 } else {
  struct address_space *VAR_27 = VAR_17->i_mapping;
  struct page *VAR_28 = FUNC_15(VAR_27, 0,
      FUNC_18(VAR_27,
      ~VAR_13));
  if (!VAR_28) {
   VAR_26 = VAR_11;
   goto out_inline;
  }
  VAR_24 = FUNC_2(VAR_17, VAR_28,
      VAR_5, 1);
  if (VAR_24 < 0 || VAR_21 >= FUNC_17(VAR_17)) {
   FUNC_20(VAR_28);
   FUNC_19(VAR_28);
   VAR_26 = FUNC_21(VAR_24);
   goto out_inline;
  }
  if (VAR_24 < VAR_8)
   FUNC_22(VAR_28, VAR_24, VAR_8);
  else
   FUNC_16(VAR_28);
  FUNC_1(VAR_28);
  VAR_15->page = VAR_28;
  VAR_26 = VAR_10 | VAR_9;
out_inline:
  FUNC_12("filemap_fault %p %llu~%zd read inline data ret %x\n",
       VAR_17, VAR_21, (size_t)VAR_8, VAR_26);
 }
out_restore:
 FUNC_10(&VAR_25);
 if (VAR_24 < 0)
  VAR_26 = FUNC_21(VAR_24);

 return VAR_26;
}
