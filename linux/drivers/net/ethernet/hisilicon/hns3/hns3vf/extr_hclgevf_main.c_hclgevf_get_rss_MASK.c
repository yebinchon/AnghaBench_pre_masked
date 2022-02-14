
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclgevf_rss_cfg {int hash_algo; int * rss_indirection_tbl; int rss_hash_key; } ;
struct hclgevf_dev {struct hclgevf_rss_cfg rss_cfg; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_5, u32 *VAR_6, u8 *VAR_7,
      u8 *VAR_8)
{
 struct hclgevf_dev *VAR_9 = FUNC_0(VAR_5);
 struct hclgevf_rss_cfg *VAR_10 = &VAR_9->rss_cfg;
 int VAR_11, VAR_12;

 if (VAR_5->pdev->revision >= 0x21) {

  if (VAR_8) {
   switch (VAR_10->hash_algo) {
   case 128:
    *VAR_8 = VAR_0;
    break;
   case 129:
    *VAR_8 = VAR_2;
    break;
   default:
    *VAR_8 = VAR_1;
    break;
   }
  }


  if (VAR_7)
   FUNC_2(VAR_7, VAR_10->rss_hash_key,
          VAR_4);
 } else {
  if (VAR_8)
   *VAR_8 = VAR_0;
  if (VAR_7) {
   VAR_12 = FUNC_1(VAR_9);
   if (VAR_12)
    return VAR_12;
   FUNC_2(VAR_7, VAR_10->rss_hash_key,
          VAR_4);
  }
 }

 if (VAR_6)
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   VAR_6[VAR_11] = VAR_10->rss_indirection_tbl[VAR_11];

 return 0;
}
