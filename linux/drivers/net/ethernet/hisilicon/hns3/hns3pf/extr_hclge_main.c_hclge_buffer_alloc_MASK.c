
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_pkt_buf_alloc {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_4 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_5 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_6 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 int FUNC_7 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 scalar_t__ FUNC_8 (struct hclge_dev*) ;
 int FUNC_9 (struct hclge_pkt_buf_alloc*) ;
 struct hclge_pkt_buf_alloc* FUNC_10 (int,int ) ;

int FUNC_11(struct hclge_dev *VAR_2)
{
 struct hclge_pkt_buf_alloc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_10(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_7(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "could not calc tx buffer size for all TCs %d\n", VAR_4);
  goto out;
 }

 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "could not alloc tx buffers %d\n", VAR_4);
  goto out;
 }

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "could not calc rx priv buffer size for all TCs %d\n",
   VAR_4);
  goto out;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev, "could not alloc rx priv buffer %d\n",
   VAR_4);
  goto out;
 }

 if (FUNC_8(VAR_2)) {
  VAR_4 = FUNC_5(VAR_2, VAR_3);
  if (VAR_4) {
   FUNC_0(&VAR_2->pdev->dev,
    "could not configure rx private waterline %d\n",
    VAR_4);
   goto out;
  }

  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4) {
   FUNC_0(&VAR_2->pdev->dev,
    "could not configure common threshold %d\n",
    VAR_4);
   goto out;
  }
 }

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_2->pdev->dev,
   "could not configure common waterline %d\n", VAR_4);

out:
 FUNC_9(VAR_3);
 return VAR_4;
}
