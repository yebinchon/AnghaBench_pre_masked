
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_flowring {int* addr_mode; TYPE_1__** rings; TYPE_2__* hash; int dev; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;
typedef enum proto_addr_mode { ____Placeholder_proto_addr_mode } proto_addr_mode ;
struct TYPE_4__ {int ifidx; size_t flowid; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct brcmf_pub*,size_t) ;
 struct brcmf_bus* FUNC_2 (int ) ;

void FUNC_3(struct brcmf_flowring *VAR_2, int VAR_3,
     enum proto_addr_mode VAR_4)
{
 struct brcmf_bus *VAR_5 = FUNC_2(VAR_2->dev);
 struct brcmf_pub *VAR_6 = VAR_5->drvr;
 u32 VAR_7;
 u16 VAR_8;

 if (VAR_2->addr_mode[VAR_3] != VAR_4) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->hash); VAR_7++) {
   if (VAR_2->hash[VAR_7].ifidx == VAR_3) {
    VAR_8 = VAR_2->hash[VAR_7].flowid;
    if (VAR_2->rings[VAR_8]->status != VAR_1)
     continue;
    VAR_2->rings[VAR_8]->status = VAR_0;
    FUNC_1(VAR_6, VAR_8);
   }
  }
  VAR_2->addr_mode[VAR_3] = VAR_4;
 }
}
