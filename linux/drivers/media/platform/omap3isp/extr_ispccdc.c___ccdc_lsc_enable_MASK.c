
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct isp_ccdc_device {TYPE_1__ lsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct isp_ccdc_device*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct isp_ccdc_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct isp_device*,int ,int ,int ) ;
 int FUNC_4 (struct isp_device*,int ,int ,int ,int ) ;
 int FUNC_5 (struct isp_device*,int ) ;
 int FUNC_6 (struct isp_ccdc_device*) ;
 struct isp_device* FUNC_7 (struct isp_ccdc_device*) ;

__attribute__((used)) static int FUNC_8(struct isp_ccdc_device *VAR_15, int VAR_16)
{
 struct isp_device *VAR_17 = FUNC_7(VAR_15);
 const struct v4l2_mbus_framefmt *VAR_18 =
  FUNC_0(VAR_15, ((void*)0), VAR_0,
      VAR_14);

 if ((VAR_18->code != VAR_10) &&
     (VAR_18->code != VAR_11) &&
     (VAR_18->code != VAR_8) &&
     (VAR_18->code != VAR_9))
  return -VAR_1;

 if (VAR_16)
  FUNC_5(VAR_17, VAR_13);

 FUNC_4(VAR_17, VAR_12, VAR_3,
   VAR_4, VAR_16 ? VAR_4 : 0);

 if (VAR_16) {
  if (FUNC_1(VAR_15) < 0) {
   FUNC_3(VAR_17, VAR_12,
        VAR_3, VAR_4);
   VAR_15->lsc.state = VAR_6;
   FUNC_2(FUNC_6(VAR_15), "LSC prefetch timeout\n");
   return -VAR_2;
  }
  VAR_15->lsc.state = VAR_5;
 } else {
  VAR_15->lsc.state = VAR_7;
 }

 return 0;
}
