
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs4_stid {int dummy; } ;
struct TYPE_4__ {struct nfs4_file* sc_file; int sc_stateid; struct nfs4_client* sc_client; } ;
struct nfs4_layout_stateid {size_t ls_layout_type; TYPE_1__ ls_stid; scalar_t__ ls_recalled; TYPE_2__* ls_file; int ls_perfile; int ls_perclnt; } ;
struct nfs4_file {int fi_lo_recalls; int fi_lock; } ;
struct nfs4_client {int cl_lock; } ;
struct TYPE_6__ {int disable_recalls; } ;
struct TYPE_5__ {int nf_file; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nfs4_layout_stateid*) ;
 struct nfs4_layout_stateid* FUNC_2 (struct nfs4_stid*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int *,void**) ;

__attribute__((used)) static void
FUNC_9(struct nfs4_stid *VAR_3)
{
 struct nfs4_layout_stateid *VAR_4 = FUNC_2(VAR_3);
 struct nfs4_client *VAR_5 = VAR_4->ls_stid.sc_client;
 struct nfs4_file *VAR_6 = VAR_4->ls_stid.sc_file;

 FUNC_7(&VAR_4->ls_stid.sc_stateid);

 FUNC_5(&VAR_5->cl_lock);
 FUNC_3(&VAR_4->ls_perclnt);
 FUNC_6(&VAR_5->cl_lock);

 FUNC_5(&VAR_6->fi_lock);
 FUNC_3(&VAR_4->ls_perfile);
 FUNC_6(&VAR_6->fi_lock);

 if (!VAR_2[VAR_4->ls_layout_type]->disable_recalls)
  FUNC_8(VAR_4->ls_file->nf_file, VAR_0, ((void*)0), (void **)&VAR_4);
 FUNC_4(VAR_4->ls_file);

 if (VAR_4->ls_recalled)
  FUNC_0(&VAR_4->ls_stid.sc_file->fi_lo_recalls);

 FUNC_1(VAR_1, VAR_4);
}
