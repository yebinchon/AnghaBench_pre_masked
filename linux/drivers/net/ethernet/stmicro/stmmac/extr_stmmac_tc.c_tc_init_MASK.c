
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_features {unsigned int l3l4fnum; int frpbs; int frpes; int frpsel; } ;
struct stmmac_priv {unsigned int flow_entries_max; int tc_off_max; unsigned int tc_entries_max; int device; int * tc_entries; TYPE_1__* flow_entries; struct dma_features dma_cap; } ;
struct TYPE_2__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 void* FUNC_1 (int ,unsigned int,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_3)
{
 struct dma_features *VAR_4 = &VAR_3->dma_cap;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_4->l3l4fnum) {
  VAR_3->flow_entries_max = VAR_4->l3l4fnum;
  VAR_3->flow_entries = FUNC_1(VAR_3->device,
        VAR_4->l3l4fnum,
        sizeof(*VAR_3->flow_entries),
        VAR_2);
  if (!VAR_3->flow_entries)
   return -VAR_1;

  for (VAR_6 = 0; VAR_6 < VAR_3->flow_entries_max; VAR_6++)
   VAR_3->flow_entries[VAR_6].idx = VAR_6;

  FUNC_0(VAR_3->device, "Enabled Flow TC (entries=%d)\n",
    VAR_3->flow_entries_max);
 }


 if (!VAR_4->frpsel)
  return 0;

 switch (VAR_4->frpbs) {
 case 0x0:
  VAR_3->tc_off_max = 64;
  break;
 case 0x1:
  VAR_3->tc_off_max = 128;
  break;
 case 0x2:
  VAR_3->tc_off_max = 256;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_4->frpes) {
 case 0x0:
  VAR_5 = 64;
  break;
 case 0x1:
  VAR_5 = 128;
  break;
 case 0x2:
  VAR_5 = 256;
  break;
 default:
  return -VAR_0;
 }


 VAR_3->tc_entries_max = VAR_5;
 VAR_3->tc_entries = FUNC_1(VAR_3->device,
   VAR_5, sizeof(*VAR_3->tc_entries), VAR_2);
 if (!VAR_3->tc_entries)
  return -VAR_1;

 FUNC_2(&VAR_3->tc_entries[VAR_5 - 1]);

 FUNC_0(VAR_3->device, "Enabling HW TC (entries=%d, max_off=%d)\n",
   VAR_3->tc_entries_max, VAR_3->tc_off_max);
 return 0;
}
