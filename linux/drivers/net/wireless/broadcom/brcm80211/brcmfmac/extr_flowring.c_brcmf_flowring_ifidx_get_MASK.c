
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct brcmf_flowring_ring {size_t hash_id; } ;
struct brcmf_flowring {TYPE_1__* hash; struct brcmf_flowring_ring** rings; } ;
struct TYPE_2__ {int ifidx; } ;



u8 FUNC_0(struct brcmf_flowring *VAR_0, u16 VAR_1)
{
 struct brcmf_flowring_ring *VAR_2;
 u16 VAR_3;

 VAR_2 = VAR_0->rings[VAR_1];
 VAR_3 = VAR_2->hash_id;

 return VAR_0->hash[VAR_3].ifidx;
}
