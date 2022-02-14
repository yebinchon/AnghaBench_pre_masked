
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ispif_line {int interface; int csid_id; int vfe_id; TYPE_1__* fmt; int * pads; struct ispif_device* ispif; } ;
struct ispif_device {int config_lock; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_3__ {int code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ispif_device*,int,int,int) ;
 int FUNC_1 (struct ispif_device*,int ,int,int,int,int) ;
 int FUNC_2 (struct ispif_device*,int,int,int,int) ;
 int FUNC_3 (struct ispif_device*,int,int,int,int) ;
 int FUNC_4 (struct ispif_device*,int,int,int,int) ;
 int FUNC_5 (struct ispif_device*,int ,int,int,int) ;
 int FUNC_6 (struct ispif_device*,int,int) ;
 int FUNC_7 (struct ispif_device*,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct ispif_device*) ;
 struct ispif_line* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_5, int VAR_6)
{
 struct ispif_line *VAR_7 = FUNC_12(VAR_5);
 struct ispif_device *VAR_8 = VAR_7->ispif;
 enum ispif_intf VAR_9 = VAR_7->interface;
 u8 VAR_10 = VAR_7->csid_id;
 u8 VAR_11 = VAR_7->vfe_id;
 u8 VAR_12 = 0;
 u8 VAR_13 = VAR_12 * 4;
 int VAR_14;

 if (VAR_6) {
  if (!FUNC_8(&VAR_7->pads[VAR_4]))
   return -VAR_3;



  FUNC_9(&VAR_8->config_lock);
  FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, 1);

  VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_11);
  if (VAR_14 < 0) {
   FUNC_10(&VAR_8->config_lock);
   return VAR_14;
  }

  FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, 1);
  FUNC_2(VAR_8, VAR_9, VAR_13, VAR_11, 1);
  FUNC_0(VAR_8, VAR_9, VAR_11, 1);
  if (FUNC_11(VAR_8)->version == VAR_0)
   FUNC_1(VAR_8,
       VAR_7->fmt[VAR_4].code,
       VAR_9, VAR_13, VAR_11, 1);
  FUNC_5(VAR_8, VAR_2,
       VAR_9, VAR_11, VAR_12);
 } else {
  FUNC_9(&VAR_8->config_lock);
  FUNC_5(VAR_8, VAR_1,
       VAR_9, VAR_11, VAR_12);
  FUNC_10(&VAR_8->config_lock);

  VAR_14 = FUNC_7(VAR_8, VAR_9, VAR_11);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_9(&VAR_8->config_lock);
  if (FUNC_11(VAR_8)->version == VAR_0)
   FUNC_1(VAR_8,
       VAR_7->fmt[VAR_4].code,
       VAR_9, VAR_13, VAR_11, 0);
  FUNC_0(VAR_8, VAR_9, VAR_11, 0);
  FUNC_2(VAR_8, VAR_9, VAR_13, VAR_11, 0);
  FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, 0);
  FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, 0);
 }

 FUNC_10(&VAR_8->config_lock);

 return 0;
}
