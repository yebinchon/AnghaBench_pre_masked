
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int nents; int sgl; } ;
struct scsi_data_buffer {TYPE_1__ table; int length; } ;
struct scsi_cmnd {int sc_data_direction; struct scsi_data_buffer sdb; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_6, u32 VAR_7, u64 VAR_8,
       u32 VAR_9, bool VAR_10)
{
 int VAR_11;
 u64 VAR_12, VAR_13 = 0;
 struct scsi_data_buffer *VAR_14 = &VAR_6->sdb;
 enum dma_data_direction VAR_15;

 if (VAR_10) {
  VAR_15 = VAR_1;
  VAR_5 = 1;
 } else {
  VAR_15 = VAR_0;
 }

 if (!VAR_14->length)
  return 0;
 if (VAR_6->sc_data_direction != VAR_15)
  return -1;

 VAR_12 = FUNC_0(VAR_8, VAR_4);
 if (VAR_12 + VAR_9 > VAR_4)
  VAR_13 = VAR_12 + VAR_9 - VAR_4;

 VAR_11 = FUNC_1(VAR_14->table.sgl, VAR_14->table.nents,
     VAR_2 + (VAR_12 * VAR_3),
     (VAR_9 - VAR_13) * VAR_3, VAR_7, VAR_10);
 if (VAR_11 != (VAR_9 - VAR_13) * VAR_3)
  return VAR_11;

 if (VAR_13) {
  VAR_11 += FUNC_1(VAR_14->table.sgl, VAR_14->table.nents,
       VAR_2, VAR_13 * VAR_3,
       VAR_7 + ((VAR_9 - VAR_13) * VAR_3),
       VAR_10);
 }

 return VAR_11;
}
