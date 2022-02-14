
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_state; int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_inode_lockres; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int,int,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,char*,unsigned long long,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,struct buffer_head**,struct buffer_head*) ;
 int FUNC_7 (struct ocfs2_lock_res*,int ) ;
 int FUNC_8 (struct inode*,struct buffer_head**) ;
 int FUNC_9 (struct inode*,int) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*) ;
 scalar_t__ FUNC_11 (struct ocfs2_super*) ;
 int FUNC_12 (struct ocfs2_super*) ;

int FUNC_13(struct inode *VAR_11,
     struct buffer_head **VAR_12,
     int VAR_13,
     int VAR_14,
     int VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 struct ocfs2_lock_res *VAR_20 = ((void*)0);
 struct ocfs2_super *VAR_21 = FUNC_1(VAR_11->i_sb);
 struct buffer_head *VAR_22 = ((void*)0);

 FUNC_4(0, "inode %llu, take %s META lock\n",
      (unsigned long long)FUNC_0(VAR_11)->ip_blkno,
      VAR_13 ? "EXMODE" : "PRMODE");

 VAR_16 = 0;
 VAR_18 = 0;


 if (FUNC_10(VAR_21)) {
  if (VAR_13)
   VAR_16 = -VAR_5;
  goto getbh;
 }

 if ((VAR_14 & VAR_7) ||
     FUNC_11(VAR_21))
  goto update;

 if (!(VAR_14 & VAR_9))
  FUNC_12(VAR_21);

 VAR_20 = &FUNC_0(VAR_11)->ip_inode_lockres;
 VAR_17 = VAR_13 ? VAR_1 : VAR_2;
 VAR_19 = 0;
 if (VAR_14 & VAR_8)
  VAR_19 |= VAR_0;

 VAR_16 = FUNC_2(VAR_21, VAR_20, VAR_17, VAR_19,
          VAR_14, VAR_15, VAR_10);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_3)
   FUNC_5(VAR_16);
  goto bail;
 }


 VAR_18 = 1;





 if (!(VAR_14 & VAR_9))
  FUNC_12(VAR_21);

update:






 if (VAR_11->i_state & VAR_6) {
  VAR_16 = 0;
  if (VAR_20)
   FUNC_7(VAR_20, 0);
  goto bail;
 }






 VAR_16 = FUNC_8(VAR_11, &VAR_22);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_4)
   FUNC_5(VAR_16);
  goto bail;
 }
getbh:
 if (VAR_12) {
  VAR_16 = FUNC_6(VAR_11, VAR_12, VAR_22);
  if (VAR_16 < 0) {
   FUNC_5(VAR_16);
   goto bail;
  }
 }

bail:
 if (VAR_16 < 0) {
  if (VAR_12 && (*VAR_12)) {
   FUNC_3(*VAR_12);
   *VAR_12 = ((void*)0);
  }
  if (VAR_18)
   FUNC_9(VAR_11, VAR_13);
 }

 FUNC_3(VAR_22);
 return VAR_16;
}
