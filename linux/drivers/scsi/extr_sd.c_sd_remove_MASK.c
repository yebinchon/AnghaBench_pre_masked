
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dev; int opal_dev; int disk; int device; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 struct scsi_disk* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_4)
{
 struct scsi_disk *VAR_5;
 dev_t VAR_6;

 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = FUNC_6(VAR_5->disk);
 FUNC_11(VAR_5->device);

 FUNC_0(&VAR_1);
 FUNC_5(&VAR_5->dev);
 FUNC_2(VAR_5->disk);
 FUNC_12(VAR_4);

 FUNC_7(VAR_5->opal_dev);

 FUNC_1(VAR_6, VAR_0, ((void*)0),
       VAR_2, ((void*)0), ((void*)0));

 FUNC_8(&VAR_3);
 FUNC_4(VAR_4, ((void*)0));
 FUNC_10(&VAR_5->dev);
 FUNC_9(&VAR_3);

 return 0;
}
