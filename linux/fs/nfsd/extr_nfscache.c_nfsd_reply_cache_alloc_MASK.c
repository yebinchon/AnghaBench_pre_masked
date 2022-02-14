
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct svc_rqst {TYPE_1__ rq_arg; int rq_vers; int rq_prot; int rq_proc; int rq_xid; } ;
struct TYPE_4__ {int k_csum; int k_len; int k_vers; int k_prot; int k_addr; int k_proc; int k_xid; } ;
struct svc_cacherep {TYPE_2__ c_key; int c_lru; int c_node; int c_type; int c_state; } ;
struct sockaddr {int dummy; } ;
struct nfsd_net {int drc_slab; } ;
typedef int __wsum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct svc_cacherep* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (struct sockaddr*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (struct svc_rqst*) ;

__attribute__((used)) static struct svc_cacherep *
FUNC_8(struct svc_rqst *VAR_3, __wsum VAR_4,
   struct nfsd_net *VAR_5)
{
 struct svc_cacherep *VAR_6;

 VAR_6 = FUNC_2(VAR_5->drc_slab, VAR_0);
 if (VAR_6) {
  VAR_6->c_state = VAR_2;
  VAR_6->c_type = VAR_1;
  FUNC_1(&VAR_6->c_node);
  FUNC_0(&VAR_6->c_lru);

  FUNC_3(&VAR_6->c_key, 0, sizeof(VAR_6->c_key));
  VAR_6->c_key.k_xid = VAR_3->rq_xid;
  VAR_6->c_key.k_proc = VAR_3->rq_proc;
  FUNC_4((struct sockaddr *)&VAR_6->c_key.k_addr, FUNC_7(VAR_3));
  FUNC_6((struct sockaddr *)&VAR_6->c_key.k_addr, FUNC_5(FUNC_7(VAR_3)));
  VAR_6->c_key.k_prot = VAR_3->rq_prot;
  VAR_6->c_key.k_vers = VAR_3->rq_vers;
  VAR_6->c_key.k_len = VAR_3->rq_arg.len;
  VAR_6->c_key.k_csum = VAR_4;
 }
 return VAR_6;
}
