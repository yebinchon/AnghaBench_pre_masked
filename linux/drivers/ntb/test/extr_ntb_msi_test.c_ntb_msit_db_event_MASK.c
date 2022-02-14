
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ntb_msit_ctx {TYPE_1__* peers; int ntb; } ;
struct ntb_msi_desc {int dummy; } ;
typedef int peer_mask ;
struct TYPE_2__ {int num_irqs; struct ntb_msi_desc* msi_desc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ntb_msi_desc* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct ntb_msi_desc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ntb_msit_ctx*,int) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, int VAR_2)
{
 struct ntb_msit_ctx *VAR_3 = VAR_1;
 struct ntb_msi_desc *VAR_4;
 u64 VAR_5 = FUNC_4(VAR_3->ntb);
 u32 VAR_6;
 int VAR_7;

 FUNC_3(VAR_3->ntb, VAR_5);

 for (VAR_7 = 0; VAR_7 < sizeof(VAR_5) * 8; VAR_7++) {
  if (!(VAR_5 & FUNC_0(VAR_7)))
   continue;

  VAR_6 = FUNC_6(VAR_3->ntb, VAR_7, 0);
  if (VAR_6 == -1)
   continue;

  VAR_4 = FUNC_1(VAR_6, sizeof(*VAR_4), VAR_0);
  if (!VAR_4)
   continue;

  FUNC_2(VAR_3->peers[VAR_7].msi_desc);
  VAR_3->peers[VAR_7].msi_desc = VAR_4;
  VAR_3->peers[VAR_7].num_irqs = VAR_6;

  FUNC_5(VAR_3, VAR_7);
 }
}
