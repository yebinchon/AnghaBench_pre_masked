
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int work; int btf; int refcnt; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct bpf_map*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct bpf_map *VAR_1, bool VAR_2)
{
 if (FUNC_1(&VAR_1->refcnt)) {

  FUNC_2(VAR_1, VAR_2);
  FUNC_3(VAR_1->btf);
  FUNC_0(&VAR_1->work, VAR_0);
  FUNC_4(&VAR_1->work);
 }
}
