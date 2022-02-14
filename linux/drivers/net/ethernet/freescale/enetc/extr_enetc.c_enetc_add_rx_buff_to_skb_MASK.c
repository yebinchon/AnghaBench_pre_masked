
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct enetc_rx_swbd {int page_offset; int page; } ;
struct enetc_bdr {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 struct enetc_rx_swbd* FUNC_0 (struct enetc_bdr*,int,int ) ;
 int FUNC_1 (struct enetc_bdr*,struct enetc_rx_swbd*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct enetc_bdr *VAR_1, int VAR_2,
         u16 VAR_3, struct sk_buff *VAR_4)
{
 struct enetc_rx_swbd *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_4, FUNC_3(VAR_4)->nr_frags, VAR_5->page,
   VAR_5->page_offset, VAR_3, VAR_0);

 FUNC_1(VAR_1, VAR_5);
}
