
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {int map_records_cnt; struct nfp_bpf_neutral_map** map_records; } ;
struct nfp_bpf_neutral_map {int count; int l; int map_id; struct bpf_map* ptr; } ;
struct nfp_app_bpf {int maps_neutral; } ;
struct bpf_map {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (struct bpf_map*,int) ;
 int FUNC_3 (struct bpf_map*) ;
 int FUNC_4 (struct nfp_bpf_neutral_map*) ;
 struct nfp_bpf_neutral_map* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,int ) ;
 struct nfp_bpf_neutral_map* FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct nfp_app_bpf *VAR_3, struct nfp_prog *VAR_4,
     struct bpf_map *VAR_5)
{
 struct nfp_bpf_neutral_map *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_7(&VAR_3->maps_neutral, &VAR_5->id,
     VAR_2);
 if (VAR_6) {
  VAR_4->map_records[VAR_4->map_records_cnt++] = VAR_6;
  VAR_6->count++;
  return 0;
 }




 VAR_5 = FUNC_2(VAR_5, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_map_put;
 }

 VAR_6->ptr = VAR_5;
 VAR_6->map_id = VAR_5->id;
 VAR_6->count = 1;

 VAR_7 = FUNC_6(&VAR_3->maps_neutral, &VAR_6->l,
         VAR_2);
 if (VAR_7)
  goto err_free_rec;

 VAR_4->map_records[VAR_4->map_records_cnt++] = VAR_6;

 return 0;

err_free_rec:
 FUNC_4(VAR_6);
err_map_put:
 FUNC_3(VAR_5);
 return VAR_7;
}
