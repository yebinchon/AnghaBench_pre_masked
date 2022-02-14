
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_uf_s {int dummy; } ;
struct bfa_uf_mod_s {int uf_free_q; } ;


 int FUNC_0 (int *,struct bfa_uf_s**) ;

__attribute__((used)) static struct bfa_uf_s *
FUNC_1(struct bfa_uf_mod_s *VAR_0)
{
 struct bfa_uf_s *VAR_1;

 FUNC_0(&VAR_0->uf_free_q, &VAR_1);
 return VAR_1;
}
