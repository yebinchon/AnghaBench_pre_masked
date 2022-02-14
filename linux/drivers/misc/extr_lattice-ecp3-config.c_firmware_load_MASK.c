
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct spi_device {int dev; } ;
struct fpga_data {int fw_loaded; } ;
struct firmware {int size; int data; } ;
struct TYPE_3__ {scalar_t__ jedec_id; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct firmware const*) ;
 struct fpga_data* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,int*,int) ;
 int FUNC_13 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static void FUNC_14(const struct firmware *VAR_13, void *VAR_14)
{
 struct spi_device *VAR_15 = (struct spi_device *)VAR_14;
 struct fpga_data *VAR_16 = FUNC_11(VAR_15);
 u8 *VAR_17;
 int VAR_18;
 u8 VAR_19[8];
 u8 VAR_20[8];
 int VAR_21 = 8;
 int VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 if (VAR_13 == ((void*)0)) {
  FUNC_3(&VAR_15->dev, "Cannot load firmware, aborting\n");
  return;
 }

 if (VAR_13->size == 0) {
  FUNC_3(&VAR_15->dev, "Error: Firmware size is 0!\n");
  return;
 }


 VAR_19[1] = 0x00;
 VAR_19[2] = 0x00;
 VAR_19[3] = 0x00;


 VAR_19[0] = VAR_3;
 VAR_18 = FUNC_13(VAR_15, VAR_19, 8, VAR_20, VAR_21);
 VAR_23 = FUNC_5(&VAR_20[4]);
 FUNC_2(&VAR_15->dev, "FPGA JTAG ID=%08x\n", VAR_23);

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_12); VAR_22++) {
  if (VAR_23 == VAR_12[VAR_22].jedec_id)
   break;
 }
 if (VAR_22 == FUNC_0(VAR_12)) {
  FUNC_3(&VAR_15->dev,
   "Error: No supported FPGA detected (JEDEC_ID=%08x)!\n",
   VAR_23);
  return;
 }

 FUNC_4(&VAR_15->dev, "FPGA %s detected\n", VAR_12[VAR_22].name);

 VAR_19[0] = VAR_4;
 VAR_18 = FUNC_13(VAR_15, VAR_19, 8, VAR_20, VAR_21);
 VAR_24 = FUNC_5(&VAR_20[4]);
 FUNC_2(&VAR_15->dev, "FPGA Status=%08x\n", VAR_24);

 VAR_17 = FUNC_7(VAR_13->size + 8, VAR_11);
 if (!VAR_17) {
  FUNC_3(&VAR_15->dev, "Error: Can't allocate memory!\n");
  return;
 }




 VAR_17[0] = VAR_8;
 VAR_17[1] = 0xff;
 VAR_17[2] = 0xff;
 VAR_17[3] = 0xff;
 FUNC_8(VAR_17 + 4, VAR_13->data, VAR_13->size);

 VAR_19[0] = VAR_5;
 VAR_18 = FUNC_12(VAR_15, VAR_19, 4);

 VAR_19[0] = VAR_7;
 VAR_18 = FUNC_12(VAR_15, VAR_19, 4);

 VAR_19[0] = VAR_2;
 VAR_18 = FUNC_12(VAR_15, VAR_19, 4);




 for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
  VAR_19[0] = VAR_4;
  VAR_18 = FUNC_13(VAR_15, VAR_19, 8, VAR_20, VAR_21);
  VAR_24 = FUNC_5(&VAR_20[4]);
  if (VAR_24 == VAR_9)
   break;

  FUNC_9(VAR_1);
 }

 if (VAR_22 == VAR_0) {
  FUNC_3(&VAR_15->dev,
   "Error: Timeout waiting for FPGA to clear (status=%08x)!\n",
   VAR_24);
  FUNC_6(VAR_17);
  return;
 }

 FUNC_4(&VAR_15->dev, "Configuring the FPGA...\n");
 VAR_18 = FUNC_12(VAR_15, VAR_17, VAR_13->size + 8);

 VAR_19[0] = VAR_6;
 VAR_18 = FUNC_12(VAR_15, VAR_19, 4);

 VAR_19[0] = VAR_4;
 VAR_18 = FUNC_13(VAR_15, VAR_19, 8, VAR_20, VAR_21);
 VAR_24 = FUNC_5(&VAR_20[4]);
 FUNC_2(&VAR_15->dev, "FPGA Status=%08x\n", VAR_24);


 if (VAR_24 & VAR_10)
  FUNC_4(&VAR_15->dev, "FPGA successfully configured!\n");
 else
  FUNC_4(&VAR_15->dev, "FPGA not configured (DONE not set)\n");




 FUNC_10(VAR_13);

 FUNC_6(VAR_17);

 FUNC_1(&VAR_16->fw_loaded);
}
