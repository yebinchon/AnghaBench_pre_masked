
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int code; int width; } ;
struct TYPE_2__ {int lock; int active; } ;
struct isp_prev_device {scalar_t__ input; int output; TYPE_1__ params; struct v4l2_mbus_framefmt* formats; } ;
struct isp_format_info {int bpp; } ;
struct isp_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct isp_device*,int ,int ,int ) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 struct isp_format_info* FUNC_3 (int ) ;
 int FUNC_4 (struct isp_prev_device*) ;
 int FUNC_5 (struct isp_prev_device*,int ) ;
 int FUNC_6 (struct isp_prev_device*,int) ;
 int FUNC_7 (struct isp_prev_device*,struct isp_format_info const*) ;
 int FUNC_8 (struct isp_prev_device*,int ) ;
 int FUNC_9 (struct isp_prev_device*,int) ;
 int FUNC_10 (struct isp_prev_device*,int ) ;
 int FUNC_11 (struct isp_prev_device*,int ,int) ;
 int FUNC_12 (struct isp_prev_device*,int ,int) ;
 int FUNC_13 (struct isp_prev_device*,int ,int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 struct isp_device* FUNC_16 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_17(struct isp_prev_device *VAR_9)
{
 struct isp_device *VAR_10 = FUNC_16(VAR_9);
 const struct isp_format_info *VAR_11;
 struct v4l2_mbus_framefmt *VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 FUNC_14(&VAR_9->params.lock, VAR_13);

 VAR_14 = FUNC_11(VAR_9, 0, 0);
 VAR_15 = VAR_9->params.active;
 FUNC_15(&VAR_9->params.lock, VAR_13);


 VAR_12 = &VAR_9->formats[VAR_7];
 VAR_11 = FUNC_3(VAR_12->code);

 FUNC_4(VAR_9);

 FUNC_7(VAR_9, VAR_11);
 FUNC_8(VAR_9, VAR_15);

 if (VAR_9->input == VAR_4)
  FUNC_6(VAR_9, 0);
 else
  FUNC_6(VAR_9, FUNC_0(VAR_12->width, 0x20) *
         VAR_11->bpp);

 FUNC_13(VAR_9, VAR_14, VAR_15);


 VAR_12 = &VAR_9->formats[VAR_8];

 if (VAR_9->output & VAR_5)
  FUNC_2(VAR_10, VAR_3, VAR_0,
       VAR_2);
 else
  FUNC_1(VAR_10, VAR_3, VAR_0,
       VAR_2);

 if (VAR_9->output & VAR_6)
  FUNC_2(VAR_10, VAR_3, VAR_0,
       VAR_1);
 else
  FUNC_1(VAR_10, VAR_3, VAR_0,
       VAR_1);

 if (VAR_9->output & VAR_5)
  FUNC_9(VAR_9,
    FUNC_0(VAR_12->width, 0x10) * 2);

 FUNC_5(VAR_9, 0);
 FUNC_10(VAR_9, VAR_12->code);

 FUNC_14(&VAR_9->params.lock, VAR_13);
 FUNC_12(VAR_9, VAR_14, 0);
 FUNC_15(&VAR_9->params.lock, VAR_13);
}
