
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct vscsifrnt_info {struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct vscsifrnt_info* FUNC_1 (int *) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct vscsifrnt_info*) ;
 int FUNC_4 (struct vscsifrnt_info*) ;
 int FUNC_5 (struct vscsifrnt_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_1)
{
 struct vscsifrnt_info *VAR_2 = FUNC_1(&VAR_1->dev);
 struct Scsi_Host *VAR_3 = VAR_2->host;
 int VAR_4;

 FUNC_6(VAR_3->host_lock);


 FUNC_3(VAR_2);

 FUNC_7(VAR_3->host_lock);


 FUNC_4(VAR_2);
 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_1->dev, "fail to resume %d\n", VAR_4);
  FUNC_2(VAR_3);
  return VAR_4;
 }

 FUNC_8(VAR_1, VAR_0);

 return 0;
}
