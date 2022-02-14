
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {struct media_device* mdev; int name; } ;
struct media_device {unsigned int hw_revision; int dev; int bus_info; int model; } ;
struct camif_dev {int dev; TYPE_1__* variant; struct v4l2_device v4l2_dev; struct media_device media_dev; } ;
struct TYPE_2__ {unsigned int ip_revision; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct media_device*) ;
 int FUNC_1 (struct media_device*,int ,int) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct v4l2_device*) ;

__attribute__((used)) static int FUNC_5(struct camif_dev *VAR_1)
{
 struct media_device *VAR_2 = &VAR_1->media_dev;
 struct v4l2_device *VAR_3 = &VAR_1->v4l2_dev;
 unsigned int VAR_4 = VAR_1->variant->ip_revision;
 int VAR_5;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_2(VAR_2->model, sizeof(VAR_2->model), "SAMSUNG S3C%s CAMIF",
   VAR_4 == VAR_0 ? "6410" : "244X");
 FUNC_3(VAR_2->bus_info, "platform", sizeof(VAR_2->bus_info));
 VAR_2->hw_revision = VAR_4;

 VAR_2->dev = VAR_1->dev;

 FUNC_3(VAR_3->name, "s3c-camif", sizeof(VAR_3->name));
 VAR_3->mdev = VAR_2;

 FUNC_0(VAR_2);

 VAR_5 = FUNC_4(VAR_1->dev, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_5;
}
