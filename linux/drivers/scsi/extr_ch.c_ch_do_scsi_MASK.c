
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int sense_key; } ;
struct TYPE_3__ {int unit_attention; int name; int device; } ;
typedef TYPE_1__ scsi_changer ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct scsi_sense_hdr*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned char*,int,void*,unsigned int,struct scsi_sense_hdr*,int,int ,int *) ;
 int FUNC_3 (int ,int ,struct scsi_sense_hdr*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(scsi_changer *VAR_7, unsigned char *VAR_8, int VAR_9,
    void *VAR_10, unsigned VAR_11,
    enum dma_data_direction VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15, VAR_16;
 struct scsi_sense_hdr VAR_17;

 VAR_15 = (VAR_8[0] == VAR_2)
  ? VAR_5 : VAR_6;

 retry:
 VAR_13 = 0;
 VAR_16 = FUNC_2(VAR_7->device, VAR_8, VAR_12, VAR_10,
      VAR_11, &VAR_17, VAR_15 * VAR_1,
      VAR_3, ((void*)0));

 if (FUNC_1(VAR_16) == VAR_0) {
  if (VAR_4)
   FUNC_3(VAR_7->device, VAR_7->name, &VAR_17);
  VAR_13 = FUNC_0(&VAR_17);

  switch(VAR_17.sense_key) {
  case 128:
   VAR_7->unit_attention = 1;
   if (VAR_14++ < 3)
    goto retry;
   break;
  }
 }
 return VAR_13;
}
