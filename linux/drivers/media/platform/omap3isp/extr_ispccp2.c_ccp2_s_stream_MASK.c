
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; int entity; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int src_ofst; int vsize_count; int hsize_count; } ;
struct isp_ccp2_device {int state; int phy; int input; int stopping; int wait; TYPE_1__ mem_cfg; struct v4l2_mbus_framefmt* formats; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct isp_ccp2_device*) ;
 int FUNC_2 (struct isp_ccp2_device*,int) ;
 int FUNC_3 (struct isp_ccp2_device*,TYPE_1__*) ;
 int FUNC_4 (struct isp_ccp2_device*,int) ;
 int FUNC_5 (struct isp_ccp2_device*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (struct isp_device*,int ) ;
 int FUNC_11 (struct isp_device*,int ) ;
 struct device* FUNC_12 (struct isp_ccp2_device*) ;
 struct isp_device* FUNC_13 (struct isp_ccp2_device*) ;
 struct isp_ccp2_device* FUNC_14 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_15(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct isp_ccp2_device *VAR_6 = FUNC_14(VAR_4);
 struct isp_device *VAR_7 = FUNC_13(VAR_6);
 struct device *VAR_8 = FUNC_12(VAR_6);
 int VAR_9;

 if (VAR_6->state == 128) {
  if (VAR_5 == 128)
   return 0;
  FUNC_0(&VAR_6->stopping, 0);
 }

 switch (VAR_5) {
 case 130:
  if (VAR_6->phy) {
   VAR_9 = FUNC_7(VAR_6->phy, &VAR_4->entity);
   if (VAR_9 < 0)
    return VAR_9;
  }

  FUNC_1(VAR_6);
  FUNC_5(VAR_6);


  VAR_9 = FUNC_2(VAR_6, 1);
  if (VAR_9 < 0) {
   if (VAR_6->phy)
    FUNC_8(VAR_6->phy);
   return VAR_9;
  }
  break;

 case 129:
  if (VAR_6->state != 129) {
   struct v4l2_mbus_framefmt *VAR_10;

   VAR_10 = &VAR_6->formats[VAR_2];

   VAR_6->mem_cfg.hsize_count = VAR_10->width;
   VAR_6->mem_cfg.vsize_count = VAR_10->height;
   VAR_6->mem_cfg.src_ofst = 0;

   FUNC_3(VAR_6, &VAR_6->mem_cfg);
   FUNC_11(VAR_7, VAR_3);
   FUNC_5(VAR_6);
  }
  FUNC_4(VAR_6, 1);
  break;

 case 128:
  if (FUNC_9(&VAR_4->entity, &VAR_6->wait,
           &VAR_6->stopping))
   FUNC_6(VAR_8, "%s: module stop timeout.\n", VAR_4->name);
  if (VAR_6->input == VAR_0) {
   FUNC_4(VAR_6, 0);
   FUNC_10(VAR_7, VAR_3);
  } else if (VAR_6->input == VAR_1) {

   FUNC_2(VAR_6, 0);
   if (VAR_6->phy)
    FUNC_8(VAR_6->phy);
  }
  break;
 }

 VAR_6->state = VAR_5;
 return 0;
}
