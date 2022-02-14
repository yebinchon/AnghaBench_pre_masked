
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_pkt_buf_alloc {int dummy; } ;
struct hclge_dev {int pkt_buf_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 scalar_t__ FUNC_1 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 scalar_t__ FUNC_2 (struct hclge_pkt_buf_alloc*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_pkt_buf_alloc*,int ) ;
 scalar_t__ FUNC_4 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 scalar_t__ FUNC_5 (struct hclge_dev*,int,struct hclge_pkt_buf_alloc*) ;
 int FUNC_6 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_1,
    struct hclge_pkt_buf_alloc *VAR_2)
{

 if (!FUNC_6(VAR_1)) {
  u32 VAR_3 = VAR_1->pkt_buf_size;

  VAR_3 -= FUNC_2(VAR_2);
  if (!FUNC_3(VAR_1, VAR_2, VAR_3))
   return -VAR_0;

  return 0;
 }

 if (FUNC_4(VAR_1, VAR_2))
  return 0;

 if (FUNC_5(VAR_1, 1, VAR_2))
  return 0;


 if (FUNC_5(VAR_1, 0, VAR_2))
  return 0;

 if (FUNC_0(VAR_1, VAR_2))
  return 0;

 if (FUNC_1(VAR_1, VAR_2))
  return 0;

 return -VAR_0;
}
