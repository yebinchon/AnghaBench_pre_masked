
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {scalar_t__ bcast_mce_idx; int bcast_mce_list; } ;
struct rvu {int cgx_mapped_pfs; struct rvu_pfvf* pf; } ;
struct nix_mcast {int dummy; } ;
struct nix_hw {struct nix_mcast mcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nix_mcast*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct rvu*,scalar_t__,int ,int,int ,int) ;
 int FUNC_4 (struct rvu*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rvu *VAR_3, struct nix_hw *VAR_4)
{
 struct nix_mcast *VAR_5 = &VAR_4->mcast;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 struct rvu_pfvf *VAR_10;
 u16 VAR_11;
 u64 VAR_12;


 for (VAR_7 = 1; VAR_7 < (VAR_3->cgx_mapped_pfs + 1); VAR_7++) {
  VAR_12 = FUNC_4(VAR_3, VAR_0, FUNC_0(VAR_7));

  if (!((VAR_12 >> 20) & 0x01))
   continue;

  VAR_8 = (VAR_12 >> 12) & 0xFF;

  VAR_10 = &VAR_3->pf[VAR_7];

  VAR_10->bcast_mce_idx = FUNC_1(VAR_5, VAR_8 + 1);

  FUNC_2(&VAR_10->bcast_mce_list, VAR_8 + 1);

  for (VAR_9 = 0; VAR_9 < (VAR_8 + 1); VAR_9++) {

   VAR_11 = (VAR_7 << VAR_2);
   VAR_11 |= VAR_9;





   VAR_6 = FUNC_3(VAR_3, VAR_10->bcast_mce_idx + VAR_9,
         VAR_1,
         VAR_11, 0, 1);
   if (VAR_6)
    return VAR_6;
  }
 }
 return 0;
}
