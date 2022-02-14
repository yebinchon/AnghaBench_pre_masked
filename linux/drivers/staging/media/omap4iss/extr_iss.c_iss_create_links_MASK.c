
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int entity; } ;
struct TYPE_11__ {TYPE_9__ subdev; } ;
struct TYPE_18__ {int entity; } ;
struct TYPE_19__ {TYPE_7__ subdev; } ;
struct TYPE_16__ {int entity; } ;
struct TYPE_17__ {TYPE_5__ subdev; } ;
struct TYPE_14__ {int entity; } ;
struct TYPE_15__ {TYPE_3__ subdev; } ;
struct TYPE_12__ {int entity; } ;
struct TYPE_13__ {TYPE_1__ subdev; } ;
struct iss_device {TYPE_10__ resizer; TYPE_8__ ipipe; TYPE_6__ ipipeif; TYPE_4__ csi2b; TYPE_2__ csi2a; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int *,int ,int ) ;
 int FUNC_2 (struct iss_device*) ;
 int FUNC_3 (struct iss_device*) ;
 int FUNC_4 (struct iss_device*) ;

__attribute__((used)) static int FUNC_5(struct iss_device *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6->dev, "CSI2 pads links creation failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6->dev, "ISP IPIPEIF pads links creation failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6->dev, "ISP RESIZER pads links creation failed\n");
  return VAR_7;
 }


 VAR_7 = FUNC_1(
   &VAR_6->csi2a.subdev.entity, VAR_0,
   &VAR_6->ipipeif.subdev.entity, VAR_1, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(
   &VAR_6->csi2b.subdev.entity, VAR_0,
   &VAR_6->ipipeif.subdev.entity, VAR_1, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(
   &VAR_6->ipipeif.subdev.entity, VAR_2,
   &VAR_6->resizer.subdev.entity, VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(
   &VAR_6->ipipeif.subdev.entity, VAR_2,
   &VAR_6->ipipe.subdev.entity, VAR_3, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(
   &VAR_6->ipipe.subdev.entity, VAR_4,
   &VAR_6->resizer.subdev.entity, VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
