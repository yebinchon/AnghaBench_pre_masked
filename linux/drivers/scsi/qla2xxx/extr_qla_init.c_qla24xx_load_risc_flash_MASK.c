
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong ;
typedef int uint32_t ;
typedef int uint ;
struct req_que {scalar_t__ ring; int dma; } ;
struct qla_hw_data {int fw_transfer_size; struct fwdt* fwdt; struct req_que** req_q_map; } ;
struct fwdt {int* template; int length; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_1__*,int,char*,int,...) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int*,int,int) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*,int ,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int*) ;
 int* FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(scsi_qla_host_t *VAR_7, uint32_t *VAR_8,
    uint32_t VAR_9)
{
 int VAR_10;
 uint VAR_11, VAR_12, VAR_13;
 ulong VAR_14;
 uint VAR_15;
 ulong VAR_16;
 uint32_t *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20 = 0;
 struct qla_hw_data *VAR_21 = VAR_7->hw;
 struct req_que *VAR_22 = VAR_21->req_q_map[0];
 struct fwdt *VAR_23 = VAR_21->fwdt;

 FUNC_3(VAR_4, VAR_7, 0x008b,
     "FW: Loading firmware from flash (%x).\n", VAR_9);

 VAR_17 = (void *)VAR_22->ring;
 FUNC_5(VAR_7, VAR_17, VAR_9, 8);
 if (FUNC_6(VAR_17)) {
  FUNC_4(VAR_5, VAR_7, 0x008c,
      "Unable to verify the integrity of flash firmware "
      "image.\n");
  FUNC_4(VAR_5, VAR_7, 0x008d,
      "Firmware data: %08x %08x %08x %08x.\n",
      VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);

  return VAR_2;
 }

 VAR_17 = (void *)VAR_22->ring;
 *VAR_8 = 0;
 VAR_12 = VAR_1;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  FUNC_3(VAR_4, VAR_7, 0x008d,
      "-> Loading segment %u...\n", VAR_15);
  FUNC_5(VAR_7, VAR_17, VAR_9, 10);
  VAR_18 = FUNC_2(VAR_17[2]);
  VAR_19 = FUNC_2(VAR_17[3]);
  if (!*VAR_8) {
   *VAR_8 = VAR_18;
   VAR_20 = FUNC_2(VAR_17[9]);
  }

  VAR_16 = VAR_21->fw_transfer_size >> 2;
  for (VAR_13 = 0; VAR_19; VAR_13++) {
   if (VAR_16 > VAR_19)
    VAR_16 = VAR_19;

   FUNC_3(VAR_4, VAR_7, 0x008e,
       "-> Loading fragment %u: %#x <- %#x (%#lx dwords)...\n",
       VAR_13, VAR_18, VAR_9, VAR_16);
   FUNC_5(VAR_7, VAR_17, VAR_9, VAR_16);
   for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++)
    VAR_17[VAR_14] = FUNC_10(VAR_17[VAR_14]);

   VAR_10 = FUNC_9(VAR_7, VAR_22->dma, VAR_18, VAR_16);
   if (VAR_10) {
    FUNC_4(VAR_5, VAR_7, 0x008f,
        "-> Failed load firmware fragment %u.\n",
        VAR_13);
    return VAR_2;
   }

   VAR_9 += VAR_16;
   VAR_18 += VAR_16;
   VAR_19 -= VAR_16;
  }
 }

 if (!FUNC_0(VAR_21) && !FUNC_1(VAR_21))
  return VAR_3;

 VAR_11 = (VAR_20 & VAR_0) ? 2 : 1;
 FUNC_3(VAR_4, VAR_7, 0x0160, "-> templates = %u\n", VAR_11);
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++, VAR_23++) {
  if (VAR_23->template)
   FUNC_11(VAR_23->template);
  VAR_23->template = ((void*)0);
  VAR_23->length = 0;

  VAR_17 = (void *)VAR_22->ring;
  FUNC_5(VAR_7, VAR_17, VAR_9, 7);
  VAR_19 = FUNC_2(VAR_17[2]);
  FUNC_3(VAR_4, VAR_7, 0x0161,
      "-> fwdt%u template array at %#x (%#x dwords)\n",
      VAR_15, VAR_9, VAR_19);
  if (!VAR_19 || !~VAR_19) {
   FUNC_3(VAR_4, VAR_7, 0x0162,
       "-> fwdt%u failed to read array\n", VAR_15);
   goto failed;
  }


  VAR_9 += 7;
  VAR_19 -= 8;

  FUNC_3(VAR_4, VAR_7, 0x0163,
      "-> fwdt%u template allocate template %#x words...\n",
      VAR_15, VAR_19);
  VAR_23->template = FUNC_12(VAR_19 * sizeof(*VAR_17));
  if (!VAR_23->template) {
   FUNC_4(VAR_6, VAR_7, 0x0164,
       "-> fwdt%u failed allocate template.\n", VAR_15);
   goto failed;
  }

  VAR_17 = VAR_23->template;
  FUNC_5(VAR_7, VAR_17, VAR_9, VAR_19);

  if (!FUNC_8(VAR_17)) {
   FUNC_4(VAR_6, VAR_7, 0x0165,
       "-> fwdt%u failed template validate\n", VAR_15);
   goto failed;
  }

  VAR_16 = FUNC_7(VAR_17);
  FUNC_3(VAR_4, VAR_7, 0x0166,
      "-> fwdt%u template size %#lx bytes (%#lx words)\n",
      VAR_15, VAR_16, VAR_16 / sizeof(*VAR_17));
  if (VAR_16 > VAR_19 * sizeof(*VAR_17)) {
   FUNC_4(VAR_6, VAR_7, 0x0167,
       "-> fwdt%u template exceeds array (%-lu bytes)\n",
       VAR_15, VAR_16 - VAR_19 * sizeof(*VAR_17));
   goto failed;
  }

  VAR_23->length = VAR_16;
  FUNC_3(VAR_4, VAR_7, 0x0168,
      "-> fwdt%u loaded template ok\n", VAR_15);

  VAR_9 += VAR_19 + 1;
 }

 return VAR_3;

failed:
 if (VAR_23->template)
  FUNC_11(VAR_23->template);
 VAR_23->template = ((void*)0);
 VAR_23->length = 0;

 return VAR_3;
}
