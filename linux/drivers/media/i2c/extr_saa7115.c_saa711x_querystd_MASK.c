
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_14, v4l2_std_id *VAR_15)
{
 struct saa711x_state *VAR_16 = FUNC_1(VAR_14);
 int VAR_17, VAR_18;







 VAR_17 = FUNC_0(VAR_14, VAR_1);

 if (VAR_16->ident == VAR_2) {
  VAR_18 = FUNC_0(VAR_14, VAR_0);

  FUNC_2(1, VAR_13, VAR_14, "Status byte 1 (0x1e)=0x%02x\n", VAR_18);

  switch (VAR_18 & 0x03) {
  case 1:
   *VAR_15 &= VAR_5;
   break;
  case 2:





   *VAR_15 &= VAR_6 | VAR_9 | VAR_10 |
    VAR_8 | VAR_7;
   break;
  case 3:
   *VAR_15 &= VAR_11;
   break;
  default:
   *VAR_15 = VAR_12;

   break;
  }
 }

 FUNC_2(1, VAR_13, VAR_14, "Status byte 2 (0x1f)=0x%02x\n", VAR_17);


 if (VAR_17 & 0x40) {
  *VAR_15 = VAR_12;
  goto ret;
 }

 if (VAR_17 & 0x20)
  *VAR_15 &= VAR_3;
 else
  *VAR_15 &= VAR_4;

ret:
 FUNC_2(1, VAR_13, VAR_14, "detected std mask = %08Lx\n", *VAR_15);

 return 0;
}
