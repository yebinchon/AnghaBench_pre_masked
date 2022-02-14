
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct ks0127 {int norm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct v4l2_subdev*,size_t,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,size_t,int) ;
 int* VAR_20 ;
 struct ks0127* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_21,
       u32 VAR_22, u32 VAR_23, u32 VAR_24)
{
 struct ks0127 *VAR_25 = FUNC_2(VAR_21);

 switch (VAR_22) {
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
  FUNC_3(1, VAR_19, VAR_21,
   "s_routing %d: Composite\n", VAR_22);

  FUNC_0(VAR_21, VAR_2, 0xfc, 0x00);

  FUNC_0(VAR_21, VAR_2, ~0x40, 0x00);

  FUNC_0(VAR_21, VAR_3, 0xb0, VAR_22);

  FUNC_0(VAR_21, VAR_4, 0x70, 0x0a);

  FUNC_0(VAR_21, VAR_5, 0x03, 0x00);

  FUNC_0(VAR_21, VAR_7, 0xcf, 0x00);

  FUNC_0(VAR_21, VAR_10, 0x00,
          (VAR_20[VAR_10])|0x0c);

  FUNC_0(VAR_21, VAR_15, 0x08, 0x81);

  FUNC_0(VAR_21, VAR_16, 0x0f, 0x90);


  FUNC_0(VAR_21, VAR_1, 0x0f, 0x90);

  FUNC_1(VAR_21, VAR_12, VAR_20[VAR_12]);
  FUNC_1(VAR_21, VAR_17, VAR_20[VAR_17]);
  FUNC_1(VAR_21, VAR_13, VAR_20[VAR_13]);
  FUNC_1(VAR_21, VAR_14, VAR_20[VAR_14]);
  break;

 case 131:
 case 130:
 case 129:
  FUNC_3(1, VAR_19, VAR_21,
   "s_routing %d: S-Video\n", VAR_22);

  FUNC_0(VAR_21, VAR_2, 0xfc, 0x00);

  FUNC_0(VAR_21, VAR_2, ~0x40, 0x00);

  FUNC_0(VAR_21, VAR_3, 0xb0, VAR_22);

  FUNC_0(VAR_21, VAR_4, 0x70, 0x0a);

  FUNC_0(VAR_21, VAR_5, 0x03, 0x00);

  FUNC_0(VAR_21, VAR_7, 0xcf, 0x00);
  FUNC_0(VAR_21, VAR_10, 0x00,
          VAR_20[VAR_10]);

  FUNC_0(VAR_21, VAR_15, 0x08,
          (VAR_20[VAR_15]&0xf0)|0x01);
  FUNC_0(VAR_21, VAR_16, 0x0f,
          VAR_20[VAR_16]&0xf0);

  FUNC_0(VAR_21, VAR_1, 0x0f,
          VAR_20[VAR_1]&0xf0);

  FUNC_1(VAR_21, VAR_12, VAR_20[VAR_12]);
  FUNC_1(VAR_21, VAR_17, VAR_20[VAR_17]);
  FUNC_1(VAR_21, VAR_13, VAR_20[VAR_13]);
  FUNC_1(VAR_21, VAR_14, VAR_20[VAR_14]);
  break;

 case 128:
  FUNC_3(1, VAR_19, VAR_21, "s_routing 15: YUV656\n");
  if (VAR_25->norm & VAR_18)

   FUNC_0(VAR_21, VAR_2, 0xfc, 0x03);
  else

   FUNC_0(VAR_21, VAR_2, 0xfc, 0x02);

  FUNC_0(VAR_21, VAR_2, 0xff, 0x40);

  FUNC_0(VAR_21, VAR_3, 0xb0, (VAR_22 | 0x40));


  FUNC_0(VAR_21, VAR_4, 0x70, 0x87);

  FUNC_0(VAR_21, VAR_5, 0x03, 0x08);

  FUNC_0(VAR_21, VAR_7, 0xcf, 0x30);

  FUNC_0(VAR_21, VAR_10, 0x00, 0x71);
  FUNC_0(VAR_21, VAR_16, 0x0f,
          VAR_20[VAR_16]&0xf0);


  FUNC_0(VAR_21, VAR_15, 0x08, 0x81);

  FUNC_0(VAR_21, VAR_1, 0x0f,
          VAR_20[VAR_1]&0xf0);

  FUNC_0(VAR_21, VAR_6, 0x00, 0x00);
  FUNC_0(VAR_21, VAR_0, 0x00, 32);

  FUNC_0(VAR_21, VAR_11, 0x00, 0xe8);
  FUNC_0(VAR_21, VAR_9, 0x00, 0);

  FUNC_0(VAR_21, VAR_12, 0x00, 238);
  FUNC_0(VAR_21, VAR_17, 0x00, 0x00);


  FUNC_0(VAR_21, VAR_13, 0x00, 0x4f);
  FUNC_0(VAR_21, VAR_14, 0x00, 0x00);
  break;

 default:
  FUNC_3(1, VAR_19, VAR_21,
   "s_routing: Unknown input %d\n", VAR_22);
  break;
 }



 FUNC_1(VAR_21, VAR_8, VAR_20[VAR_8]);
 return 0;
}
