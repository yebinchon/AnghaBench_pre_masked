
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int dummy; } ;
struct xgene_cle_dbptr {int drop; int fpsel; int nxtfpsel; int dstqid; int cle_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_7,
      struct xgene_cle_dbptr *VAR_8, u32 *VAR_9)
{
 VAR_9[0] = FUNC_0(VAR_0, VAR_8->drop);
 VAR_9[4] = FUNC_0(VAR_4, VAR_8->fpsel) |
   FUNC_0(VAR_5, VAR_8->nxtfpsel) |
   FUNC_0(VAR_2, VAR_8->dstqid);

 VAR_9[5] = FUNC_0(VAR_1, (u32)VAR_8->dstqid >> VAR_3) |
   FUNC_0(VAR_6, VAR_8->cle_priority);
}
