
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rqst {struct nfsd3_pathconfres* rq_resp; struct nfsd_fhandle* rq_argp; } ;
struct super_block {int s_magic; } ;
struct TYPE_6__ {TYPE_1__* fh_dentry; } ;
struct nfsd_fhandle {TYPE_2__ fh; } ;
struct nfsd3_pathconfres {int p_link_max; int p_name_max; int p_chown_restricted; int p_case_insensitive; int p_case_preserving; scalar_t__ p_no_trunc; } ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_3)
{
 struct nfsd_fhandle *VAR_4 = VAR_3->rq_argp;
 struct nfsd3_pathconfres *VAR_5 = VAR_3->rq_resp;
 __be32 VAR_6;

 FUNC_2("nfsd: PATHCONF(3) %s\n",
    FUNC_1(&VAR_4->fh));


 VAR_5->p_link_max = 255;
 VAR_5->p_name_max = 255;
 VAR_5->p_no_trunc = 0;
 VAR_5->p_chown_restricted = 1;
 VAR_5->p_case_insensitive = 0;
 VAR_5->p_case_preserving = 1;

 VAR_6 = FUNC_4(VAR_3, &VAR_4->fh, 0, VAR_2);

 if (VAR_6 == 0) {
  struct super_block *VAR_7 = VAR_4->fh.fh_dentry->d_sb;


  switch (VAR_7->s_magic) {
  case 129:
   VAR_5->p_link_max = VAR_0;
   VAR_5->p_name_max = VAR_1;
   break;
  case 128:
   VAR_5->p_case_insensitive = 1;
   VAR_5->p_case_preserving = 0;
   break;
  }
 }

 FUNC_3(&VAR_4->fh);
 FUNC_0(VAR_6);
}
