
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dlm_len; int ilm_len; } ;
struct mt76_fw {scalar_t__ ilm; TYPE_1__ hdr; int ivb; } ;
struct mt7601u_dma_buf {int dummy; } ;
struct mt7601u_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mt7601u_dev*,struct mt7601u_dma_buf*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct mt7601u_dev*,int ,struct mt7601u_dma_buf*) ;
 int FUNC_8 (struct mt7601u_dev*,struct mt7601u_dma_buf*) ;
 int FUNC_9 (struct mt7601u_dev*,int ,int ,int,int ,void*,int) ;

__attribute__((used)) static int
FUNC_10(struct mt7601u_dev *VAR_7, const struct mt76_fw *VAR_8)
{
 struct mt7601u_dma_buf VAR_9;
 void *VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_3(VAR_8->ivb, sizeof(VAR_8->ivb), VAR_2);
 if (!VAR_10)
  return -VAR_0;
 if (FUNC_7(VAR_7, VAR_3, &VAR_9)) {
  VAR_14 = -VAR_0;
  goto error;
 }

 VAR_11 = FUNC_4(VAR_8->hdr.ilm_len) - sizeof(VAR_8->ivb);
 FUNC_0(VAR_7->dev, "loading FW - ILM %u + IVB %zu\n",
  VAR_11, sizeof(VAR_8->ivb));
 VAR_14 = FUNC_6(VAR_7, &VAR_9, VAR_8->ilm, VAR_11, sizeof(VAR_8->ivb));
 if (VAR_14)
  goto error;

 VAR_12 = FUNC_4(VAR_8->hdr.dlm_len);
 FUNC_0(VAR_7->dev, "loading FW - DLM %u\n", VAR_12);
 VAR_14 = FUNC_6(VAR_7, &VAR_9, VAR_8->ilm + VAR_11,
        VAR_12, VAR_4);
 if (VAR_14)
  goto error;

 VAR_14 = FUNC_9(VAR_7, VAR_5, VAR_6,
         0x12, 0, VAR_10, sizeof(VAR_8->ivb));
 if (VAR_14 < 0)
  goto error;
 VAR_14 = 0;

 for (VAR_13 = 100; VAR_13 && !FUNC_1(VAR_7); VAR_13--)
  FUNC_5(10);
 if (!VAR_13) {
  VAR_14 = -VAR_1;
  goto error;
 }

 FUNC_0(VAR_7->dev, "Firmware running!\n");
error:
 FUNC_2(VAR_10);
 FUNC_8(VAR_7, &VAR_9);

 return VAR_14;
}
