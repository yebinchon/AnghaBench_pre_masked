
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nix_mce_list {int max; scalar_t__ count; int head; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nix_mce_list *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->head);
 VAR_0->count = 0;
 VAR_0->max = VAR_1;
}
