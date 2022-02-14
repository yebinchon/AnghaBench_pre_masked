
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_r_vecs; } ;
struct nfp_net {int max_r_vecs; int * r_vecs; TYPE_2__ dp; TYPE_1__* irq_entries; int lsc_handler; int lsc_name; int exn_handler; int exn_name; } ;
struct TYPE_6__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_net*,int ,size_t) ;
 int FUNC_2 (struct nfp_net*,int ,char*,int ,int,size_t,int ) ;
 int FUNC_3 (struct nfp_net*,int *) ;
 int FUNC_4 (struct nfp_net*,int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct nfp_net*,TYPE_2__*) ;
 int FUNC_7 (struct nfp_net*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_9(struct nfp_net *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_0, "%s-exn",
          VAR_4->exn_name, sizeof(VAR_4->exn_name),
          VAR_2, VAR_4->exn_handler);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_4, VAR_1, "%s-lsc",
          VAR_4->lsc_name, sizeof(VAR_4->lsc_name),
          VAR_3, VAR_4->lsc_handler);
 if (VAR_5)
  goto err_free_exn;
 FUNC_0(VAR_4->irq_entries[VAR_3].vector);

 for (VAR_6 = 0; VAR_6 < VAR_4->dp.num_r_vecs; VAR_6++) {
  VAR_5 = FUNC_4(VAR_4, &VAR_4->r_vecs[VAR_6], VAR_6);
  if (VAR_5)
   goto err_cleanup_vec_p;
 }

 VAR_5 = FUNC_6(VAR_4, &VAR_4->dp);
 if (VAR_5)
  goto err_cleanup_vec;

 VAR_5 = FUNC_7(VAR_4, &VAR_4->dp);
 if (VAR_5)
  goto err_free_rx_rings;

 for (VAR_6 = 0; VAR_6 < VAR_4->max_r_vecs; VAR_6++)
  FUNC_8(&VAR_4->dp, &VAR_4->r_vecs[VAR_6], VAR_6);

 return 0;

err_free_rx_rings:
 FUNC_5(&VAR_4->dp);
err_cleanup_vec:
 VAR_6 = VAR_4->dp.num_r_vecs;
err_cleanup_vec_p:
 while (VAR_6--)
  FUNC_3(VAR_4, &VAR_4->r_vecs[VAR_6]);
 FUNC_1(VAR_4, VAR_1, VAR_3);
err_free_exn:
 FUNC_1(VAR_4, VAR_0, VAR_2);
 return VAR_5;
}
