
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int const member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 int const VAR_0 ;
 struct zd_ioreq16 const** VAR_1 ;
 struct zd_ioreq16 const* VAR_2 ;
 struct zd_ioreq16 const* VAR_3 ;
 struct zd_ioreq16 const* VAR_4 ;
 int FUNC_1 (struct zd_chip*,int,int const) ;
 int FUNC_2 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_rf *VAR_5)
{
 int VAR_6;
 struct zd_chip *VAR_7 = FUNC_3(VAR_5);



 static const struct zd_ioreq16 VAR_8[] = {

  { 148, 0x57 },
  { },

  { 152, 0x20 }, { 150, 0x40 }, { 149, 0x20 },
  { 144, 0x11 }, { 143, 0x3e }, { 142, 0x00 },
  { 137, 0x33 },

  { 174, 0x22 },
  { 173, 0x1a }, { 172, 0x09 }, { 171, 0x27 },
  { 170, 0x2b }, { 169, 0x2b }, { 162, 0x0a },


  { 159, 0xfc },
  { 178, 0x89 },

  { 151, 0x28 },
  { 144, 0x93 }, { 141, 0x30 },

  { 140, 0x3e },
  { 138, 0x24 }, { 137, 0x32 },

  { 136, 0x96 },
  { 135, 0x1e }, { 134, 0x58 }, { 133, 0x30 },
  { 132, 0x30 }, { 131, 0x0a }, { 130, 0x04 },
  { 129, 0x0a }, { 128, 0x28 },

  { 177, 0x02 },
  { 176, 0x13 }, { 175, 0x27 },

  { 174, 0x22 },

  { 173, 0x3f },
  { 172, 0x09 },

  { 171, 0x1f },
  { 170, 0x1f }, { 169, 0x1f }, { 168, 0x27 },
  { 167, 0x27 },

  { 166, 0x24 },

  { 165, 0x3f },

  { 164, 0xfa },
  { 163, 0xfc }, { 162, 0x10 }, { 161, 0x4f },
  { 160, 0x77 }, { 154, 0x88 },

  { 153, 0xa8 },

  { 146, 0x34 },

  { 145, 0x34 },


  { 147, 0x2f },
 };

 static const struct zd_ioreq16 VAR_9[] = {
  { 147, 0x3f },
  { 158, 0x14 }, { 157, 0x12 }, { 156, 0x10 },
  { 139, 0x38 }, { 155, 0xdf },
 };

 VAR_6 = FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_8));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_7, VAR_1[0], FUNC_0(VAR_1[0]));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_7, VAR_4, FUNC_0(VAR_4));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_7, VAR_2, FUNC_0(VAR_2));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_7, VAR_9, FUNC_0(VAR_9));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_7, VAR_3, FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_7, 0x06, VAR_0);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_7, 0x80, 148);
 if (VAR_6)
  return VAR_6;

 return 0;
}
