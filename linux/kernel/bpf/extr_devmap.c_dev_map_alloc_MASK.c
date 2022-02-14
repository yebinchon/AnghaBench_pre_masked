
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bpf_attr {int dummy; } bpf_attr ;
struct bpf_map {int dummy; } ;
struct bpf_dtab {struct bpf_map map; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_map* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_dtab*,union bpf_attr*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bpf_dtab*) ;
 struct bpf_dtab* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct bpf_map *FUNC_8(union bpf_attr *VAR_6)
{
 struct bpf_dtab *VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_0))
  return FUNC_0(-VAR_2);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_2(VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }

 FUNC_6(&VAR_5);
 FUNC_5(&VAR_7->list, &VAR_4);
 FUNC_7(&VAR_5);

 return &VAR_7->map;
}
