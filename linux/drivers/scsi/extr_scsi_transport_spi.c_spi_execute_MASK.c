
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*,void const*,int,void*,unsigned int,unsigned char*,struct scsi_sense_hdr*,int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_8, const void *VAR_9,
         enum dma_data_direction VAR_10,
         void *VAR_11, unsigned VAR_12,
         struct scsi_sense_hdr *VAR_13)
{
 int VAR_14, VAR_15;
 unsigned char VAR_16[VAR_6];
 struct scsi_sense_hdr VAR_17;

 if (!VAR_13)
  VAR_13 = &VAR_17;

 for(VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_15 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_16,
          VAR_13, VAR_2, 1,
          VAR_3 |
          VAR_5 |
          VAR_4,
          0, ((void*)0));
  if (FUNC_0(VAR_15) != VAR_0 ||
      VAR_13->sense_key != VAR_7)
   break;
 }
 return VAR_15;
}
