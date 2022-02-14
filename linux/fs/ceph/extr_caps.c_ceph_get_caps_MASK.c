
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct file {struct ceph_file_info* private_data; } ;
struct ceph_inode_info {scalar_t__ i_inline_version; int i_cap_wq; } ;
struct ceph_fs_client {int filp_gen; } ;
struct ceph_file_info {int fmode; scalar_t__ filp_gen; int num_locks; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_13 ;
 int FUNC_3 (struct inode*,int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_7 (struct inode*) ;
 struct ceph_fs_client* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct ceph_inode_info*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int ) ;
 int VAR_14 ;
 struct inode* FUNC_13 (struct file*) ;
 struct page* FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct inode*,int,int,int ,int,int*) ;
 int VAR_15 ;
 int FUNC_20 (int *,int ,int ) ;
 int VAR_16 ;

int FUNC_21(struct file *VAR_17, int VAR_18, int VAR_19,
    loff_t VAR_20, int *VAR_21, struct page **VAR_22)
{
 struct ceph_file_info *VAR_23 = VAR_17->private_data;
 struct inode *VAR_24 = FUNC_13(VAR_17);
 struct ceph_inode_info *VAR_25 = FUNC_7(VAR_24);
 struct ceph_fs_client *VAR_26 = FUNC_8(VAR_24);
 int VAR_27, VAR_28, VAR_29;

 VAR_27 = FUNC_9(VAR_24, VAR_18);
 if (VAR_27 < 0)
  return VAR_27;

 if ((VAR_23->fmode & VAR_3) &&
     VAR_23->filp_gen != FUNC_2(VAR_26->filp_gen))
  return -VAR_8;

 while (1) {
  if (VAR_20 > 0)
   FUNC_12(VAR_24, VAR_20);

  VAR_29 = FUNC_5(&VAR_23->num_locks) ? VAR_6 : 0;
  VAR_28 = 0;
  VAR_27 = FUNC_19(VAR_24, VAR_18, VAR_19, VAR_20,
           VAR_29, &VAR_28);
  if (VAR_27 == -VAR_7)
   continue;
  if (!VAR_27) {
   FUNC_0(VAR_15, VAR_16);
   FUNC_4(&VAR_25->i_cap_wq, &VAR_15);

   VAR_29 |= VAR_12;
   while (!(VAR_27 = FUNC_19(VAR_24, VAR_18, VAR_19,
       VAR_20, VAR_29, &VAR_28))) {
    if (FUNC_18(VAR_14)) {
     VAR_27 = -VAR_9;
     break;
    }
    FUNC_20(&VAR_15, VAR_13, VAR_11);
   }

   FUNC_17(&VAR_25->i_cap_wq, &VAR_15);
   if (VAR_27 == -VAR_7)
    continue;
  }

  if ((VAR_23->fmode & VAR_3) &&
      VAR_23->filp_gen != FUNC_2(VAR_26->filp_gen)) {
   if (VAR_27 >= 0 && VAR_28)
    FUNC_10(VAR_25, VAR_28);
   return -VAR_8;
  }

  if (VAR_27 < 0) {
   if (VAR_27 == -VAR_10) {

    VAR_27 = FUNC_11(VAR_24);
    if (VAR_27 == 0)
     continue;
   }
   return VAR_27;
  }

  if (VAR_25->i_inline_version != VAR_4 &&
      (VAR_28 & (VAR_0|VAR_1)) &&
      FUNC_15(VAR_24) > 0) {
   struct page *VAR_30 =
    FUNC_14(VAR_24->i_mapping, 0);
   if (VAR_30) {
    if (FUNC_1(VAR_30)) {
     *VAR_22 = VAR_30;
     break;
    }
    FUNC_16(VAR_30);
   }




   FUNC_10(VAR_25, VAR_28);
   VAR_28 = 0;





   VAR_27 = FUNC_3(VAR_24, ((void*)0),
      VAR_5,
      1);
   if (VAR_27 < 0)
    return VAR_27;
   continue;
  }
  break;
 }

 if ((VAR_28 & VAR_2) && (VAR_28 & VAR_0))
  FUNC_6(VAR_25);

 *VAR_21 = VAR_28;
 return 0;
}
