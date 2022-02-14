
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {int std; int width; int height; int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_21, int VAR_22, int VAR_23)
{
 struct saa711x_state *VAR_24 = FUNC_4(VAR_21);
 int VAR_25, VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29 = VAR_24->std & VAR_17;
 int VAR_30 = VAR_29 ? 576 : 480;

 FUNC_5(1, VAR_19, VAR_21, "decoder set size to %ix%i\n", VAR_22, VAR_23);


 if ((VAR_22 < 1) || (VAR_22 > 1440))
  return -VAR_0;
 if ((VAR_23 < 1) || (VAR_23 > VAR_30))
  return -VAR_0;

 if (!FUNC_0(VAR_24->ident, VAR_6)) {

  if (VAR_22 != 720)
   return -VAR_0;
  if (VAR_23 != VAR_30)
   return -VAR_0;
 }

 VAR_24->width = VAR_22;
 VAR_24->height = VAR_23;

 if (!FUNC_0(VAR_24->ident, VAR_2))
  return 0;





 FUNC_2(VAR_21, VAR_2,
     (u8) (VAR_22 & 0xff));
 FUNC_2(VAR_21, VAR_3,
     (u8) ((VAR_22 >> 8) & 0xff));


 VAR_28 = VAR_23 / 2;


 if (!VAR_29)
  VAR_28 += (VAR_18 - 480) >> 1;


 FUNC_2(VAR_21, VAR_4,
     (u8) (VAR_28 & 0xff));
 FUNC_2(VAR_21, VAR_5,
     (u8) ((VAR_28 >> 8) & 0xff));



 VAR_25 = (int)(720 / VAR_22);

 VAR_25 = VAR_25 ? VAR_25 : 1;
 VAR_26 = (int)((1024 * 720) / (VAR_25 * VAR_22));


 FUNC_2(VAR_21, VAR_6,
    (u8) (VAR_25 & 0x3f));

 FUNC_5(1, VAR_19, VAR_21, "Hpsc: 0x%05x, Hfsc: 0x%05x\n", VAR_25, VAR_26);

 FUNC_2(VAR_21, VAR_9,
    (u8) (VAR_26 & 0xff));
 FUNC_2(VAR_21, VAR_10,
    (u8) ((VAR_26 >> 8) & 0xff));


 FUNC_2(VAR_21, VAR_11,
    (u8) ((VAR_26 >> 1) & 0xff));
 FUNC_2(VAR_21, VAR_12,
    (u8) ((VAR_26 >> 9) & 0xff));

 VAR_27 = (int)((1024 * VAR_30) / VAR_23);
 FUNC_5(1, VAR_19, VAR_21, "Vsrc: %d, Vscy: 0x%05x\n", VAR_30, VAR_27);


 FUNC_2(VAR_21, VAR_7,
     (u8) (64 * 1024 / VAR_27));
 FUNC_2(VAR_21, VAR_8,
     (u8) (64 * 1024 / VAR_27));


 FUNC_2(VAR_21, VAR_13,
     (u8) (VAR_27 & 0xff));
 FUNC_2(VAR_21, VAR_14,
     (u8) ((VAR_27 >> 8) & 0xff));

 FUNC_2(VAR_21, VAR_15,
     (u8) (VAR_27 & 0xff));
 FUNC_2(VAR_21, VAR_16,
     (u8) ((VAR_27 >> 8) & 0xff));

 FUNC_3(VAR_21, VAR_20);


 FUNC_2(VAR_21, VAR_1,
    FUNC_1(VAR_21, VAR_1) | 0x20);

 return 0;
}
