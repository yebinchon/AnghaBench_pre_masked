
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclgevf_rss_cfg {int * rss_indirection_tbl; int rss_hash_key; int hash_algo; } ;
struct hclgevf_dev {struct hclgevf_rss_cfg rss_cfg; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int const*) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_5, const u32 *VAR_6,
      const u8 *VAR_7, const u8 VAR_8)
{
 struct hclgevf_dev *VAR_9 = FUNC_0(VAR_5);
 struct hclgevf_rss_cfg *VAR_10 = &VAR_9->rss_cfg;
 int VAR_11, VAR_12;

 if (VAR_5->pdev->revision >= 0x21) {

  if (VAR_7) {
   switch (VAR_8) {
   case 129:
    VAR_10->hash_algo =
     VAR_2;
    break;
   case 128:
    VAR_10->hash_algo =
     VAR_1;
    break;
   case 130:
    break;
   default:
    return -VAR_0;
   }

   VAR_11 = FUNC_1(VAR_9, VAR_10->hash_algo,
             VAR_7);
   if (VAR_11)
    return VAR_11;


   FUNC_3(VAR_10->rss_hash_key, VAR_7,
          VAR_4);
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_10->rss_indirection_tbl[VAR_12] = VAR_6[VAR_12];


 return FUNC_2(VAR_9);
}
