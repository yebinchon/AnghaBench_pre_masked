
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_r_vecs; } ;
struct nfp_net {int * r_vecs; TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfp_net*,int ,int ) ;
 int FUNC_1 (struct nfp_net*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct nfp_net *VAR_4)
{
 unsigned int VAR_5;

 FUNC_3(&VAR_4->dp);
 FUNC_2(&VAR_4->dp);

 for (VAR_5 = 0; VAR_5 < VAR_4->dp.num_r_vecs; VAR_5++)
  FUNC_1(VAR_4, &VAR_4->r_vecs[VAR_5]);

 FUNC_0(VAR_4, VAR_1, VAR_3);
 FUNC_0(VAR_4, VAR_0, VAR_2);
}
