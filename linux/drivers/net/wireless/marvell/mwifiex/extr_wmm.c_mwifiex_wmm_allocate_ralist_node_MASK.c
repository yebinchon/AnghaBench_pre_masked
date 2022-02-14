
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_ra_list_tbl {scalar_t__ total_pkt_count; int ra; int skb_head; int list; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct mwifiex_ra_list_tbl* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,struct mwifiex_ra_list_tbl*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct mwifiex_ra_list_tbl *
FUNC_5(struct mwifiex_adapter *VAR_3, const u8 *VAR_4)
{
 struct mwifiex_ra_list_tbl *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct mwifiex_ra_list_tbl), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->list);
 FUNC_4(&VAR_5->skb_head);

 FUNC_2(VAR_5->ra, VAR_4, VAR_0);

 VAR_5->total_pkt_count = 0;

 FUNC_3(VAR_3, VAR_2, "info: allocated ra_list %p\n", VAR_5);

 return VAR_5;
}
