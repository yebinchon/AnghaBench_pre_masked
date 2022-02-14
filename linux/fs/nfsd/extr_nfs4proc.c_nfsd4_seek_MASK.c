
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_seek {int seek_whence; scalar_t__ seek_pos; int seek_eof; int seek_offset; int seek_stateid; } ;
union nfsd4_op_u {struct nfsd4_seek seek; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int ,struct nfsd_file**) ;
 int FUNC_4 (struct nfsd_file*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
    union nfsd4_op_u *VAR_6)
{
 struct nfsd4_seek *VAR_7 = &VAR_6->seek;
 int VAR_8;
 __be32 VAR_9;
 struct nfsd_file *VAR_10;

 VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_5->current_fh,
         &VAR_7->seek_stateid,
         VAR_0, &VAR_10);
 if (VAR_9) {
  FUNC_0("NFSD: nfsd4_seek: couldn't process stateid!\n");
  return VAR_9;
 }

 switch (VAR_7->seek_whence) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_9 = VAR_3;
  goto out;
 }





 VAR_7->seek_pos = FUNC_6(VAR_10->nf_file, VAR_7->seek_offset, VAR_8);
 if (VAR_7->seek_pos < 0)
  VAR_9 = FUNC_5(VAR_7->seek_pos);
 else if (VAR_7->seek_pos >= FUNC_2(FUNC_1(VAR_10->nf_file)))
  VAR_7->seek_eof = 1;

out:
 FUNC_4(VAR_10);
 return VAR_9;
}
