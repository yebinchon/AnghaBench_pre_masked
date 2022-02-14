
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_cbdr {int next_to_clean; int bd_count; int cir; } ;
struct enetc_si {TYPE_1__* pdev; struct enetc_cbdr cbd_ring; } ;
struct enetc_cbd {int status_flags; int cmd; } ;
struct TYPE_2__ {int dev; } ;


 struct enetc_cbd* FUNC_0 (struct enetc_cbdr,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct enetc_cbd*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct enetc_si *VAR_1)
{
 struct enetc_cbdr *VAR_2 = &VAR_1->cbd_ring;
 struct enetc_cbd *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->next_to_clean;

 while (FUNC_2(VAR_2->cir) != VAR_4) {
  VAR_3 = FUNC_0(*VAR_2, VAR_4);
  VAR_5 = VAR_3->status_flags & VAR_0;
  if (VAR_5)
   FUNC_1(&VAR_1->pdev->dev, "CMD err %04x for cmd %04x\n",
     VAR_5, VAR_3->cmd);

  FUNC_3(VAR_3, 0, sizeof(*VAR_3));

  VAR_4 = (VAR_4 + 1) % VAR_2->bd_count;
 }

 VAR_2->next_to_clean = VAR_4;
}
