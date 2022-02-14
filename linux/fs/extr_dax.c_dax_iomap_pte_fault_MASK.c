
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int flags; scalar_t__ cow_page; int * pmd; scalar_t__ pgoff; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; TYPE_1__* vm_file; } ;
struct iomap_ops {int (* iomap_begin ) (struct inode*,scalar_t__,int,unsigned int,struct iomap*) ;int (* iomap_end ) (struct inode*,scalar_t__,int,int,unsigned int,struct iomap*) ;} ;
struct iomap {scalar_t__ offset; scalar_t__ length; int type; int flags; int dax_dev; int bdev; int member_0; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; int i_pages; } ;
typedef int sector_t ;
typedef int pfn_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;



 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int,scalar_t__,unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,struct vm_area_struct*,struct iomap*) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int *,struct address_space*,struct vm_fault*,void*,int ,int ,int) ;
 int FUNC_10 (struct iomap*,scalar_t__,int,int *) ;
 int FUNC_11 (struct iomap*,scalar_t__) ;
 int FUNC_12 (int *,struct address_space*,void**,struct vm_fault*) ;
 int FUNC_13 (int *,void*) ;
 int FUNC_14 (struct vm_fault*) ;
 void* FUNC_15 (int *,struct address_space*,int ) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct inode*,scalar_t__,int,unsigned int,struct iomap*) ;
 int FUNC_20 (struct inode*,scalar_t__,int,int,unsigned int,struct iomap*) ;
 int FUNC_21 (struct inode*,struct vm_fault*,void*) ;
 int FUNC_22 (struct inode*,struct vm_fault*,int) ;
 int FUNC_23 (struct inode*,struct vm_fault*,int) ;
 int FUNC_24 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_25 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_26 (void*) ;
 int FUNC_27 (void*) ;
 int VAR_14 ;

__attribute__((used)) static vm_fault_t FUNC_28(struct vm_fault *VAR_15, pfn_t *VAR_16,
          int *VAR_17, const struct iomap_ops *VAR_18)
{
 struct vm_area_struct *VAR_19 = VAR_15->vma;
 struct address_space *VAR_20 = VAR_19->vm_file->f_mapping;
 FUNC_1(VAR_14, &VAR_20->i_pages, VAR_15->pgoff);
 struct inode *VAR_21 = VAR_20->host;
 unsigned long VAR_22 = VAR_15->address;
 loff_t VAR_23 = (loff_t)VAR_15->pgoff << VAR_5;
 struct iomap VAR_24 = { 0 };
 unsigned VAR_25 = VAR_2;
 int VAR_26, VAR_27 = 0;
 bool VAR_28 = VAR_15->flags & VAR_1;
 bool VAR_29;
 vm_fault_t VAR_30 = 0;
 void *VAR_31;
 pfn_t VAR_32;

 FUNC_22(VAR_21, VAR_15, VAR_30);





 if (VAR_23 >= FUNC_16(VAR_21)) {
  VAR_30 = VAR_13;
  goto out;
 }

 if (VAR_28 && !VAR_15->cow_page)
  VAR_25 |= VAR_4;

 VAR_31 = FUNC_15(&VAR_14, VAR_20, 0);
 if (FUNC_26(VAR_31)) {
  VAR_30 = FUNC_27(VAR_31);
  goto out;
 }







 if (FUNC_18(*VAR_15->pmd) || FUNC_17(*VAR_15->pmd)) {
  VAR_30 = VAR_12;
  goto unlock_entry;
 }






 VAR_26 = VAR_18->iomap_begin(VAR_21, VAR_23, VAR_6, VAR_25, &VAR_24);
 if (VAR_17)
  *VAR_17 = VAR_26;
 if (VAR_26) {
  VAR_30 = FUNC_8(VAR_26);
  goto unlock_entry;
 }
 if (FUNC_0(VAR_24.offset + VAR_24.length < VAR_23 + VAR_6)) {
  VAR_26 = -VAR_0;
  goto error_finish_iomap;
 }

 if (VAR_15->cow_page) {
  sector_t VAR_33 = FUNC_11(&VAR_24, VAR_23);

  switch (VAR_24.type) {
  case 130:
  case 128:
   FUNC_3(VAR_15->cow_page, VAR_22);
   break;
  case 129:
   VAR_26 = FUNC_4(VAR_24.bdev, VAR_24.dax_dev,
     VAR_33, VAR_6, VAR_15->cow_page, VAR_22);
   break;
  default:
   FUNC_0(1);
   VAR_26 = -VAR_0;
   break;
  }

  if (VAR_26)
   goto error_finish_iomap;

  FUNC_2(VAR_15->cow_page);
  VAR_30 = FUNC_14(VAR_15);
  if (!VAR_30)
   VAR_30 = VAR_8;
  goto finish_iomap;
 }

 VAR_29 = FUNC_7(VAR_25, VAR_19, &VAR_24);

 switch (VAR_24.type) {
 case 129:
  if (VAR_24.flags & VAR_3) {
   FUNC_6(VAR_7);
   FUNC_5(VAR_19->vm_mm, VAR_7);
   VAR_27 = VAR_10;
  }
  VAR_26 = FUNC_10(&VAR_24, VAR_23, VAR_6, &VAR_32);
  if (VAR_26 < 0)
   goto error_finish_iomap;

  VAR_31 = FUNC_9(&VAR_14, VAR_20, VAR_15, VAR_31, VAR_32,
       0, VAR_28 && !VAR_29);







  if (VAR_29) {
   if (FUNC_0(!VAR_16)) {
    VAR_26 = -VAR_0;
    goto error_finish_iomap;
   }
   *VAR_16 = VAR_32;
   VAR_30 = VAR_11 | VAR_27;
   goto finish_iomap;
  }
  FUNC_21(VAR_21, VAR_15, VAR_31);
  if (VAR_28)
   VAR_30 = FUNC_25(VAR_19, VAR_22, VAR_32);
  else
   VAR_30 = FUNC_24(VAR_19, VAR_22, VAR_32);

  goto finish_iomap;
 case 128:
 case 130:
  if (!VAR_28) {
   VAR_30 = FUNC_12(&VAR_14, VAR_20, &VAR_31, VAR_15);
   goto finish_iomap;
  }

 default:
  FUNC_0(1);
  VAR_26 = -VAR_0;
  break;
 }

 error_finish_iomap:
 VAR_30 = FUNC_8(VAR_26);
 finish_iomap:
 if (VAR_18->iomap_end) {
  int VAR_34 = VAR_6;

  if (VAR_30 & VAR_9)
   VAR_34 = 0;






  VAR_18->iomap_end(VAR_21, VAR_23, VAR_6, VAR_34, VAR_25, &VAR_24);
 }
 unlock_entry:
 FUNC_13(&VAR_14, VAR_31);
 out:
 FUNC_23(VAR_21, VAR_15, VAR_30);
 return VAR_30 | VAR_27;
}
