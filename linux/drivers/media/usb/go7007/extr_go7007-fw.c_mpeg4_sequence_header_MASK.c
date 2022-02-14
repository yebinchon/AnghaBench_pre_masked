
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int pali; int sensor_framerate; int fps_scale; int aspect_ratio; int width; int height; int standard; } ;
typedef int head ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (struct go7007*) ;

__attribute__((used)) static int FUNC_5(struct go7007 *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 const unsigned char VAR_5[] = { 0x00, 0x00, 0x01, 0xb0, VAR_2->pali,
  0x00, 0x00, 0x01, 0xb5, 0x09,
  0x00, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x01, 0x20, };
 int VAR_6, VAR_7;
 int VAR_8 = VAR_2->sensor_framerate / VAR_2->fps_scale;
 FUNC_1(VAR_1, VAR_3 + 2 + sizeof(VAR_5));

 switch (VAR_2->aspect_ratio) {
 case 128:
  VAR_7 = VAR_2->standard == VAR_0 ? 3 : 2;
  break;
 case 129:
  VAR_7 = VAR_2->standard == VAR_0 ? 5 : 4;
  break;
 default:
  VAR_7 = 1;
  break;
 }

 FUNC_3(VAR_3 + 2, VAR_5, sizeof(VAR_5));
 FUNC_0(VAR_1, 0x191, 17);
 FUNC_0(VAR_1, VAR_7, 4);
 FUNC_0(VAR_1, 0x1, 4);
 FUNC_0(VAR_1, VAR_8, 16);
 FUNC_0(VAR_1, 0x3, 2);
 FUNC_0(VAR_1, 1001, FUNC_4(VAR_2));
 FUNC_0(VAR_1, 1, 1);
 FUNC_0(VAR_1, VAR_2->width, 13);
 FUNC_0(VAR_1, 1, 1);
 FUNC_0(VAR_1, VAR_2->height, 13);
 FUNC_0(VAR_1, 0x2830, 14);


 VAR_6 = 8 - (FUNC_2(VAR_1) % 8);
 FUNC_0(VAR_1, 0, 1);
 FUNC_0(VAR_1, (1 << (VAR_6 - 1)) - 1, VAR_6 - 1);

 VAR_6 = FUNC_2(VAR_1) + sizeof(VAR_5) * 8;
 VAR_3[0] = VAR_6 & 0xff;
 VAR_3[1] = VAR_6 >> 8;
 return VAR_6;
}
