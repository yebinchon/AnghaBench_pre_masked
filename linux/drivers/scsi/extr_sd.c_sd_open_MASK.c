
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int openers; scalar_t__ write_prot; int media_present; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ removable; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct scsi_disk* FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_disk*) ;
 int FUNC_7 (struct scsi_device*,int ) ;
 int FUNC_8 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static int FUNC_9(struct block_device *VAR_7, fmode_t VAR_8)
{
 struct scsi_disk *VAR_9 = FUNC_5(VAR_7->bd_disk);
 struct scsi_device *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_1;

 FUNC_0(3, FUNC_8(VAR_5, VAR_9, "sd_open\n"));

 VAR_10 = VAR_9->device;





 VAR_11 = -VAR_1;
 if (!FUNC_3(VAR_10))
  goto error_out;

 if (VAR_10->removable || VAR_9->write_prot)
  FUNC_2(VAR_7);




 VAR_11 = -VAR_0;
 if (VAR_10->removable && !VAR_9->media_present && !(VAR_8 & VAR_3))
  goto error_out;





 VAR_11 = -VAR_2;
 if (VAR_9->write_prot && (VAR_8 & VAR_4))
  goto error_out;







 VAR_11 = -VAR_1;
 if (!FUNC_4(VAR_10))
  goto error_out;

 if ((FUNC_1(&VAR_9->openers) == 1) && VAR_10->removable) {
  if (FUNC_3(VAR_10))
   FUNC_7(VAR_10, VAR_6);
 }

 return 0;

error_out:
 FUNC_6(VAR_9);
 return VAR_11;
}
