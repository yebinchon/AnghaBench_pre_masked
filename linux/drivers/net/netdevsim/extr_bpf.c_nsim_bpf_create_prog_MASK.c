
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_dev {int bpf_bound_progs; int ddir_bpf_bound_progs; int prog_id_gen; } ;
struct nsim_bpf_bound_prog {char* state; int l; int is_loaded; int ddir; struct bpf_prog* prog; struct nsim_dev* nsim_dev; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; int id; } ;
struct TYPE_3__ {struct nsim_bpf_bound_prog* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,int ,char**,int *) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (struct nsim_bpf_bound_prog*) ;
 struct nsim_bpf_bound_prog* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;
 int FUNC_8 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct nsim_dev *VAR_3,
    struct bpf_prog *VAR_4)
{
 struct nsim_bpf_bound_prog *VAR_5;
 char VAR_6[16];

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->nsim_dev = VAR_3;
 VAR_5->prog = VAR_4;
 VAR_5->state = "verify";


 FUNC_8(VAR_6, "%u", VAR_3->prog_id_gen++);
 VAR_5->ddir = FUNC_2(VAR_6, VAR_3->ddir_bpf_bound_progs);
 if (FUNC_0(VAR_5->ddir)) {
  FUNC_5(VAR_5);
  return -VAR_0;
 }

 FUNC_4("id", 0400, VAR_5->ddir, &VAR_4->aux->id);
 FUNC_3("state", 0400, VAR_5->ddir,
       &VAR_5->state, &VAR_2);
 FUNC_1("loaded", 0400, VAR_5->ddir, &VAR_5->is_loaded);

 FUNC_7(&VAR_5->l, &VAR_3->bpf_bound_progs);

 VAR_4->aux->offload->dev_priv = VAR_5;

 return 0;
}
