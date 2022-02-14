
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u64 ;
typedef int u32 ;
typedef int supp ;
struct xdr_stream {TYPE_10__* buf; } ;
struct svc_rqst {struct nfsd4_compoundres* rq_resp; } ;
struct TYPE_14__ {int fh_size; int fh_base; } ;
struct svc_fh {int naces; TYPE_3__ fh_handle; struct nfs4_ace* aces; } ;
struct TYPE_20__ {TYPE_8__* mnt; } ;
struct TYPE_13__ {scalar_t__ migrated; } ;
struct svc_export {int ex_flags; int ex_layout_types; TYPE_9__ ex_path; int ex_uuid; scalar_t__ ex_fsid; TYPE_2__ ex_fslocs; } ;
struct path {struct dentry* dentry; TYPE_8__* mnt; } ;
struct nfsd_net {int nfsd4_lease; } ;
struct TYPE_12__ {int minorversion; } ;
struct nfsd4_compoundres {TYPE_1__ cstate; } ;
struct nfs4_acl {int naces; TYPE_3__ fh_handle; struct nfs4_ace* aces; } ;
struct nfs4_ace {int type; int flag; int access_mask; } ;
struct kstatfs {int f_namelen; scalar_t__ f_bsize; scalar_t__ f_blocks; scalar_t__ f_bfree; scalar_t__ f_bavail; scalar_t__ f_files; scalar_t__ f_ffree; } ;
struct TYPE_18__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_17__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_16__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct kstat {int mode; int size; int ino; int nlink; int blksize; TYPE_7__ mtime; TYPE_6__ ctime; TYPE_5__ atime; scalar_t__ blocks; int rdev; int gid; int uid; int dev; } ;
struct dentry {int d_inode; } ;
typedef int s64 ;
typedef scalar_t__ __be32 ;
struct TYPE_19__ {struct dentry* mnt_root; TYPE_4__* mnt_sb; } ;
struct TYPE_15__ {int s_maxbytes; } ;
struct TYPE_11__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;



 int VAR_57 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_5 (struct svc_rqst*) ;
 int VAR_74 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct dentry*) ;
 scalar_t__* FUNC_8 (scalar_t__*,struct kstat*,int ,struct svc_export*) ;
 scalar_t__* FUNC_9 (scalar_t__*,int ) ;
 scalar_t__ FUNC_10 (int*,int*,int*,int*) ;
 scalar_t__ FUNC_11 (struct svc_fh*,struct svc_export*,struct dentry*,int *) ;
 int FUNC_12 (struct svc_fh*,int ) ;
 int FUNC_13 (struct svc_fh*) ;
 int FUNC_14 (struct svc_fh*) ;
 int FUNC_15 (struct svc_export*,struct kstat*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct svc_fh*) ;
 struct svc_fh* FUNC_18 (int,int ) ;
 int FUNC_19 (int*,int ,int) ;
 struct nfsd_net* FUNC_20 (int ,int ) ;
 int FUNC_21 (int) ;
 scalar_t__ VAR_75 ;
 scalar_t__ FUNC_22 (struct xdr_stream*,struct svc_rqst*,struct nfs4_ace*) ;
 scalar_t__ FUNC_23 (struct xdr_stream*,int,int,int) ;
 scalar_t__ FUNC_24 (struct xdr_stream*,struct svc_rqst*,struct svc_export*) ;
 scalar_t__ FUNC_25 (struct xdr_stream*,struct svc_rqst*,int ) ;
 scalar_t__ FUNC_26 (struct xdr_stream*,int ) ;
 scalar_t__ FUNC_27 (struct xdr_stream*,struct svc_rqst*,void*,int) ;
 scalar_t__ FUNC_28 (struct xdr_stream*,struct svc_rqst*,int ) ;
 int FUNC_29 (struct svc_rqst*,struct dentry*,struct svc_fh**) ;
 int FUNC_30 (int,int*) ;
 int VAR_76 ;
 int * VAR_77 ;
 scalar_t__ VAR_78 ;
 scalar_t__ VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ VAR_81 ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (int ,void**,int*) ;
 int FUNC_33 (void*,int) ;
 scalar_t__ FUNC_34 (struct svc_rqst*) ;
 int FUNC_35 (struct path*,struct kstat*,int ,int ) ;
 int FUNC_36 (struct path*,struct kstatfs*) ;
 int FUNC_37 (TYPE_10__*,int,scalar_t__*,int) ;
 scalar_t__* FUNC_38 (scalar_t__*,int) ;
 scalar_t__* FUNC_39 (scalar_t__*,int *,int ) ;
 scalar_t__* FUNC_40 (scalar_t__*,int ,int ) ;
 scalar_t__* FUNC_41 (struct xdr_stream*,int) ;
 int FUNC_42 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_43(struct xdr_stream *VAR_82, struct svc_fh *VAR_83,
  struct svc_export *VAR_84,
  struct dentry *VAR_85, u32 *VAR_86,
  struct svc_rqst *VAR_87, int VAR_88)
{
 u32 VAR_89 = VAR_86[0];
 u32 VAR_90 = VAR_86[1];
 u32 VAR_91 = VAR_86[2];
 struct kstat VAR_92;
 struct svc_fh *VAR_93 = ((void*)0);
 struct kstatfs VAR_94;
 __be32 *VAR_95;
 int VAR_96 = VAR_82->buf->len;
 int VAR_97;
 __be32 VAR_98;
 u32 VAR_99;
 u64 VAR_100;
 u32 VAR_101 = 0;
 __be32 VAR_102;
 int VAR_103;
 struct nfs4_acl *VAR_104 = ((void*)0);




 bool VAR_105 = 0;
 struct nfsd4_compoundres *VAR_106 = VAR_87->rq_resp;
 u32 VAR_107 = VAR_106->cstate.minorversion;
 struct path VAR_108 = {
  .mnt = VAR_84->ex_path.mnt,
  .dentry = VAR_85,
 };
 struct nfsd_net *VAR_109 = FUNC_20(FUNC_5(VAR_87), VAR_76);

 FUNC_0(VAR_90 & VAR_70);
 FUNC_0(!FUNC_30(VAR_107, VAR_86));

 if (VAR_84->ex_fslocs.migrated) {
  VAR_102 = FUNC_10(&VAR_89, &VAR_90, &VAR_91, &VAR_101);
  if (VAR_102)
   goto out;
 }

 VAR_103 = FUNC_35(&VAR_108, &VAR_92, VAR_73, VAR_2);
 if (VAR_103)
  goto out_nfserr;
 if ((VAR_89 & (VAR_16 | VAR_17 |
   VAR_18 | VAR_26)) ||
     (VAR_90 & (VAR_44 | VAR_45 |
         VAR_46))) {
  VAR_103 = FUNC_36(&VAR_108, &VAR_94);
  if (VAR_103)
   goto out_nfserr;
 }
 if ((VAR_89 & (VAR_14 | VAR_19)) && !VAR_83) {
  VAR_93 = FUNC_18(sizeof(struct svc_fh), VAR_57);
  VAR_102 = VAR_79;
  if (!VAR_93)
   goto out;
  FUNC_12(VAR_93, VAR_62);
  VAR_102 = FUNC_11(VAR_93, VAR_84, VAR_85, ((void*)0));
  if (VAR_102)
   goto out;
  VAR_83 = VAR_93;
 }
 if (VAR_89 & VAR_6) {
  VAR_103 = FUNC_29(VAR_87, VAR_85, &VAR_104);
  if (VAR_103 == -VAR_4)
   VAR_89 &= ~VAR_6;
  else if (VAR_103 == -VAR_3) {
   VAR_102 = VAR_78;
   goto out;
  } else if (VAR_103 != 0)
   goto out_nfserr;
 }
 VAR_102 = FUNC_23(VAR_82, VAR_89, VAR_90, VAR_91);
 if (VAR_102)
  goto out;

 VAR_97 = VAR_82->buf->len;
 VAR_95 = FUNC_41(VAR_82, 4);
 if (!VAR_95)
  goto out_resource;
 VAR_95++;

 if (VAR_89 & VAR_32) {
  u32 VAR_110[3];

  FUNC_19(VAR_110, VAR_77[VAR_107], sizeof(VAR_110));

  if (!FUNC_2(VAR_85->d_inode))
   VAR_110[0] &= ~VAR_6;
  if (!VAR_105)
   VAR_110[2] &= ~VAR_55;
  if (!VAR_110[2]) {
   VAR_95 = FUNC_41(VAR_82, 12);
   if (!VAR_95)
    goto out_resource;
   *VAR_95++ = FUNC_6(2);
   *VAR_95++ = FUNC_6(VAR_110[0]);
   *VAR_95++ = FUNC_6(VAR_110[1]);
  } else {
   VAR_95 = FUNC_41(VAR_82, 16);
   if (!VAR_95)
    goto out_resource;
   *VAR_95++ = FUNC_6(3);
   *VAR_95++ = FUNC_6(VAR_110[0]);
   *VAR_95++ = FUNC_6(VAR_110[1]);
   *VAR_95++ = FUNC_6(VAR_110[2]);
  }
 }
 if (VAR_89 & VAR_34) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  VAR_99 = FUNC_21(VAR_92.mode);
  if (VAR_99 == VAR_58) {
   VAR_102 = VAR_81;
   goto out;
  }
  *VAR_95++ = FUNC_6(VAR_99);
 }
 if (VAR_89 & VAR_13) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  if (VAR_84->ex_flags & VAR_71)
   *VAR_95++ = FUNC_6(VAR_63);
  else
   *VAR_95++ = FUNC_6(VAR_63|
      VAR_64);
 }
 if (VAR_89 & VAR_11) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_8(VAR_95, &VAR_92, FUNC_7(VAR_85), VAR_84);
 }
 if (VAR_89 & VAR_31) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, VAR_92.size);
 }
 if (VAR_89 & VAR_23) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_33) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_29) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(0);
 }
 if (VAR_89 & VAR_19) {
  VAR_95 = FUNC_41(VAR_82, 16);
  if (!VAR_95)
   goto out_resource;
  if (VAR_84->ex_fslocs.migrated) {
   VAR_95 = FUNC_38(VAR_95, VAR_65);
   VAR_95 = FUNC_38(VAR_95, VAR_66);
  } else switch(FUNC_14(VAR_83)) {
  case 129:
   VAR_95 = FUNC_38(VAR_95, (u64)VAR_84->ex_fsid);
   VAR_95 = FUNC_38(VAR_95, (u64)0);
   break;
  case 130:
   *VAR_95++ = FUNC_6(0);
   *VAR_95++ = FUNC_6(FUNC_3(VAR_92.dev));
   *VAR_95++ = FUNC_6(0);
   *VAR_95++ = FUNC_6(FUNC_4(VAR_92.dev));
   break;
  case 128:
   VAR_95 = FUNC_40(VAR_95, VAR_84->ex_uuid,
        VAR_5);
   break;
  }
 }
 if (VAR_89 & VAR_35) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(0);
 }
 if (VAR_89 & VAR_22) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_109->nfsd4_lease);
 }
 if (VAR_89 & VAR_30) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_101);
 }
 if (VAR_89 & VAR_6) {
  struct nfs4_ace *VAR_111;

  if (VAR_104 == ((void*)0)) {
   VAR_95 = FUNC_41(VAR_82, 4);
   if (!VAR_95)
    goto out_resource;

   *VAR_95++ = FUNC_6(0);
   goto out_acl;
  }
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_104->naces);

  for (VAR_111 = VAR_104->aces; VAR_111 < VAR_104->aces + VAR_104->naces; VAR_111++) {
   VAR_95 = FUNC_41(VAR_82, 4*3);
   if (!VAR_95)
    goto out_resource;
   *VAR_95++ = FUNC_6(VAR_111->type);
   *VAR_95++ = FUNC_6(VAR_111->flag);
   *VAR_95++ = FUNC_6(VAR_111->access_mask &
       VAR_59);
   VAR_102 = FUNC_22(VAR_82, VAR_87, VAR_111);
   if (VAR_102)
    goto out;
  }
 }
out_acl:
 if (VAR_89 & VAR_7) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(FUNC_2(VAR_85->d_inode) ?
   VAR_0|VAR_1 : 0);
 }
 if (VAR_89 & VAR_8) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_9) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(0);
 }
 if (VAR_89 & VAR_10) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_12) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_14) {
  VAR_95 = FUNC_41(VAR_82, VAR_83->fh_handle.fh_size + 4);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_39(VAR_95, &VAR_83->fh_handle.fh_base,
     VAR_83->fh_handle.fh_size);
 }
 if (VAR_89 & VAR_15) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, VAR_92.ino);
 }
 if (VAR_89 & VAR_16) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (u64) VAR_94.f_ffree);
 }
 if (VAR_89 & VAR_17) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (u64) VAR_94.f_ffree);
 }
 if (VAR_89 & VAR_18) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (u64) VAR_94.f_files);
 }
 if (VAR_89 & VAR_20) {
  VAR_102 = FUNC_24(VAR_82, VAR_87, VAR_84);
  if (VAR_102)
   goto out;
 }
 if (VAR_89 & VAR_21) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_89 & VAR_24) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, VAR_84->ex_path.mnt->mnt_sb->s_maxbytes);
 }
 if (VAR_89 & VAR_25) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(255);
 }
 if (VAR_89 & VAR_26) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_94.f_namelen);
 }
 if (VAR_89 & VAR_27) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (u64) FUNC_34(VAR_87));
 }
 if (VAR_89 & VAR_28) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (u64) FUNC_34(VAR_87));
 }
 if (VAR_90 & VAR_37) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_92.mode & VAR_74);
 }
 if (VAR_90 & VAR_39) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(1);
 }
 if (VAR_90 & VAR_40) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6(VAR_92.nlink);
 }
 if (VAR_90 & VAR_41) {
  VAR_102 = FUNC_28(VAR_82, VAR_87, VAR_92.uid);
  if (VAR_102)
   goto out;
 }
 if (VAR_90 & VAR_42) {
  VAR_102 = FUNC_25(VAR_82, VAR_87, VAR_92.gid);
  if (VAR_102)
   goto out;
 }
 if (VAR_90 & VAR_43) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  *VAR_95++ = FUNC_6((u32) FUNC_3(VAR_92.rdev));
  *VAR_95++ = FUNC_6((u32) FUNC_4(VAR_92.rdev));
 }
 if (VAR_90 & VAR_44) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_100 = (u64)VAR_94.f_bavail * (u64)VAR_94.f_bsize;
  VAR_95 = FUNC_38(VAR_95, VAR_100);
 }
 if (VAR_90 & VAR_45) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_100 = (u64)VAR_94.f_bfree * (u64)VAR_94.f_bsize;
  VAR_95 = FUNC_38(VAR_95, VAR_100);
 }
 if (VAR_90 & VAR_46) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_100 = (u64)VAR_94.f_blocks * (u64)VAR_94.f_bsize;
  VAR_95 = FUNC_38(VAR_95, VAR_100);
 }
 if (VAR_90 & VAR_47) {
  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
   goto out_resource;
  VAR_100 = (u64)VAR_92.blocks << 9;
  VAR_95 = FUNC_38(VAR_95, VAR_100);
 }
 if (VAR_90 & VAR_48) {
  VAR_95 = FUNC_41(VAR_82, 12);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (s64)VAR_92.atime.tv_sec);
  *VAR_95++ = FUNC_6(VAR_92.atime.tv_nsec);
 }
 if (VAR_90 & VAR_49) {
  VAR_95 = FUNC_41(VAR_82, 12);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_9(VAR_95, FUNC_7(VAR_85));
 }
 if (VAR_90 & VAR_50) {
  VAR_95 = FUNC_41(VAR_82, 12);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (s64)VAR_92.ctime.tv_sec);
  *VAR_95++ = FUNC_6(VAR_92.ctime.tv_nsec);
 }
 if (VAR_90 & VAR_51) {
  VAR_95 = FUNC_41(VAR_82, 12);
  if (!VAR_95)
   goto out_resource;
  VAR_95 = FUNC_38(VAR_95, (s64)VAR_92.mtime.tv_sec);
  *VAR_95++ = FUNC_6(VAR_92.mtime.tv_nsec);
 }
 if (VAR_90 & VAR_38) {
  struct kstat VAR_112;
  u64 VAR_113 = VAR_92.ino;

  VAR_95 = FUNC_41(VAR_82, 8);
  if (!VAR_95)
                 goto out_resource;




  if (VAR_88 == 0 &&
      VAR_85 == VAR_84->ex_path.mnt->mnt_root) {
   VAR_103 = FUNC_15(VAR_84, &VAR_112);
   if (VAR_103)
    goto out_nfserr;
   VAR_113 = VAR_112.ino;
  }
  VAR_95 = FUNC_38(VAR_95, VAR_113);
 }
 if (VAR_91 & VAR_56) {
  u32 VAR_114[3];

  FUNC_19(VAR_114, VAR_77[VAR_107], sizeof(VAR_114));
  VAR_114[0] &= VAR_67;
  VAR_114[1] &= VAR_68;
  VAR_114[2] &= VAR_69;

  VAR_102 = FUNC_23(VAR_82, VAR_114[0], VAR_114[1], VAR_114[2]);
  if (VAR_102)
   goto out;
 }

 if (VAR_91 & VAR_52) {
  VAR_95 = FUNC_41(VAR_82, 4);
  if (!VAR_95)
   goto out_resource;
  if (FUNC_1(FUNC_7(VAR_85)))
   *VAR_95++ = FUNC_6(VAR_60);
  else
   *VAR_95++ = FUNC_6(VAR_61);
 }
 VAR_98 = FUNC_16(VAR_82->buf->len - VAR_97 - 4);
 FUNC_37(VAR_82->buf, VAR_97, &VAR_98, 4);
 VAR_102 = VAR_75;

out:




 FUNC_17(VAR_104);
 if (VAR_93) {
  FUNC_13(VAR_93);
  FUNC_17(VAR_93);
 }
 if (VAR_102)
  FUNC_42(VAR_82, VAR_96);
 return VAR_102;
out_nfserr:
 VAR_102 = FUNC_31(VAR_103);
 goto out;
out_resource:
 VAR_102 = VAR_80;
 goto out;
}
