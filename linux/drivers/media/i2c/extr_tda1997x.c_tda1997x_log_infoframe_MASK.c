
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {TYPE_1__* client; } ;
typedef int buffer ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,union hdmi_infoframe*) ;
 int FUNC_1 (union hdmi_infoframe*,int *,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int,int *) ;
 struct tda1997x_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_5 (TYPE_1__*,char*,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct tda1997x_state *VAR_4 = FUNC_3(VAR_2);
 union hdmi_infoframe VAR_5;
 u8 VAR_6[40];
 int VAR_7, VAR_8;


 VAR_7 = FUNC_2(VAR_2, VAR_3, sizeof(VAR_6), VAR_6);
 FUNC_4(1, VAR_1, VAR_2, "infoframe: addr=%d len=%d\n", VAR_3, VAR_7);
 VAR_8 = FUNC_1(&VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_8) {
  FUNC_5(VAR_4->client,
   "failed parsing %d byte infoframe: 0x%04x/0x%02x\n",
   VAR_7, VAR_3, VAR_6[0]);
  return VAR_8;
 }
 FUNC_0(VAR_0, &VAR_4->client->dev, &VAR_5);

 return 0;
}
