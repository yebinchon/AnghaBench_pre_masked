
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_device*,int,int ,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_7)
{
 struct scsi_sense_hdr VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_1 * VAR_2,
          VAR_0, &VAR_8);
 if (VAR_8.sense_key == VAR_3 &&
     VAR_8.asc == 0x04 && VAR_8.ascq == 0x0a)
  return VAR_6;
 else if (VAR_9)
  return VAR_4;
 else
  return VAR_5;
}
