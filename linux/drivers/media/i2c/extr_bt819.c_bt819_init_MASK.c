
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct timing {int vdelay; int vactive; int hdelay; int hactive; int hscale; } ;
struct bt819 {int norm; } ;
typedef int init ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bt819*,int,int) ;
 int FUNC_1 (struct bt819*,unsigned char*,int) ;
 int FUNC_2 (int) ;
 struct timing* VAR_2 ;
 struct bt819* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3)
{
 static unsigned char VAR_4[] = {

  0x01, 0x59,
  0x02, 0x00,
  0x03, 0x12,
  0x04, 0x16,
  0x05, 0xe0,
  0x06, 0x80,
  0x07, 0xd0,
  0x08, 0x00,
  0x09, 0xf8,
  0x0a, 0x00,
  0x0b, 0x30,
  0x0c, 0xd8,
  0x0d, 0xfe,
  0x0e, 0xb4,
  0x0f, 0x00,
  0x12, 0x04,
  0x13, 0x20,




  0x14, 0x00,
  0x16, 0x07,




  0x18, 0x68,
  0x19, 0x5d,
  0x1a, 0x80,
 };

 struct bt819 *VAR_5 = FUNC_3(VAR_3);
 struct timing *VAR_6 = &VAR_2[(VAR_5->norm & VAR_0) ? 1 : 0];

 VAR_4[0x03 * 2 - 1] =
     (((VAR_6->vdelay >> 8) & 0x03) << 6) |
     (((VAR_6->vactive >> 8) & 0x03) << 4) |
     (((VAR_6->hdelay >> 8) & 0x03) << 2) |
     ((VAR_6->hactive >> 8) & 0x03);
 VAR_4[0x04 * 2 - 1] = VAR_6->vdelay & 0xff;
 VAR_4[0x05 * 2 - 1] = VAR_6->vactive & 0xff;
 VAR_4[0x06 * 2 - 1] = VAR_6->hdelay & 0xff;
 VAR_4[0x07 * 2 - 1] = VAR_6->hactive & 0xff;
 VAR_4[0x08 * 2 - 1] = VAR_6->hscale >> 8;
 VAR_4[0x09 * 2 - 1] = VAR_6->hscale & 0xff;

 VAR_4[0x15 * 2 - 1] = (VAR_5->norm & VAR_1) ? 115 : 93;

 FUNC_0(VAR_5, 0x1f, 0x00);
 FUNC_2(1);


 return FUNC_1(VAR_5, VAR_4, sizeof(VAR_4));
}
