
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfsd4_compound_state {struct nfs4_client* clp; } ;
struct nfs4_stid {scalar_t__ sc_type; struct nfs4_file* sc_file; } ;
struct TYPE_2__ {int sc_stateid; } ;
struct nfs4_layout_stateid {TYPE_1__ ls_stid; int ls_perfile; int ls_perclnt; int ls_file; int ls_recall; int ls_layout_type; int ls_mutex; int ls_layouts; int ls_lock; } ;
struct nfs4_file {int fi_lock; int fi_lo_states; int fi_deleg_file; } ;
struct nfs4_client {int cl_lock; int cl_lo_states; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nfs4_file*) ;
 int FUNC_3 (struct nfs4_file*) ;
 int FUNC_4 (int ,struct nfs4_layout_stateid*) ;
 struct nfs4_layout_stateid* FUNC_5 (struct nfs4_stid*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 struct nfs4_stid* FUNC_8 (struct nfs4_client*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,struct nfs4_client*,int *,int ) ;
 scalar_t__ FUNC_10 (struct nfs4_layout_stateid*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct nfs4_file*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct nfs4_layout_stateid *
FUNC_18(struct nfsd4_compound_state *VAR_6,
  struct nfs4_stid *VAR_7, u32 VAR_8)
{
 struct nfs4_client *VAR_9 = VAR_6->clp;
 struct nfs4_file *VAR_10 = VAR_7->sc_file;
 struct nfs4_layout_stateid *VAR_11;
 struct nfs4_stid *VAR_12;

 VAR_12 = FUNC_8(VAR_6->clp, VAR_3,
     VAR_5);
 if (!VAR_12)
  return ((void*)0);

 FUNC_3(VAR_10);
 VAR_12->sc_file = VAR_10;

 VAR_11 = FUNC_5(VAR_12);
 FUNC_1(&VAR_11->ls_perclnt);
 FUNC_1(&VAR_11->ls_perfile);
 FUNC_15(&VAR_11->ls_lock);
 FUNC_1(&VAR_11->ls_layouts);
 FUNC_7(&VAR_11->ls_mutex);
 VAR_11->ls_layout_type = VAR_8;
 FUNC_9(&VAR_11->ls_recall, VAR_9, &VAR_4,
   VAR_2);

 if (VAR_7->sc_type == VAR_0)
  VAR_11->ls_file = FUNC_11(VAR_10->fi_deleg_file);
 else
  VAR_11->ls_file = FUNC_2(VAR_10);
 FUNC_0(!VAR_11->ls_file);

 if (FUNC_10(VAR_11)) {
  FUNC_12(VAR_11->ls_file);
  FUNC_13(VAR_10);
  FUNC_4(VAR_3, VAR_11);
  return ((void*)0);
 }

 FUNC_14(&VAR_9->cl_lock);
 VAR_12->sc_type = VAR_1;
 FUNC_6(&VAR_11->ls_perclnt, &VAR_9->cl_lo_states);
 FUNC_16(&VAR_9->cl_lock);

 FUNC_14(&VAR_10->fi_lock);
 FUNC_6(&VAR_11->ls_perfile, &VAR_10->fi_lo_states);
 FUNC_16(&VAR_10->fi_lock);

 FUNC_17(&VAR_11->ls_stid.sc_stateid);
 return VAR_11;
}
