
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_sdp_csc_coeff {int scaling; int A1; int A2; int A3; int A4; int B1; int B2; int B3; int B4; int C1; int C2; int C3; int C4; scalar_t__ manual; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0,
     const struct adv7842_sdp_csc_coeff *VAR_1)
{

 FUNC_1(VAR_0, 0xe0, 0xbf, VAR_1->manual ? 0x00 : 0x40);

 if (!VAR_1->manual)
  return;


 FUNC_1(VAR_0, 0xe0, 0x7f, VAR_1->scaling == 2 ? 0x80 : 0x00);


 FUNC_1(VAR_0, 0xe0, 0xe0, VAR_1->A1 >> 8);
 FUNC_0(VAR_0, 0xe1, VAR_1->A1);
 FUNC_1(VAR_0, 0xe2, 0xe0, VAR_1->A2 >> 8);
 FUNC_0(VAR_0, 0xe3, VAR_1->A2);
 FUNC_1(VAR_0, 0xe4, 0xe0, VAR_1->A3 >> 8);
 FUNC_0(VAR_0, 0xe5, VAR_1->A3);


 FUNC_1(VAR_0, 0xe6, 0x80, VAR_1->A4 >> 8);
 FUNC_0(VAR_0, 0xe7, VAR_1->A4);


 FUNC_1(VAR_0, 0xe8, 0xe0, VAR_1->B1 >> 8);
 FUNC_0(VAR_0, 0xe9, VAR_1->B1);
 FUNC_1(VAR_0, 0xea, 0xe0, VAR_1->B2 >> 8);
 FUNC_0(VAR_0, 0xeb, VAR_1->B2);
 FUNC_1(VAR_0, 0xec, 0xe0, VAR_1->B3 >> 8);
 FUNC_0(VAR_0, 0xed, VAR_1->B3);


 FUNC_1(VAR_0, 0xee, 0x80, VAR_1->B4 >> 8);
 FUNC_0(VAR_0, 0xef, VAR_1->B4);


 FUNC_1(VAR_0, 0xf0, 0xe0, VAR_1->C1 >> 8);
 FUNC_0(VAR_0, 0xf1, VAR_1->C1);
 FUNC_1(VAR_0, 0xf2, 0xe0, VAR_1->C2 >> 8);
 FUNC_0(VAR_0, 0xf3, VAR_1->C2);
 FUNC_1(VAR_0, 0xf4, 0xe0, VAR_1->C3 >> 8);
 FUNC_0(VAR_0, 0xf5, VAR_1->C3);


 FUNC_1(VAR_0, 0xf6, 0x80, VAR_1->C4 >> 8);
 FUNC_0(VAR_0, 0xf7, VAR_1->C4);
}
