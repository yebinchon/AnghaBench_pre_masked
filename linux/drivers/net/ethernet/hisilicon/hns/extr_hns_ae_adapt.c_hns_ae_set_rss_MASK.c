
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hns_ppe_cb {int rss_indir_table; int rss_key; } ;
struct hnae_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hns_ppe_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_ppe_cb*,int ) ;
 int FUNC_2 (struct hns_ppe_cb*,int ) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct hnae_handle *VAR_2, const u32 *VAR_3,
     const u8 *VAR_4, const u8 VAR_5)
{
 struct hns_ppe_cb *VAR_6 = FUNC_0(VAR_2);


 if (VAR_4) {
  FUNC_3(VAR_6->rss_key, VAR_4, VAR_1);
  FUNC_2(VAR_6, VAR_6->rss_key);
 }

 if (VAR_3) {

  FUNC_3(VAR_6->rss_indir_table, VAR_3,
         VAR_0 * sizeof(*VAR_3));


  FUNC_1(VAR_6, VAR_6->rss_indir_table);
 }

 return 0;
}
