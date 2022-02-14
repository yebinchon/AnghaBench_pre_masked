
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {int rss_algo; int * rss_indirection_tbl; int rss_hash_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_5, u32 *VAR_6,
    u8 *VAR_7, u8 *VAR_8)
{
 struct hclge_vport *VAR_9 = FUNC_0(VAR_5);
 int VAR_10;


 if (VAR_8) {
  switch (VAR_9->rss_algo) {
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
  FUNC_1(VAR_7, VAR_9->rss_hash_key, VAR_4);


 if (VAR_6)
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
   VAR_6[VAR_10] = VAR_9->rss_indirection_tbl[VAR_10];

 return 0;
}
