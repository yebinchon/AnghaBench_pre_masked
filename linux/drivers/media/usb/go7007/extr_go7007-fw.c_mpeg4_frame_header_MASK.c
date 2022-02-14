
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int width; int height; } ;
typedef enum mpeg_frame_type { ____Placeholder_mpeg_frame_type } mpeg_frame_type ;






 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int ) ;

 int VAR_0 ;
 int FUNC_3 (struct go7007*) ;

__attribute__((used)) static int FUNC_4(struct go7007 *VAR_1, unsigned char *VAR_2,
  int VAR_3, enum mpeg_frame_type VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_0, VAR_2 + 6);
 int VAR_6 = (VAR_1->width >> 4) * (VAR_1->height >> 4);

 FUNC_0(VAR_0, VAR_4 == 128 ? 0x1 : 0x2, 2);
 if (VAR_3)
  FUNC_0(VAR_0, 0x1, 1);
 FUNC_0(VAR_0, 0x1, 2);
 FUNC_0(VAR_0, 0, FUNC_3(VAR_1));
 FUNC_0(VAR_0, 0x3, 2);
 if (VAR_4 == 128)
  FUNC_0(VAR_0, 0, 1);
 FUNC_0(VAR_0, 0xc, 11);
 if (VAR_4 != 128)
  FUNC_0(VAR_0, 0x4, 3);
 if (VAR_4 != 131) {
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
   switch (VAR_4) {
   case 128:
    FUNC_0(VAR_0, 0x1, 1);
    break;
   case 129:
    FUNC_0(VAR_0, 0x47, 8);
    break;
   case 130:
    FUNC_0(VAR_0, 0x27, 7);
    break;
   case 132:
    FUNC_0(VAR_0, 0x5f, 8);
    break;
   case 131:
    break;
   }
  }
 }


 VAR_5 = 8 - (FUNC_2(VAR_0) % 8);
 FUNC_0(VAR_0, 0, 1);
 FUNC_0(VAR_0, (1 << (VAR_5 - 1)) - 1, VAR_5 - 1);

 VAR_5 = FUNC_2(VAR_0) + 4 * 8;
 VAR_2[0] = VAR_5 & 0xff;
 VAR_2[1] = VAR_5 >> 8;
 VAR_2[2] = 0x00;
 VAR_2[3] = 0x00;
 VAR_2[4] = 0x01;
 VAR_2[5] = 0xb6;
 return VAR_5;
}
