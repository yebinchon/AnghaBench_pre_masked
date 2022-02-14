
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dev; int device; } ;
struct gendisk {scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct scsi_disk* FUNC_4 (struct gendisk*) ;
 int VAR_0 ;

__attribute__((used)) static struct scsi_disk *FUNC_5(struct gendisk *VAR_1)
{
 struct scsi_disk *VAR_2 = ((void*)0);

 FUNC_1(&VAR_0);

 if (VAR_1->private_data) {
  VAR_2 = FUNC_4(VAR_1);
  if (FUNC_3(VAR_2->device) == 0)
   FUNC_0(&VAR_2->dev);
  else
   VAR_2 = ((void*)0);
 }
 FUNC_2(&VAR_0);
 return VAR_2;
}
