
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_flowring_ring {size_t hash_id; int skblist; } ;
struct brcmf_flowring {struct brcmf_flowring_ring** rings; TYPE_1__* hash; int dev; } ;
struct brcmf_bus {int drvr; } ;
struct TYPE_2__ {int mac; int ifidx; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_flowring*,size_t,int) ;
 int FUNC_1 (struct brcmf_flowring*,size_t) ;
 struct brcmf_if* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct brcmf_if*,struct sk_buff*,int) ;
 struct brcmf_bus* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct brcmf_flowring_ring*) ;
 struct sk_buff* FUNC_7 (int *) ;

void FUNC_8(struct brcmf_flowring *VAR_1, u16 VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_4(VAR_1->dev);
 struct brcmf_flowring_ring *VAR_4;
 struct brcmf_if *VAR_5;
 u16 VAR_6;
 u8 VAR_7;
 struct sk_buff *VAR_8;

 VAR_4 = VAR_1->rings[VAR_2];
 if (!VAR_4)
  return;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 VAR_5 = FUNC_2(VAR_3->drvr, VAR_7);

 FUNC_0(VAR_1, VAR_2, 0);
 VAR_6 = VAR_4->hash_id;
 VAR_1->hash[VAR_6].ifidx = VAR_0;
 FUNC_5(VAR_1->hash[VAR_6].mac);
 VAR_1->rings[VAR_2] = ((void*)0);

 VAR_8 = FUNC_7(&VAR_4->skblist);
 while (VAR_8) {
  FUNC_3(VAR_5, VAR_8, 0);
  VAR_8 = FUNC_7(&VAR_4->skblist);
 }

 FUNC_6(VAR_4);
}
