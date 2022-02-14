
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lstatus; } ;
struct TYPE_5__ {int addr; } ;
union enetc_rx_bd {TYPE_3__ r; TYPE_2__ w; } ;
struct enetc_rx_swbd {scalar_t__ page_offset; scalar_t__ dma; int page; } ;
struct TYPE_4__ {int rx_alloc_errs; } ;
struct enetc_bdr {int next_to_use; int bd_count; int next_to_alloc; int rcir; struct enetc_rx_swbd* rx_swbd; TYPE_1__ stats; } ;


 union enetc_rx_bd* FUNC_0 (struct enetc_bdr,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct enetc_bdr*,struct enetc_rx_swbd*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct enetc_bdr *VAR_0, const int VAR_1)
{
 struct enetc_rx_swbd *VAR_2;
 union enetc_rx_bd *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = VAR_0->next_to_use;
 VAR_2 = &VAR_0->rx_swbd[VAR_4];
 VAR_3 = FUNC_0(*VAR_0, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  if (FUNC_5(!VAR_2->page)) {
   if (FUNC_5(!FUNC_2(VAR_0, VAR_2))) {
    VAR_0->stats.rx_alloc_errs++;
    break;
   }
  }


  VAR_3->w.addr = FUNC_1(VAR_2->dma +
        VAR_2->page_offset);

  VAR_3->r.lstatus = 0;

  VAR_2++;
  VAR_3++;
  VAR_4++;
  if (FUNC_5(VAR_4 == VAR_0->bd_count)) {
   VAR_4 = 0;
   VAR_2 = VAR_0->rx_swbd;
   VAR_3 = FUNC_0(*VAR_0, 0);
  }
 }

 if (FUNC_4(VAR_5)) {
  VAR_0->next_to_alloc = VAR_4;
  VAR_0->next_to_use = VAR_4;

  FUNC_3(VAR_0->rcir, VAR_4);
 }

 return VAR_5;
}
