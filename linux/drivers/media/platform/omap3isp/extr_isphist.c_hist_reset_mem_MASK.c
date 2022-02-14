
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_hist_config {int num_acc_frames; } ;
struct ispstat {int wait_acc_frames; struct omap3isp_hist_config* priv; struct isp_device* isp; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 int FUNC_3 (struct isp_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ispstat *VAR_6)
{
 struct isp_device *VAR_7 = VAR_6->isp;
 struct omap3isp_hist_config *VAR_8 = VAR_6->priv;
 unsigned int VAR_9;

 FUNC_3(VAR_7, 0, VAR_5, VAR_0);





 FUNC_2(VAR_7, VAR_5, VAR_1, VAR_2);





 for (VAR_9 = VAR_4 / 4; VAR_9 > 0; VAR_9--) {
  FUNC_1(VAR_7, VAR_5, VAR_3);
  FUNC_1(VAR_7, VAR_5, VAR_3);
  FUNC_1(VAR_7, VAR_5, VAR_3);
  FUNC_1(VAR_7, VAR_5, VAR_3);
 }
 FUNC_0(VAR_7, VAR_5, VAR_1, VAR_2);

 VAR_6->wait_acc_frames = VAR_8->num_acc_frames;
}
