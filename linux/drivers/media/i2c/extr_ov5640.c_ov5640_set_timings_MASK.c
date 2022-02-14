
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov5640_mode_info {int vtot; int htot; int vact; int hact; } ;
struct TYPE_2__ {scalar_t__ code; } ;
struct ov5640_dev {TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ov5640_dev*,struct ov5640_mode_info const*) ;
 int FUNC_1 (struct ov5640_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_5,
         const struct ov5640_mode_info *VAR_6)
{
 int VAR_7;

 if (VAR_5->fmt.code == VAR_0) {
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_6->hact);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6->vact);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_6->htot);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_5, VAR_4, VAR_6->vtot);
}
