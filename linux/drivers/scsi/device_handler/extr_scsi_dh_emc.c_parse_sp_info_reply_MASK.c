
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int access_state; } ;
struct clariion_dh_data {int* buffer; int default_sp; int lun_state; int current_sp; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_10,
          struct clariion_dh_data *VAR_11)
{
 int VAR_12 = VAR_9;


 if (VAR_11->buffer[48] != 0) {
  FUNC_0(VAR_2, VAR_10, "%s: Detected in-progress "
       "ucode upgrade NDU operation while finding "
       "current active SP.", VAR_1);
  VAR_12 = VAR_7;
  goto out;
 }
 if (VAR_11->buffer[4] > 2) {

  FUNC_0(VAR_2, VAR_10,
       "%s: invalid VPD page 0xC0 format\n",
       VAR_1);
  VAR_12 = VAR_8;
  goto out;
 }
 switch (VAR_11->buffer[28] & 0x0f) {
 case 6:
  FUNC_0(VAR_2, VAR_10,
       "%s: ALUA failover mode detected\n",
       VAR_1);
  break;
 case 4:

  break;
 default:
  FUNC_0(VAR_3, VAR_10,
       "%s: Invalid failover mode %d\n",
       VAR_1, VAR_11->buffer[28] & 0x0f);
  VAR_12 = VAR_8;
  goto out;
 }

 VAR_11->default_sp = VAR_11->buffer[5];
 VAR_11->lun_state = VAR_11->buffer[4];
 VAR_11->current_sp = VAR_11->buffer[8];
 VAR_11->port = VAR_11->buffer[7];
 if (VAR_11->lun_state == VAR_0)
  VAR_10->access_state = VAR_4;
 else
  VAR_10->access_state = VAR_6;
 if (VAR_11->default_sp == VAR_11->current_sp)
  VAR_10->access_state |= VAR_5;
out:
 return VAR_12;
}
