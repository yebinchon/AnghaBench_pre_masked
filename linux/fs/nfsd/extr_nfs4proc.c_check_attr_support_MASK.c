
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_export {int ex_flags; } ;
struct TYPE_2__ {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct nfsd4_compound_state {int minorversion; TYPE_1__ current_fh; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_8, struct nfsd4_compound_state *VAR_9,
     u32 *VAR_10, u32 *VAR_11)
{
 struct dentry *VAR_12 = VAR_9->current_fh.fh_dentry;
 struct svc_export *VAR_13 = VAR_9->current_fh.fh_export;

 if (!FUNC_3(VAR_9->minorversion, VAR_10))
  return VAR_6;
 if ((VAR_10[0] & VAR_0) && !FUNC_0(FUNC_2(VAR_12)))
  return VAR_6;
 if ((VAR_10[2] & VAR_3) &&
   !(VAR_13->ex_flags & VAR_4))
  return VAR_6;
 if (VAR_11 && !FUNC_1(VAR_10, VAR_11))
  return VAR_7;
 if (VAR_11 && (VAR_10[2] & VAR_2) &&
   (VAR_10[1] & VAR_1))
  return VAR_7;
 return VAR_5;
}
