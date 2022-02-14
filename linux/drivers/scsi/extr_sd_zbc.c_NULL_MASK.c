
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int device; } ;
struct gendisk {int dummy; } ;
struct blk_zone {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 struct scsi_disk* FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct scsi_disk*) ;
 unsigned char* FUNC_5 (struct scsi_disk*,unsigned int,size_t*) ;
 int FUNC_6 (struct scsi_disk*,unsigned char*,size_t,int ,int) ;
 int FUNC_7 (struct scsi_disk*,unsigned char*,struct blk_zone*) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct gendisk *VAR_2, sector_t VAR_3,
   struct blk_zone *VAR_4, unsigned int *VAR_5)
{
 struct scsi_disk *VAR_6 = FUNC_3(VAR_2);
 unsigned int VAR_7, VAR_8 = *VAR_5;
 unsigned char *VAR_9;
 size_t VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;

 if (!FUNC_4(VAR_6))

  return -VAR_1;

 VAR_9 = FUNC_5(VAR_6, VAR_8, &VAR_10);
 if (!VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10,
   FUNC_8(VAR_6->device, VAR_3), 1);
 if (VAR_12)
  goto out;

 VAR_8 = FUNC_2(VAR_8, FUNC_0(&VAR_9[0]) / 64);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_11 += 64;
  FUNC_7(VAR_6, VAR_9 + VAR_11, VAR_4);
  VAR_4++;
 }

 *VAR_5 = VAR_8;

out:
 FUNC_1(VAR_9);

 return VAR_12;
}
