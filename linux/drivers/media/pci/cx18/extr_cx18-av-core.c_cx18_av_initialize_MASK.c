
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int hdl; TYPE_2__* volume; } ;
struct cx18 {int dummy; } ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {int default_value; TYPE_1__ cur; } ;


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
 int FUNC_0 (struct cx18*,int ,int,int) ;
 int FUNC_1 (struct cx18*) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*,int) ;
 int FUNC_4 (struct cx18*,int ) ;
 int FUNC_5 (struct cx18*,int,int) ;
 int FUNC_6 (struct cx18*,int ,int) ;
 int FUNC_7 (struct cx18*,int ,int,int,int) ;
 struct cx18_av_state* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int *) ;
 struct cx18* FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_11(struct v4l2_subdev *VAR_16)
{
 struct cx18_av_state *VAR_17 = FUNC_8(VAR_16);
 struct cx18 *VAR_18 = FUNC_10(VAR_16);
 int VAR_19;
 u32 VAR_20;

 FUNC_2(VAR_18);

 FUNC_7(VAR_18, VAR_8, 0x03000000,
       0x03000000, 0x13000000);


 VAR_20 = FUNC_4(VAR_18, VAR_9);

 FUNC_7(VAR_18, VAR_9, VAR_20 | 1, VAR_20, 0xfffe);

 FUNC_7(VAR_18, VAR_9, VAR_20 & 0xfffe,
          VAR_20 & 0xfffe, 0xffff);


 VAR_20 = FUNC_4(VAR_18, VAR_6) & 0xE1FFFEFF;

 FUNC_6(VAR_18, VAR_6, VAR_20);

 FUNC_6(VAR_18, VAR_6, VAR_20 | 0x10000100);

 VAR_20 = FUNC_4(VAR_18, VAR_7) & 0xE1FFFEFF;

 FUNC_6(VAR_18, VAR_7, VAR_20);

 FUNC_6(VAR_18, VAR_7, VAR_20 | 0x06000100);


 FUNC_6(VAR_18, VAR_1, 0x000A1802);

 VAR_20 = FUNC_4(VAR_18, VAR_2) | 1;

 FUNC_7(VAR_18, VAR_2, VAR_20, VAR_20, 0x03009F0F);

 FUNC_7(VAR_18, VAR_2,
         VAR_20 & 0xFFFFFFFE, VAR_20 & 0xFFFFFFFE, 0x03009F0F);


 FUNC_0(VAR_18, VAR_12, ~0, 0x040C00);


 FUNC_0(VAR_18, VAR_13, ~0, 0x2);


 FUNC_6(VAR_18, VAR_14, 0x8000);
 FUNC_6(VAR_18, VAR_14, 0);
 FUNC_0(VAR_18, VAR_3, 0xFFFBFFFF, 0x00120000);


 FUNC_1(VAR_18);




 FUNC_0(VAR_18, VAR_10, 0xFFF7E7F0, 0x02040800);



 FUNC_0(VAR_18, VAR_4, ~0, 0x00500000);


 FUNC_0(VAR_18, VAR_5, 0xFFFF00FF, 0x00002000);
 FUNC_6(VAR_18, VAR_11, 0x4013252e);
 FUNC_0(VAR_18, VAR_0, 0xFF000000, 0x00005D00);






 FUNC_6(VAR_18, VAR_15, 0x6628021F);
 VAR_19 = FUNC_3(VAR_18, 0x8d4);




 if (VAR_19 > 228) {

  VAR_19 = 228;
  FUNC_5(VAR_18, 0x8d4, 228);
 } else if (VAR_19 < 20) {

  VAR_19 = 20;
  FUNC_5(VAR_18, 0x8d4, 20);
 }
 VAR_19 = (((228 - VAR_19) >> 1) + 23) << 9;
 VAR_17->volume->cur.val = VAR_17->volume->default_value = VAR_19;
 FUNC_9(&VAR_17->hdl);
}
