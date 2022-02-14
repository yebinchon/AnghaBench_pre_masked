
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int dxe_tx_l_ch; int dxe_tx_h_ch; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct wcn36xx*,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wcn36xx*,int ,int*) ;
 int FUNC_3 (struct wcn36xx*,int ,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_14, void *VAR_15)
{
 struct wcn36xx *VAR_16 = (struct wcn36xx *)VAR_15;
 int VAR_17, VAR_18;

 FUNC_2(VAR_16, VAR_11, &VAR_17);

 if (VAR_17 & VAR_12) {
  FUNC_2(VAR_16,
       VAR_9,
       &VAR_18);

  FUNC_3(VAR_16,
        VAR_5,
        VAR_12);

  if (VAR_18 & VAR_3 ) {
   FUNC_3(VAR_16,
         VAR_8,
         VAR_12);

   FUNC_4("DXE IRQ reported error: 0x%x in high TX channel\n",
     VAR_17);
  }

  if (VAR_18 & VAR_1) {
   FUNC_3(VAR_16,
         VAR_6,
         VAR_12);
  }

  if (VAR_18 & VAR_2) {
   FUNC_3(VAR_16,
         VAR_7,
         VAR_12);
  }

  FUNC_1(VAR_4, "dxe tx ready high, reason %08x\n",
       VAR_18);

  if (VAR_18 & (VAR_1 |
      VAR_2))
   FUNC_0(VAR_16, &VAR_16->dxe_tx_h_ch);
 }

 if (VAR_17 & VAR_13) {
  FUNC_2(VAR_16,
       VAR_10,
       &VAR_18);

  FUNC_3(VAR_16,
        VAR_5,
        VAR_13);


  if (VAR_18 & VAR_3 ) {
   FUNC_3(VAR_16,
         VAR_8,
         VAR_13);

   FUNC_4("DXE IRQ reported error: 0x%x in low TX channel\n",
     VAR_17);
  }

  if (VAR_18 & VAR_1) {
   FUNC_3(VAR_16,
         VAR_6,
         VAR_13);
  }

  if (VAR_18 & VAR_2) {
   FUNC_3(VAR_16,
         VAR_7,
         VAR_13);
  }

  FUNC_1(VAR_4, "dxe tx ready low, reason %08x\n",
       VAR_18);

  if (VAR_18 & (VAR_1 |
      VAR_2))
   FUNC_0(VAR_16, &VAR_16->dxe_tx_l_ch);
 }

 return VAR_0;
}
