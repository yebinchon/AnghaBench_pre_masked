
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct sequencer_file_header {size_t csum; size_t major; size_t minor; size_t cseq_table_offset; size_t cseq_table_size; size_t lseq_table_offset; size_t lseq_table_size; size_t cseq_code_offset; size_t cseq_code_size; size_t lseq_code_offset; size_t lseq_code_size; void* lseq_idle_loop; void* cseq_idle_loop; void* mode2_task; int version; } ;
struct asd_ha_struct {TYPE_1__* pcidev; } ;
struct TYPE_5__ {scalar_t__* data; int size; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__* VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 void** VAR_8 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 scalar_t__* VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 void** VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (TYPE_2__**,int ,int *) ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static int FUNC_4(struct asd_ha_struct *VAR_15)
{
 int VAR_16, VAR_17;
 struct sequencer_file_header VAR_18;
 const struct sequencer_file_header *VAR_19;
 u32 VAR_20 = 0;
 u16 *VAR_21, *VAR_22;

 if (VAR_14)

  return 0;

 VAR_16 = FUNC_3(&VAR_14,
          VAR_3,
          &VAR_15->pcidev->dev);
 if (VAR_16)
  return VAR_16;

 VAR_19 = (const struct sequencer_file_header *)VAR_14->data;

 VAR_18.csum = FUNC_2(VAR_19->csum);
 VAR_18.major = FUNC_2(VAR_19->major);
 VAR_18.minor = FUNC_2(VAR_19->minor);
 VAR_18.cseq_table_offset = FUNC_2(VAR_19->cseq_table_offset);
 VAR_18.cseq_table_size = FUNC_2(VAR_19->cseq_table_size);
 VAR_18.lseq_table_offset = FUNC_2(VAR_19->lseq_table_offset);
 VAR_18.lseq_table_size = FUNC_2(VAR_19->lseq_table_size);
 VAR_18.cseq_code_offset = FUNC_2(VAR_19->cseq_code_offset);
 VAR_18.cseq_code_size = FUNC_2(VAR_19->cseq_code_size);
 VAR_18.lseq_code_offset = FUNC_2(VAR_19->lseq_code_offset);
 VAR_18.lseq_code_size = FUNC_2(VAR_19->lseq_code_size);
 VAR_18.mode2_task = FUNC_1(VAR_19->mode2_task);
 VAR_18.cseq_idle_loop = FUNC_1(VAR_19->cseq_idle_loop);
 VAR_18.lseq_idle_loop = FUNC_1(VAR_19->lseq_idle_loop);

 for (VAR_17 = sizeof(VAR_18.csum); VAR_17 < VAR_14->size; VAR_17++)
  VAR_20 += VAR_14->data[VAR_17];

 if (VAR_20 != VAR_18.csum) {
  FUNC_0("Firmware file checksum mismatch\n");
  return -VAR_1;
 }

 if (VAR_18.cseq_table_size != VAR_0 ||
     VAR_18.lseq_table_size != VAR_2) {
  FUNC_0("Firmware file table size mismatch\n");
  return -VAR_1;
 }

 FUNC_0("Found sequencer Firmware version %d.%d (%s)\n",
     VAR_18.major, VAR_18.minor, VAR_19->version);

 if (VAR_18.major != VAR_4) {
  FUNC_0("Firmware Major Version Mismatch;"
      "driver requires version %d.X",
      VAR_4);
  return -VAR_1;
 }

 VAR_21 = (u16 *)&VAR_14->data[VAR_18.cseq_table_offset];
 VAR_22 = (u16 *)&VAR_14->data[VAR_18.lseq_table_offset];
 VAR_13 = VAR_18.mode2_task;
 VAR_7 = VAR_18.cseq_idle_loop;
 VAR_11 = VAR_18.lseq_idle_loop;

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
  VAR_8[VAR_17] = FUNC_1(VAR_21[VAR_17]);

 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++)
  VAR_12[VAR_17] = FUNC_1(VAR_22[VAR_17]);

 VAR_5 = &VAR_14->data[VAR_18.cseq_code_offset];
 VAR_6 = VAR_18.cseq_code_size;
 VAR_9 = &VAR_14->data[VAR_18.lseq_code_offset];
 VAR_10 = VAR_18.lseq_code_size;

 return 0;
}
