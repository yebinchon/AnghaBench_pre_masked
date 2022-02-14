
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int line; scalar_t__ field; int* data; } ;
struct saa7127_state {int vps_enable; int* vps_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, const struct v4l2_sliced_vbi_data *VAR_3)
{
 struct saa7127_state *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = (VAR_3->line != 0);

 if (VAR_5 && (VAR_3->field != 0 || VAR_3->line != 16))
  return -VAR_0;
 if (VAR_4->vps_enable != VAR_5) {
  FUNC_2(1, VAR_1, VAR_2, "Turn VPS Signal %s\n", VAR_5 ? "on" : "off");
  FUNC_0(VAR_2, 0x54, VAR_5 << 7);
  VAR_4->vps_enable = VAR_5;
 }
 if (!VAR_5)
  return 0;

 VAR_4->vps_data[0] = VAR_3->data[2];
 VAR_4->vps_data[1] = VAR_3->data[8];
 VAR_4->vps_data[2] = VAR_3->data[9];
 VAR_4->vps_data[3] = VAR_3->data[10];
 VAR_4->vps_data[4] = VAR_3->data[11];
 FUNC_2(1, VAR_1, VAR_2, "Set VPS data %*ph\n", 5, VAR_4->vps_data);
 FUNC_0(VAR_2, 0x55, VAR_4->vps_data[0]);
 FUNC_0(VAR_2, 0x56, VAR_4->vps_data[1]);
 FUNC_0(VAR_2, 0x57, VAR_4->vps_data[2]);
 FUNC_0(VAR_2, 0x58, VAR_4->vps_data[3]);
 FUNC_0(VAR_2, 0x59, VAR_4->vps_data[4]);
 return 0;
}
