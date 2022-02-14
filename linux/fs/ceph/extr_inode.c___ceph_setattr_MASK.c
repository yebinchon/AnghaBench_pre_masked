
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct inode {scalar_t__ i_mode; scalar_t__ i_size; TYPE_3__ i_ctime; TYPE_4__ i_mtime; int i_blocks; TYPE_4__ i_atime; int i_gid; int i_uid; int i_sb; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_mode; scalar_t__ ia_size; TYPE_3__ ia_ctime; TYPE_4__ ia_mtime; TYPE_4__ ia_atime; int ia_gid; int ia_uid; } ;
struct TYPE_10__ {void* mask; int mtime; void* old_size; void* size; int atime; void* mode; void* gid; void* uid; } ;
struct TYPE_11__ {TYPE_1__ setattr; } ;
struct ceph_mds_request {int r_inode_drop; int r_num_caps; TYPE_3__ r_stamp; TYPE_2__ r_args; struct inode* r_inode; } ;
struct ceph_mds_client {int snap_rwsem; } ;
struct ceph_inode_info {scalar_t__ i_reported_size; int i_ceph_lock; int i_time_warp_seq; int i_head_snapc; } ;
struct ceph_cap_flush {int dummy; } ;
struct TYPE_14__ {struct ceph_mds_client* mdsc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_25 ;
 int FUNC_2 (struct ceph_inode_info*,int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct ceph_inode_info*,int,struct ceph_cap_flush**) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (scalar_t__) ;
 struct ceph_cap_flush* FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (struct ceph_cap_flush*) ;
 struct ceph_inode_info* FUNC_11 (struct inode*) ;
 struct ceph_mds_request* FUNC_12 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_13 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_14 (struct ceph_mds_request*) ;
 TYPE_8__* FUNC_15 (int ) ;
 void* FUNC_16 (int) ;
 void* FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*,struct inode*,...) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct inode*,scalar_t__) ;
 int FUNC_25 (struct inode*) ;
 int VAR_26 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_29 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int *) ;

int FUNC_32(struct inode *VAR_27, struct iattr *VAR_28)
{
 struct ceph_inode_info *VAR_29 = FUNC_11(VAR_27);
 unsigned int VAR_30 = VAR_28->ia_valid;
 struct ceph_mds_request *VAR_31;
 struct ceph_mds_client *VAR_32 = FUNC_15(VAR_27->i_sb)->mdsc;
 struct ceph_cap_flush *VAR_33;
 int VAR_34;
 int VAR_35 = 0, VAR_36 = 0;
 int VAR_37 = 0;
 int VAR_38 = 0;
 int VAR_39 = 0;
 bool VAR_40 = 0;

 VAR_33 = FUNC_7();
 if (!VAR_33)
  return -VAR_24;

 VAR_31 = FUNC_12(VAR_32, VAR_16,
           VAR_25);
 if (FUNC_0(VAR_31)) {
  FUNC_10(VAR_33);
  return FUNC_1(VAR_31);
 }

 FUNC_26(&VAR_29->i_ceph_lock);
 VAR_34 = FUNC_2(VAR_29, ((void*)0));

 if (!VAR_29->i_head_snapc &&
     (VAR_34 & (VAR_8 | VAR_14))) {
  VAR_40 = 1;
  if (!FUNC_20(&VAR_32->snap_rwsem)) {
   FUNC_27(&VAR_29->i_ceph_lock);
   FUNC_19(&VAR_32->snap_rwsem);
   FUNC_26(&VAR_29->i_ceph_lock);
   VAR_34 = FUNC_2(VAR_29, ((void*)0));
  }
 }

 FUNC_18("setattr %p issued %s\n", VAR_27, FUNC_8(VAR_34));

 if (VAR_30 & VAR_7) {
  FUNC_18("setattr %p uid %d -> %d\n", VAR_27,
       FUNC_22(&VAR_26, VAR_27->i_uid),
       FUNC_22(&VAR_26, VAR_28->ia_uid));
  if (VAR_34 & VAR_9) {
   VAR_27->i_uid = VAR_28->ia_uid;
   VAR_36 |= VAR_9;
  } else if ((VAR_34 & VAR_10) == 0 ||
      !FUNC_30(VAR_28->ia_uid, VAR_27->i_uid)) {
   VAR_31->r_args.setattr.uid = FUNC_16(
    FUNC_22(&VAR_26, VAR_28->ia_uid));
   VAR_37 |= VAR_23;
   VAR_35 |= VAR_10;
  }
 }
 if (VAR_30 & VAR_3) {
  FUNC_18("setattr %p gid %d -> %d\n", VAR_27,
       FUNC_21(&VAR_26, VAR_27->i_gid),
       FUNC_21(&VAR_26, VAR_28->ia_gid));
  if (VAR_34 & VAR_9) {
   VAR_27->i_gid = VAR_28->ia_gid;
   VAR_36 |= VAR_9;
  } else if ((VAR_34 & VAR_10) == 0 ||
      !FUNC_23(VAR_28->ia_gid, VAR_27->i_gid)) {
   VAR_31->r_args.setattr.gid = FUNC_16(
    FUNC_21(&VAR_26, VAR_28->ia_gid));
   VAR_37 |= VAR_19;
   VAR_35 |= VAR_10;
  }
 }
 if (VAR_30 & VAR_4) {
  FUNC_18("setattr %p mode 0%o -> 0%o\n", VAR_27, VAR_27->i_mode,
       VAR_28->ia_mode);
  if (VAR_34 & VAR_9) {
   VAR_27->i_mode = VAR_28->ia_mode;
   VAR_36 |= VAR_9;
  } else if ((VAR_34 & VAR_10) == 0 ||
      VAR_28->ia_mode != VAR_27->i_mode) {
   VAR_27->i_mode = VAR_28->ia_mode;
   VAR_31->r_args.setattr.mode = FUNC_16(VAR_28->ia_mode);
   VAR_37 |= VAR_20;
   VAR_35 |= VAR_10;
  }
 }

 if (VAR_30 & VAR_0) {
  FUNC_18("setattr %p atime %lld.%ld -> %lld.%ld\n", VAR_27,
       VAR_27->i_atime.tv_sec, VAR_27->i_atime.tv_nsec,
       VAR_28->ia_atime.tv_sec, VAR_28->ia_atime.tv_nsec);
  if (VAR_34 & VAR_11) {
   VAR_29->i_time_warp_seq++;
   VAR_27->i_atime = VAR_28->ia_atime;
   VAR_36 |= VAR_11;
  } else if ((VAR_34 & VAR_14) &&
      FUNC_28(&VAR_27->i_atime,
         &VAR_28->ia_atime) < 0) {
   VAR_27->i_atime = VAR_28->ia_atime;
   VAR_36 |= VAR_14;
  } else if ((VAR_34 & VAR_13) == 0 ||
      !FUNC_29(&VAR_27->i_atime, &VAR_28->ia_atime)) {
   FUNC_9(&VAR_31->r_args.setattr.atime,
            &VAR_28->ia_atime);
   VAR_37 |= VAR_17;
   VAR_35 |= VAR_13 |
       VAR_12 | VAR_14;
  }
 }
 if (VAR_30 & VAR_6) {
  FUNC_18("setattr %p size %lld -> %lld\n", VAR_27,
       VAR_27->i_size, VAR_28->ia_size);
  if ((VAR_34 & VAR_11) &&
      VAR_28->ia_size > VAR_27->i_size) {
   FUNC_24(VAR_27, VAR_28->ia_size);
   VAR_27->i_blocks = FUNC_6(VAR_28->ia_size);
   VAR_29->i_reported_size = VAR_28->ia_size;
   VAR_36 |= VAR_11;
   VAR_30 |= VAR_5;
  } else if ((VAR_34 & VAR_13) == 0 ||
      VAR_28->ia_size != VAR_27->i_size) {
   VAR_31->r_args.setattr.size = FUNC_17(VAR_28->ia_size);
   VAR_31->r_args.setattr.old_size =
    FUNC_17(VAR_27->i_size);
   VAR_37 |= VAR_22;
   VAR_35 |= VAR_13 | VAR_11 |
       VAR_12 | VAR_14;
  }
 }
 if (VAR_30 & VAR_5) {
  FUNC_18("setattr %p mtime %lld.%ld -> %lld.%ld\n", VAR_27,
       VAR_27->i_mtime.tv_sec, VAR_27->i_mtime.tv_nsec,
       VAR_28->ia_mtime.tv_sec, VAR_28->ia_mtime.tv_nsec);
  if (VAR_34 & VAR_11) {
   VAR_29->i_time_warp_seq++;
   VAR_27->i_mtime = VAR_28->ia_mtime;
   VAR_36 |= VAR_11;
  } else if ((VAR_34 & VAR_14) &&
      FUNC_28(&VAR_27->i_mtime,
         &VAR_28->ia_mtime) < 0) {
   VAR_27->i_mtime = VAR_28->ia_mtime;
   VAR_36 |= VAR_14;
  } else if ((VAR_34 & VAR_13) == 0 ||
      !FUNC_29(&VAR_27->i_mtime, &VAR_28->ia_mtime)) {
   FUNC_9(&VAR_31->r_args.setattr.mtime,
            &VAR_28->ia_mtime);
   VAR_37 |= VAR_21;
   VAR_35 |= VAR_13 |
       VAR_12 | VAR_14;
  }
 }


 if (VAR_30 & VAR_1) {
  bool VAR_41 = (VAR_30 & (VAR_6|VAR_5|VAR_0|
      VAR_4|VAR_7|VAR_3)) == 0;
  FUNC_18("setattr %p ctime %lld.%ld -> %lld.%ld (%s)\n", VAR_27,
       VAR_27->i_ctime.tv_sec, VAR_27->i_ctime.tv_nsec,
       VAR_28->ia_ctime.tv_sec, VAR_28->ia_ctime.tv_nsec,
       VAR_41 ? "ctime only" : "ignored");
  if (VAR_41) {





   if (VAR_34 & VAR_9)
    VAR_36 |= VAR_9;
   else if (VAR_34 & VAR_11)
    VAR_36 |= VAR_11;
   else if (VAR_34 & VAR_15)
    VAR_36 |= VAR_15;
   else
    VAR_37 |= VAR_18;
  }
 }
 if (VAR_30 & VAR_2)
  FUNC_18("setattr %p ATTR_FILE ... hrm!\n", VAR_27);

 if (VAR_36) {
  VAR_39 = FUNC_4(VAR_29, VAR_36,
          &VAR_33);
  VAR_27->i_ctime = VAR_28->ia_ctime;
 }

 VAR_35 &= VAR_34;
 FUNC_27(&VAR_29->i_ceph_lock);
 if (VAR_40)
  FUNC_31(&VAR_32->snap_rwsem);

 if (VAR_39)
  FUNC_5(VAR_27, VAR_39);


 if (VAR_37) {
  VAR_31->r_inode = VAR_27;
  FUNC_25(VAR_27);
  VAR_31->r_inode_drop = VAR_35;
  VAR_31->r_args.setattr.mask = FUNC_16(VAR_37);
  VAR_31->r_num_caps = 1;
  VAR_31->r_stamp = VAR_28->ia_ctime;
  VAR_38 = FUNC_13(VAR_32, ((void*)0), VAR_31);
 }
 FUNC_18("setattr %p result=%d (%s locally, %d remote)\n", VAR_27, VAR_38,
      FUNC_8(VAR_36), VAR_37);

 FUNC_14(VAR_31);
 FUNC_10(VAR_33);

 if (VAR_38 >= 0 && (VAR_37 & VAR_22))
  FUNC_3(VAR_27);

 return VAR_38;
}
