
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; scalar_t__ magic; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int,int *,int ) ;
 int FUNC_1 (struct usbnet*,int ,int,int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,char*,int,int,...) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct usbnet* FUNC_8 (struct net_device*) ;

int FUNC_9(struct net_device *VAR_8, struct ethtool_eeprom *VAR_9,
      u8 *VAR_10)
{
 struct usbnet *VAR_11 = FUNC_8(VAR_8);
 u16 *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_6(VAR_8, "write EEPROM len %d, offset %d, magic 0x%x\n",
     VAR_9->len, VAR_9->offset, VAR_9->magic);

 if (VAR_9->len == 0)
  return -VAR_5;

 if (VAR_9->magic != VAR_4)
  return -VAR_5;

 VAR_13 = VAR_9->offset >> 1;
 VAR_14 = (VAR_9->offset + VAR_9->len - 1) >> 1;

 VAR_12 = FUNC_3(VAR_14 - VAR_13 + 1, sizeof(u16),
        VAR_7);
 if (!VAR_12)
  return -VAR_6;



 if (VAR_9->offset & 1) {
  VAR_16 = FUNC_0(VAR_11, VAR_0, VAR_13, 0, 2,
        &VAR_12[0], 0);
  if (VAR_16 < 0) {
   FUNC_7(VAR_8, "Failed to read EEPROM at offset 0x%02x.\n", VAR_13);
   goto free;
  }
 }

 if ((VAR_9->offset + VAR_9->len) & 1) {
  VAR_16 = FUNC_0(VAR_11, VAR_0, VAR_14, 0, 2,
        &VAR_12[VAR_14 - VAR_13], 0);
  if (VAR_16 < 0) {
   FUNC_7(VAR_8, "Failed to read EEPROM at offset 0x%02x.\n", VAR_14);
   goto free;
  }
 }

 FUNC_4((u8 *)VAR_12 + (VAR_9->offset & 1), VAR_10, VAR_9->len);


 VAR_16 = FUNC_1(VAR_11, VAR_3, 0x0000, 0, 0, ((void*)0), 0);
 if (VAR_16 < 0) {
  FUNC_7(VAR_8, "Failed to enable EEPROM write\n");
  goto free;
 }
 FUNC_5(20);

 for (VAR_15 = VAR_13; VAR_15 <= VAR_14; VAR_15++) {
  FUNC_6(VAR_8, "write to EEPROM at offset 0x%02x, data 0x%04x\n",
      VAR_15, VAR_12[VAR_15 - VAR_13]);
  VAR_16 = FUNC_1(VAR_11, VAR_2, VAR_15,
         VAR_12[VAR_15 - VAR_13], 0, ((void*)0), 0);
  if (VAR_16 < 0) {
   FUNC_7(VAR_8, "Failed to write EEPROM at offset 0x%02x.\n",
       VAR_15);
   goto free;
  }
  FUNC_5(20);
 }

 VAR_16 = FUNC_1(VAR_11, VAR_1, 0x0000, 0, 0, ((void*)0), 0);
 if (VAR_16 < 0) {
  FUNC_7(VAR_8, "Failed to disable EEPROM write\n");
  goto free;
 }

 VAR_16 = 0;
free:
 FUNC_2(VAR_12);
 return VAR_16;
}
