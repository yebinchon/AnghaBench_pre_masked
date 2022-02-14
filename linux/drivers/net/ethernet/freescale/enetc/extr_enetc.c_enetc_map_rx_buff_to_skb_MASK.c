
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct enetc_rx_swbd {int page_offset; int page; } ;
struct TYPE_2__ {int rx_alloc_errs; } ;
struct enetc_bdr {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (void*,int ) ;
 struct enetc_rx_swbd* FUNC_2 (struct enetc_bdr*,int,int ) ;
 int FUNC_3 (struct enetc_bdr*,struct enetc_rx_swbd*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct enetc_bdr *VAR_2,
      int VAR_3, u16 VAR_4)
{
 struct enetc_rx_swbd *VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 struct sk_buff *VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_4(VAR_5->page) + VAR_5->page_offset;
 VAR_6 = FUNC_1(VAR_7 - VAR_0, VAR_1);
 if (FUNC_6(!VAR_6)) {
  VAR_2->stats.rx_alloc_errs++;
  return ((void*)0);
 }

 FUNC_5(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_4);

 FUNC_3(VAR_2, VAR_5);

 return VAR_6;
}
