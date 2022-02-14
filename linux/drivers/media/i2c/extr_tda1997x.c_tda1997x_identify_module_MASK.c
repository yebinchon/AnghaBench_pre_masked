
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int tmdsb_clk; int tmdsb_soc; int port_30bit; int output_2p5; void* chip_revision; TYPE_2__* client; TYPE_1__* info; struct v4l2_subdev sd; } ;
typedef enum tda1997x_type { ____Placeholder_tda1997x_type } tda1997x_type ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_2(struct tda1997x_state *VAR_5)
{
 struct v4l2_subdev *VAR_6 = &VAR_5->sd;
 enum tda1997x_type VAR_7;
 u8 VAR_8;


 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_5->tmdsb_clk = (VAR_8 >> 6) & 0x01;
 VAR_5->tmdsb_soc = (VAR_8 >> 5) & 0x01;
 VAR_5->port_30bit = (VAR_8 >> 2) & 0x03;
 VAR_5->output_2p5 = (VAR_8 >> 1) & 0x01;
 switch ((VAR_8 >> 4) & 0x03) {
 case 0x00:
  VAR_7 = VAR_3;
  break;
 case 0x02:
 case 0x03:
  VAR_7 = VAR_4;
  break;
 default:
  FUNC_0(&VAR_5->client->dev, "unsupported chip ID\n");
  return -VAR_0;
 }
 if (VAR_5->info->type != VAR_7) {
  FUNC_0(&VAR_5->client->dev, "chip id mismatch\n");
  return -VAR_0;
 }


 VAR_5->chip_revision = FUNC_1(VAR_6, VAR_2);

 return 0;
}
