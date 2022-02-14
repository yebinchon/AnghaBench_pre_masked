
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_rx_desc {int status; int data_size; } ;
struct mvneta_port {int dev; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mvneta_port *VAR_1,
       struct mvneta_rx_desc *VAR_2)
{
 u32 VAR_3 = VAR_2->status;

 switch (VAR_3 & VAR_0) {
 case 131:
  FUNC_0(VAR_1->dev, "bad rx status %08x (crc error), size=%d\n",
      VAR_3, VAR_2->data_size);
  break;
 case 129:
  FUNC_0(VAR_1->dev, "bad rx status %08x (overrun error), size=%d\n",
      VAR_3, VAR_2->data_size);
  break;
 case 130:
  FUNC_0(VAR_1->dev, "bad rx status %08x (max frame length error), size=%d\n",
      VAR_3, VAR_2->data_size);
  break;
 case 128:
  FUNC_0(VAR_1->dev, "bad rx status %08x (resource error), size=%d\n",
      VAR_3, VAR_2->data_size);
  break;
 }
}
