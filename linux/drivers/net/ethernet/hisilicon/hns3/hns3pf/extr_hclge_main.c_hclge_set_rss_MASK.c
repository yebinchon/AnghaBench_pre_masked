
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {int rss_algo; int * rss_indirection_tbl; int rss_hash_key; struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*,int,int const*) ;
 int FUNC_2 (struct hclge_dev*,int *) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_5, const u32 *VAR_6,
    const u8 *VAR_7, const u8 VAR_8)
{
 struct hclge_vport *VAR_9 = FUNC_0(VAR_5);
 struct hclge_dev *VAR_10 = VAR_9->back;
 u8 VAR_11;
 int VAR_12, VAR_13;


 if (VAR_7) {
  switch (VAR_8) {
  case 129:
   VAR_11 = VAR_2;
   break;
  case 128:
   VAR_11 = VAR_1;
   break;
  case 130:
   VAR_11 = VAR_9->rss_algo;
   break;
  default:
   return -VAR_0;
  }

  VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_7);
  if (VAR_12)
   return VAR_12;


  FUNC_3(VAR_9->rss_hash_key, VAR_7, VAR_4);
  VAR_9->rss_algo = VAR_11;
 }


 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  VAR_9->rss_indirection_tbl[VAR_13] = VAR_6[VAR_13];


 return FUNC_2(VAR_10, VAR_9->rss_indirection_tbl);
}
