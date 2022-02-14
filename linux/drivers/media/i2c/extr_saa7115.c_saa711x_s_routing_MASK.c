
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; scalar_t__ input; scalar_t__ output; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_19,
        u32 VAR_20, u32 VAR_21, u32 VAR_22)
{
 struct saa711x_state *VAR_23 = FUNC_2(VAR_19);
 u8 VAR_24 = (VAR_23->ident <= VAR_8) ? 0xf8 : 0xf0;

 FUNC_3(1, VAR_18, VAR_19, "decoder set input %d output %d\n",
  VAR_20, VAR_21);


 if ((VAR_23->ident <= VAR_9 ||
      VAR_23->ident == VAR_1) &&
     (VAR_20 == VAR_12 ||
      VAR_20 == VAR_13)) {
  return -VAR_0;
 }
 if (VAR_20 > VAR_17)
  return -VAR_0;
 if (VAR_23->input == VAR_20 && VAR_23->output == VAR_21)
  return 0;
 FUNC_3(1, VAR_18, VAR_19, "now setting %s input %s output\n",
  (VAR_20 >= VAR_16) ? "S-Video" : "Composite",
  (VAR_21 == VAR_15) ? "iport on" : "iport off");
 VAR_23->input = VAR_20;


 if (VAR_23->ident <= VAR_8) {
  if (VAR_20 >= VAR_12)
   VAR_20 -= 2;

  FUNC_1(VAR_19, VAR_4,
    (FUNC_0(VAR_19, VAR_4) & 0x3f) |
    ((VAR_21 & 0xc0) ^ 0x40));
  FUNC_1(VAR_19, VAR_5,
    (FUNC_0(VAR_19, VAR_5) & 0xf0) |
    ((VAR_21 & 2) ? 0x0a : 0));
 }


 FUNC_1(VAR_19, VAR_2,
        (FUNC_0(VAR_19, VAR_2) & VAR_24) |
         VAR_20);


 FUNC_1(VAR_19, VAR_3,
   (FUNC_0(VAR_19, VAR_3) & 0x7f) |
   (VAR_23->input >= VAR_16 ? 0x80 : 0x0));

 VAR_23->output = VAR_21;
 if (VAR_23->ident == VAR_10 ||
   VAR_23->ident == VAR_11) {
  FUNC_1(VAR_19, VAR_6,
    (FUNC_0(VAR_19, VAR_6) & 0xfe) |
    (VAR_23->output & 0x01));
 }
 if (VAR_23->ident > VAR_8) {
  if (VAR_22 & VAR_14)
   FUNC_1(VAR_19, VAR_7, 0x20);
  else
   FUNC_1(VAR_19, VAR_7, 0x21);
 }
 return 0;
}
