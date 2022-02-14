
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int asc; int ascq; int sense_key; } ;
struct scsi_device {struct rdac_dh_data* handler_data; } ;
struct rdac_dh_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int index; scalar_t__ array_name; } ;






 int FUNC_0 (int ,struct scsi_device*,char*,char*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_4,
        struct scsi_sense_hdr *VAR_5)
{
 int VAR_6 = VAR_2;
 struct rdac_dh_data *VAR_7 = VAR_4->handler_data;

 if (!FUNC_1(VAR_5))
  goto done;

 switch (VAR_5->sense_key) {
 case 129:
 case 132:
 case 128:
  VAR_6 = VAR_3;
  break;
 case 130:
  if (VAR_5->asc == 0x04 && VAR_5->ascq == 0x01)



   VAR_6 = VAR_3;
  break;
 case 131:
  if (VAR_5->asc == 0x91 && VAR_5->ascq == 0x36)



   VAR_6 = VAR_1;
  break;
 default:
  break;
 }

 FUNC_0(VAR_0, VAR_4, "array %s, ctlr %d, "
  "MODE_SELECT returned with sense %02x/%02x/%02x",
  (char *) VAR_7->ctlr->array_name, VAR_7->ctlr->index,
  VAR_5->sense_key, VAR_5->asc, VAR_5->ascq);

done:
 return VAR_6;
}
