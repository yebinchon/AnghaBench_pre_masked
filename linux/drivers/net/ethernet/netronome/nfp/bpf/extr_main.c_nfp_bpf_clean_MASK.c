
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app_bpf {int maps_neutral; scalar_t__ map_elems_in_use; scalar_t__ maps_in_use; int map_list; int ccm; int bpf_dev; } ;
struct nfp_app {struct nfp_app_bpf* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_app_bpf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct nfp_app *VAR_1)
{
 struct nfp_app_bpf *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_2->bpf_dev);
 FUNC_4(&VAR_2->ccm);
 FUNC_0(!FUNC_3(&VAR_2->map_list));
 FUNC_0(VAR_2->maps_in_use || VAR_2->map_elems_in_use);
 FUNC_5(&VAR_2->maps_neutral,
        VAR_0, ((void*)0));
 FUNC_2(VAR_2);
}
