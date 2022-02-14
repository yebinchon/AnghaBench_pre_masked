
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct dma_pub {scalar_t__ txavail; } ;
struct d11txh {int TxFrameID; } ;
struct brcms_c_info {TYPE_2__* hw; TYPE_1__* pub; } ;
struct TYPE_4__ {int d11core; struct dma_pub** di; } ;
struct TYPE_3__ {int ieee_hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (struct brcms_c_info*,int,struct sk_buff*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct brcms_c_info *VAR_4, struct sk_buff *VAR_5)
{
 struct dma_pub *VAR_6;
 int VAR_7, VAR_8 = -VAR_0;
 struct d11txh *VAR_9;
 u16 VAR_10 = VAR_1;

 VAR_7 = FUNC_2(FUNC_8(VAR_5));
 VAR_6 = VAR_4->hw->di[VAR_7];
 VAR_9 = (struct d11txh *)(VAR_5->data);

 if (VAR_6->txavail == 0) {
  FUNC_5(VAR_4->hw->d11core,
      "Received frame for tx with no space in DMA ring\n");
  FUNC_0(!FUNC_6(VAR_4->pub->ieee_hw,
       FUNC_8(VAR_5)));
  return -VAR_0;
 }




 if (VAR_7 == VAR_3)
  VAR_10 = FUNC_7(VAR_9->TxFrameID);


 if (VAR_10 != VAR_1) {




  FUNC_3(VAR_4->hw, VAR_2, VAR_10);
 }

 VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_5);





 FUNC_1(VAR_8);

 return VAR_8;
}
