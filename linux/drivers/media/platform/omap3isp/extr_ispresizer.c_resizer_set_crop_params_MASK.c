
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int width; } ;
struct TYPE_4__ {int top; int left; int height; int width; } ;
struct TYPE_5__ {TYPE_1__ active; } ;
struct TYPE_6__ {scalar_t__ horz; } ;
struct isp_res_device {scalar_t__ input; int crop_offset; TYPE_2__ crop; scalar_t__ addr_base; TYPE_3__ ratio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_res_device*,scalar_t__) ;
 int FUNC_1 (struct isp_res_device*) ;
 int FUNC_2 (struct isp_res_device*,int ) ;
 int FUNC_3 (struct isp_res_device*,int ) ;
 int FUNC_4 (struct isp_res_device*,int ,int ) ;
 int FUNC_5 (struct isp_res_device*,TYPE_3__*) ;
 int FUNC_6 (struct isp_res_device*,int,int) ;

__attribute__((used)) static void FUNC_7(struct isp_res_device *VAR_4,
        const struct v4l2_mbus_framefmt *VAR_5,
        const struct v4l2_mbus_framefmt *VAR_6)
{
 FUNC_5(VAR_4, &VAR_4->ratio);


 if (VAR_4->ratio.horz >= VAR_1)
  FUNC_2(VAR_4, VAR_3);
 else
  FUNC_2(VAR_4, VAR_2);

 FUNC_1(VAR_4);

 if (VAR_4->input == VAR_0) {

  VAR_4->crop_offset = (VAR_4->crop.active.top * VAR_5->width +
        VAR_4->crop.active.left) * 2;




  FUNC_6(VAR_4, (VAR_4->crop_offset / 2) & 0xf, 0);





  FUNC_0(VAR_4,
    VAR_4->addr_base + (VAR_4->crop_offset & ~0x1f));
 } else {





  FUNC_6(VAR_4, VAR_4->crop.active.left * 2,
      VAR_4->crop.active.top);

  FUNC_0(VAR_4, 0);
  FUNC_3(VAR_4, 0);
 }


 FUNC_4(VAR_4, VAR_4->crop.active.width,
          VAR_4->crop.active.height);
}
