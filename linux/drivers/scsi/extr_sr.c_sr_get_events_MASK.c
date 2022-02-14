
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_device {int dummy; } ;
struct media_event_desc {int media_event_code; } ;
struct event_header {int notification_class; scalar_t__ nea; int data_len; } ;
typedef int buf ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_device*,int*,int ,int*,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct scsi_sense_hdr*) ;

__attribute__((used)) static unsigned int FUNC_3(struct scsi_device *VAR_7)
{
 u8 VAR_8[8];
 u8 VAR_9[] = { VAR_3,
       1,
       0, 0,
       1 << 4,
       0, 0,
       0, sizeof(VAR_8),
       0,
 };
 struct event_header *VAR_10 = (void *)VAR_8;
 struct media_event_desc *VAR_11 = (void *)(VAR_8 + 4);
 struct scsi_sense_hdr VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_7, VAR_9, VAR_2, VAR_8, sizeof(VAR_8),
      &VAR_12, VAR_5, VAR_4, ((void*)0));
 if (FUNC_2(&VAR_12) && VAR_12.sense_key == VAR_6)
  return VAR_1;

 if (VAR_13 || FUNC_0(VAR_10->data_len) < sizeof(*VAR_11))
  return 0;

 if (VAR_10->nea || VAR_10->notification_class != 0x4)
  return 0;

 if (VAR_11->media_event_code == 1)
  return VAR_0;
 else if (VAR_11->media_event_code == 2)
  return VAR_1;
 return 0;
}
