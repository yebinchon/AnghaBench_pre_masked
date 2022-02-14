
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nix_mcast {int next_free_mce; } ;



__attribute__((used)) static u16 FUNC_0(struct nix_mcast *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;

 VAR_2 = VAR_0->next_free_mce;
 VAR_0->next_free_mce += VAR_1;
 return VAR_2;
}
