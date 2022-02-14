
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t vm_fault_t ;
struct vm_fault {struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct ceph_inode_info {scalar_t__ i_inline_version; int i_ceph_lock; } ;
struct ceph_file_info {int fmode; } ;
struct ceph_cap_flush {int dummy; } ;
typedef int sigset_t ;
typedef size_t loff_t ;
struct TYPE_6__ {struct ceph_file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct ceph_inode_info*,int ,struct ceph_cap_flush**) ;
 int FUNC_1 (struct inode*,int) ;
 struct ceph_cap_flush* FUNC_2 () ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (struct ceph_cap_flush*) ;
 int FUNC_6 (TYPE_1__*,int ,int,size_t,int*,int *) ;
 struct ceph_inode_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ceph_inode_info*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,struct page*) ;
 int FUNC_11 (TYPE_1__*,size_t,size_t,struct page*) ;
 size_t FUNC_12 (struct inode*) ;
 int FUNC_13 (char*,struct inode*,size_t,size_t,size_t,...) ;
 struct inode* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 size_t FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct page*) ;
 size_t FUNC_19 (struct page*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct page*) ;
 size_t FUNC_26 (int) ;

__attribute__((used)) static vm_fault_t FUNC_27(struct vm_fault *VAR_12)
{
 struct vm_area_struct *VAR_13 = VAR_12->vma;
 struct inode *VAR_14 = FUNC_14(VAR_13->vm_file);
 struct ceph_inode_info *VAR_15 = FUNC_7(VAR_14);
 struct ceph_file_info *VAR_16 = VAR_13->vm_file->private_data;
 struct ceph_cap_flush *VAR_17;
 struct page *VAR_18 = VAR_12->page;
 loff_t VAR_19 = FUNC_19(VAR_18);
 loff_t VAR_20 = FUNC_16(VAR_14);
 size_t VAR_21;
 int VAR_22, VAR_23, VAR_24;
 sigset_t VAR_25;
 vm_fault_t VAR_26 = VAR_11;

 VAR_17 = FUNC_2();
 if (!VAR_17)
  return VAR_10;

 FUNC_21(VAR_14->i_sb);
 FUNC_3(&VAR_25);

 if (VAR_15->i_inline_version != VAR_4) {
  struct page *VAR_27 = ((void*)0);
  if (VAR_19 == 0) {
   FUNC_18(VAR_18);
   VAR_27 = VAR_18;
  }
  VAR_24 = FUNC_10(VAR_13->vm_file, VAR_27);
  if (VAR_27)
   FUNC_25(VAR_27);
  if (VAR_24 < 0)
   goto out_free;
 }

 if (VAR_19 + VAR_7 <= VAR_20)
  VAR_21 = VAR_7;
 else
  VAR_21 = VAR_20 & ~VAR_6;

 FUNC_13("page_mkwrite %p %llx.%llx %llu~%zd getting caps i_size %llu\n",
      VAR_14, FUNC_12(VAR_14), VAR_19, VAR_21, VAR_20);
 if (VAR_16->fmode & VAR_3)
  VAR_22 = VAR_0 | VAR_1;
 else
  VAR_22 = VAR_0;

 VAR_23 = 0;
 VAR_24 = FUNC_6(VAR_13->vm_file, VAR_2, VAR_22, VAR_19 + VAR_21,
       &VAR_23, ((void*)0));
 if (VAR_24 < 0)
  goto out_free;

 FUNC_13("page_mkwrite %p %llu~%zd got cap refs on %s\n",
      VAR_14, VAR_19, VAR_21, FUNC_4(VAR_23));


 FUNC_15(VAR_13->vm_file);
 FUNC_17(VAR_14);

 do {
  FUNC_18(VAR_18);

  if ((VAR_19 > VAR_20) || (VAR_18->mapping != VAR_14->i_mapping)) {
   FUNC_25(VAR_18);
   VAR_26 = VAR_9;
   break;
  }

  VAR_24 = FUNC_11(VAR_13->vm_file, VAR_19, VAR_21, VAR_18);
  if (VAR_24 >= 0) {

   FUNC_22(VAR_18);
   VAR_26 = VAR_8;
  }
 } while (VAR_24 == -VAR_5);

 if (VAR_26 == VAR_8 ||
     VAR_15->i_inline_version != VAR_4) {
  int VAR_28;
  FUNC_23(&VAR_15->i_ceph_lock);
  VAR_15->i_inline_version = VAR_4;
  VAR_28 = FUNC_0(VAR_15, VAR_2,
            &VAR_17);
  FUNC_24(&VAR_15->i_ceph_lock);
  if (VAR_28)
   FUNC_1(VAR_14, VAR_28);
 }

 FUNC_13("page_mkwrite %p %llu~%zd dropping cap refs on %s ret %x\n",
      VAR_14, VAR_19, VAR_21, FUNC_4(VAR_23), VAR_26);
 FUNC_8(VAR_15, VAR_23);
out_free:
 FUNC_9(&VAR_25);
 FUNC_20(VAR_14->i_sb);
 FUNC_5(VAR_17);
 if (VAR_24 < 0)
  VAR_26 = FUNC_26(VAR_24);
 return VAR_26;
}
