
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rvu {int hw; } ;
struct nix_rx_flowkey_alg {int dummy; } ;
struct TYPE_2__ {int in_use; int * flowkey; } ;
struct nix_hw {TYPE_1__ flowkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 struct nix_hw* FUNC_1 (int ,int) ;
 int FUNC_2 (struct rvu*,int,int ,int ) ;
 int FUNC_3 (struct nix_rx_flowkey_alg*,int ) ;

__attribute__((used)) static int FUNC_4(struct rvu *VAR_4, int VAR_5, u32 VAR_6)
{
 u64 VAR_7[VAR_1];
 struct nix_hw *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_4->hw, VAR_5);
 if (!VAR_8)
  return -VAR_0;


 if (VAR_8->flowkey.in_use >= VAR_3)
  return VAR_2;


 VAR_10 = FUNC_3((struct nix_rx_flowkey_alg *)VAR_7, VAR_6);
 if (VAR_10)
  return VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  FUNC_2(VAR_4, VAR_5,
       FUNC_0(VAR_8->flowkey.in_use,
          VAR_9), VAR_7[VAR_9]);


 VAR_10 = VAR_8->flowkey.in_use;
 VAR_8->flowkey.flowkey[VAR_10] = VAR_6;
 VAR_8->flowkey.in_use++;

 return VAR_10;
}
