
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int dxe_rx_h_ch; int dxe_rx_l_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wcn36xx*,int ,int*) ;
 int FUNC_1 (struct wcn36xx*,int *,int ,int,int ,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct wcn36xx *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_9, VAR_6, &VAR_10);


 if (VAR_10 & VAR_4)
  FUNC_1(VAR_9, &VAR_9->dxe_rx_l_ch,
       VAR_3,
       VAR_4,
       VAR_8,
       VAR_1);


 if (VAR_10 & VAR_5)
  FUNC_1(VAR_9, &VAR_9->dxe_rx_h_ch,
       VAR_2,
       VAR_5,
       VAR_7,
       VAR_0);

 if (!VAR_10)
  FUNC_2("No DXE interrupt pending\n");
}
