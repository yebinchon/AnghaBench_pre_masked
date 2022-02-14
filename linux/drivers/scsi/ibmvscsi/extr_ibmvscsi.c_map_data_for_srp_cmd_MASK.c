
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_event_struct {int dummy; } ;
struct srp_cmd {int dummy; } ;
struct scsi_cmnd {int sc_data_direction; int device; } ;
struct device {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,struct srp_event_struct*,struct srp_cmd*,struct device*) ;
 int FUNC_1 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_1,
    struct srp_event_struct *VAR_2,
    struct srp_cmd *VAR_3, struct device *VAR_4)
{
 switch (VAR_1->sc_data_direction) {
 case 130:
 case 128:
  break;
 case 129:
  return 1;
 case 131:
  FUNC_1(VAR_0, VAR_1->device,
       "Can't map DMA_BIDIRECTIONAL to read/write\n");
  return 0;
 default:
  FUNC_1(VAR_0, VAR_1->device,
       "Unknown data direction 0x%02x; can't map!\n",
       VAR_1->sc_data_direction);
  return 0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
