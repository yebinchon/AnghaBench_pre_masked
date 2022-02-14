
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {struct nix_hw* nix0; } ;
struct nix_hw {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct nix_hw *FUNC_0(struct rvu_hwinfo *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0 && VAR_1->nix0)
  return VAR_1->nix0;

 return ((void*)0);
}
