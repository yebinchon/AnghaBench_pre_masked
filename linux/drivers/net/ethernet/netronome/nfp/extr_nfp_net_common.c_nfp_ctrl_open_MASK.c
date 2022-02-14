
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_r_vecs; } ;
struct nfp_net {TYPE_2__* r_vecs; TYPE_1__ dp; } ;
struct TYPE_4__ {int irq_vector; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct nfp_net *VAR_0)
{
 int VAR_1, VAR_2;


 FUNC_4();

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto err_unlock;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto err_free_all;

 for (VAR_2 = 0; VAR_2 < VAR_0->dp.num_r_vecs; VAR_2++)
  FUNC_0(VAR_0->r_vecs[VAR_2].irq_vector);

 FUNC_5();

 return 0;

err_free_all:
 FUNC_1(VAR_0);
err_unlock:
 FUNC_5();
 return VAR_1;
}
