
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct vm_area_struct {int vm_flags; struct file* vm_file; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct inode {unsigned long i_size; int i_ctime; struct address_space* i_mapping; } ;
struct hugetlbfs_inode_info {int seals; } ;
struct hstate {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned long pgoff_t ;
typedef unsigned long loff_t ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hugetlbfs_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_5 (struct page*,unsigned long,int ) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_9 ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct file*) ;
 struct page* FUNC_9 (struct address_space*,unsigned long) ;
 struct hstate* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*,struct address_space*,unsigned long) ;
 unsigned long FUNC_12 (struct hstate*) ;
 unsigned long FUNC_13 (struct hstate*) ;
 int FUNC_14 (struct vm_area_struct*) ;
 size_t FUNC_15 (struct hstate*,struct address_space*,unsigned long,unsigned long) ;
 int * VAR_10 ;
 int FUNC_16 (struct vm_area_struct*,struct inode*,unsigned long) ;
 long FUNC_17 (struct inode*,unsigned long,unsigned long) ;
 int FUNC_18 (struct inode*,unsigned long) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*,unsigned long) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct hstate*) ;
 int FUNC_25 (struct page*) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (struct vm_area_struct*,struct mm_struct*) ;

__attribute__((used)) static long FUNC_30(struct file *VAR_11, int VAR_12, loff_t VAR_13,
    loff_t VAR_14)
{
 struct inode *VAR_15 = FUNC_8(VAR_11);
 struct hugetlbfs_inode_info *VAR_16 = FUNC_0(VAR_15);
 struct address_space *VAR_17 = VAR_15->i_mapping;
 struct hstate *VAR_18 = FUNC_10(VAR_15);
 struct vm_area_struct VAR_19;
 struct mm_struct *VAR_20 = VAR_9->mm;
 loff_t VAR_21 = FUNC_13(VAR_18);
 unsigned long VAR_22 = FUNC_12(VAR_18);
 pgoff_t VAR_23, VAR_24, VAR_25;
 int VAR_26;
 u32 VAR_27;

 if (VAR_12 & ~(VAR_3 | VAR_4))
  return -VAR_1;

 if (VAR_12 & VAR_4)
  return FUNC_17(VAR_15, VAR_13, VAR_14);






 VAR_23 = VAR_13 >> VAR_22;
 VAR_25 = (VAR_13 + VAR_14 + VAR_21 - 1) >> VAR_22;

 FUNC_19(VAR_15);


 VAR_26 = FUNC_20(VAR_15, VAR_13 + VAR_14);
 if (VAR_26)
  goto out;

 if ((VAR_16->seals & VAR_5) && VAR_13 + VAR_14 > VAR_15->i_size) {
  VAR_26 = -VAR_2;
  goto out;
 }






 FUNC_29(&VAR_19, VAR_20);
 VAR_19.vm_flags = (VAR_6 | VAR_7 | VAR_8);
 VAR_19.vm_file = VAR_11;

 for (VAR_24 = VAR_23; VAR_24 < VAR_25; VAR_24++) {




  struct page *VAR_28;
  unsigned long VAR_29;
  int VAR_30 = 0;

  FUNC_6();





  if (FUNC_26(VAR_9)) {
   VAR_26 = -VAR_0;
   break;
  }


  FUNC_16(&VAR_19, VAR_15, VAR_24);


  VAR_29 = VAR_24 * VAR_21;


  VAR_27 = FUNC_15(VAR_18, VAR_17, VAR_24, VAR_29);
  FUNC_22(&VAR_10[VAR_27]);


  VAR_28 = FUNC_9(VAR_17, VAR_24);
  if (VAR_28) {
   FUNC_25(VAR_28);
   FUNC_23(&VAR_10[VAR_27]);
   FUNC_14(&VAR_19);
   continue;
  }


  VAR_28 = FUNC_4(&VAR_19, VAR_29, VAR_30);
  FUNC_14(&VAR_19);
  if (FUNC_1(VAR_28)) {
   FUNC_23(&VAR_10[VAR_27]);
   VAR_26 = FUNC_2(VAR_28);
   goto out;
  }
  FUNC_5(VAR_28, VAR_29, FUNC_24(VAR_18));
  FUNC_3(VAR_28);
  VAR_26 = FUNC_11(VAR_28, VAR_17, VAR_24);
  if (FUNC_27(VAR_26)) {
   FUNC_25(VAR_28);
   FUNC_23(&VAR_10[VAR_27]);
   goto out;
  }

  FUNC_23(&VAR_10[VAR_27]);





  FUNC_28(VAR_28);
  FUNC_25(VAR_28);
 }

 if (!(VAR_12 & VAR_3) && VAR_13 + VAR_14 > VAR_15->i_size)
  FUNC_18(VAR_15, VAR_13 + VAR_14);
 VAR_15->i_ctime = FUNC_7(VAR_15);
out:
 FUNC_21(VAR_15);
 return VAR_26;
}
