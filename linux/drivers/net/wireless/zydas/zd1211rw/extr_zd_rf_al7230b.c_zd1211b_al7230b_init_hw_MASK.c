
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int const member_0; } ;
struct zd_chip {scalar_t__ new_phy_layout; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 struct zd_ioreq16 const** VAR_0 ;
 struct zd_ioreq16 const* VAR_1 ;
 struct zd_ioreq16 const* VAR_2 ;
 struct zd_ioreq16 const* VAR_3 ;
 int FUNC_1 (struct zd_chip*) ;
 int FUNC_2 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_rf *VAR_4)
{
 int VAR_5;
 struct zd_chip *VAR_6 = FUNC_3(VAR_4);

 static const struct zd_ioreq16 VAR_7[] = {
  { 163, 0x57 }, { 133, 0x9 },
  { },
  { 203, 0x8b }, { 169, 0x20 },
  { 167, 0x2B },
  { 166, 0x10 },
  { 165, 0x40 }, { 164, 0x20 }, { 159, 0x93 },
  { 158, 0x3e }, { 157, 0x00 },
  { 156, 0x28 },
  { 155, 0x30 },
  { 154, 0x3e },
  { 152, 0x24 }, { 151, 0x32 },
  { 150, 0x99 },
  { 149, 0x1e },


  { 148, 0x00 }, { 147, 0x00 }, { 146, 0x01 },
  { 145, 0x80 }, { 144, 0x7e }, { 143, 0x00 },
  { 142, 0x00 }, { 141, 0x00 }, { 140, 0x00 },
  { 139, 0x28 },

  { 138, 0x58 }, { 137, 0x30 }, { 136, 0x30 },
  { 135, 0x0A }, { 134, 0x04 },
  { 132, 0x58 },
  { 131, 0x00 },
  { 130, 0x0a },
  { 129, 0x8d },
  { 128, 0x00 }, { 202, 0x02 }, { 201, 0x13 },
  { 200, 0x27 },
  { 199, 0x20 },
  { 197, 0x13 },
  { 194, 0x1f },
 };

 static const struct zd_ioreq16 VAR_8[] = {
  { 198, 0x28 },
  { 196, 0x1f },
  { 195, 0x1f },
  { 190, 0x2a }, { 188, 0xfa }, { 187, 0x12 },
  { 185, 0x6c },
 };

 static const struct zd_ioreq16 VAR_9[] = {
  { 198, 0x24 },
  { 196, 0x13 },
  { 195, 0x13 },
  { 190, 0x24 }, { 188, 0xfc }, { 187, 0x11 },
  { 185, 0x6a },
 };

 static const struct zd_ioreq16 VAR_10[] = {
  { 193, 0x27 }, { 192, 0x27 }, { 191, 0x24 },
  { 189, 0xfa }, { 186, 0x4f },
  { 184, 0xfc },
  { 183, 0x57 },
  { 182, 0xad },
  { 181, 0x6c },
  { 180, 0x03 },
  { 177, 0x10 },
  { 176, 0x00 },
  { 174, 0x50 },
  { 173, 0xa8 },
  { 172, 0xac },
  { 171, 0x40 },
  { 170, 0x40 },
  { 168, 0x1a },
  { 161, 0x34 }, { 160, 0x34 },
  { 162, 0x2f },
 };

 static const struct zd_ioreq16 VAR_11[] = {
  { 162, 0x7f },
  { 179, 0x14 }, { 178, 0x12 }, { 177, 0x10 },
  { 153, 0x38 }, { 175, 0xdf },
 };

 VAR_5 = FUNC_2(VAR_6, VAR_7, FUNC_0(VAR_7));
 if (VAR_5)
  return VAR_5;

 if (VAR_6->new_phy_layout)
  VAR_5 = FUNC_2(VAR_6, VAR_8,
   FUNC_0(VAR_8));
 else
  VAR_5 = FUNC_2(VAR_6, VAR_9,
   FUNC_0(VAR_9));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_6, VAR_10, FUNC_0(VAR_10));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_6, VAR_0[0], FUNC_0(VAR_0[0]));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_6, VAR_3, FUNC_0(VAR_3));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_6, VAR_1, FUNC_0(VAR_1));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_6, VAR_11, FUNC_0(VAR_11));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_6, VAR_2, FUNC_0(VAR_2));
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_6);
}
