
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kvaser_pciefd_rx_packet {int* header; int timestamp; } ;
struct kvaser_pciefd {TYPE_1__* pci; int ** dma_data; } ;
typedef int __le64 ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_5 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*,int *) ;
 int FUNC_6 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_7 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_8 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_9 (struct kvaser_pciefd*,struct kvaser_pciefd_rx_packet*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static int FUNC_13(struct kvaser_pciefd *VAR_4, int *VAR_5,
         int VAR_6)
{
 __le32 *VAR_7 = VAR_4->dma_data[VAR_6];
 __le64 VAR_8;
 struct kvaser_pciefd_rx_packet VAR_9;
 struct kvaser_pciefd_rx_packet *VAR_10 = &VAR_9;
 u8 VAR_11;
 int VAR_12 = *VAR_5;
 int VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_10(VAR_7[VAR_12++]);
 if (!VAR_13) {
  *VAR_5 = 0;
  return 0;
 }

 VAR_10->header[0] = FUNC_10(VAR_7[VAR_12++]);
 VAR_10->header[1] = FUNC_10(VAR_7[VAR_12++]);


 FUNC_12(&VAR_8, &VAR_7[VAR_12], sizeof(__le64));
 VAR_12 += 2;
 VAR_10->timestamp = FUNC_11(VAR_8);

 VAR_11 = (VAR_10->header[1] >> VAR_1) & 0xf;
 switch (VAR_11) {
 case 133:
  VAR_14 = FUNC_5(VAR_4, VAR_10, &VAR_7[VAR_12]);
  if (!(VAR_10->header[0] & VAR_3)) {
   u8 VAR_15;

   VAR_15 = FUNC_1(VAR_10->header[1] >>
            VAR_2);
   VAR_12 += FUNC_0(VAR_15, 4);
  }
  break;

 case 136:
  VAR_14 = FUNC_4(VAR_4, VAR_10);
  break;

 case 129:
  VAR_14 = FUNC_9(VAR_4, VAR_10);
  break;

 case 130:
  VAR_14 = FUNC_8(VAR_4, VAR_10);
  break;

 case 131:
  VAR_14 = FUNC_6(VAR_4, VAR_10);
  break;

 case 132:
  VAR_14 = FUNC_7(VAR_4, VAR_10);
  break;

 case 135:
 case 134:
 case 128:
  FUNC_3(&VAR_4->pci->dev,
    "Received unexpected packet type 0x%08X\n", VAR_11);
  break;

 default:
  FUNC_2(&VAR_4->pci->dev, "Unknown packet type 0x%08X\n", VAR_11);
  VAR_14 = -VAR_0;
  break;
 }

 if (VAR_14)
  return VAR_14;




 if ((*VAR_5 + VAR_13) != VAR_12)
  return -VAR_0;


 *VAR_5 = VAR_12;

 return VAR_14;
}
