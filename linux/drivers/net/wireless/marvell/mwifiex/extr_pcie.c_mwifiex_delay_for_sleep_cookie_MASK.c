
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int * data; } ;
struct pcie_service_card {int dev; struct sk_buff* cmdrsp_buf; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;
typedef int sleep_cookie ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct mwifiex_adapter *VAR_3,
        u32 VAR_4)
{
 struct pcie_service_card *VAR_5 = VAR_3->card;
 u8 *VAR_6;
 u32 VAR_7, VAR_8;
 struct sk_buff *VAR_9 = VAR_5->cmdrsp_buf;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_3(VAR_5->dev,
         FUNC_0(VAR_9),
         sizeof(VAR_7),
         VAR_2);
  VAR_6 = VAR_9->data;
  VAR_7 = FUNC_1(VAR_6);

  if (VAR_7 == VAR_1) {
   FUNC_2(VAR_3, VAR_0,
        "sleep cookie found at count %d\n", VAR_8);
   break;
  }
  FUNC_4(VAR_5->dev,
            FUNC_0(VAR_9),
            sizeof(VAR_7),
            VAR_2);
  FUNC_5(20, 30);
 }

 if (VAR_8 >= VAR_4)
  FUNC_2(VAR_3, VAR_0,
       "max count reached while accessing sleep cookie\n");
}
