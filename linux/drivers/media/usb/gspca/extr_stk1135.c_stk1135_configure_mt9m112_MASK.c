
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sensor_val {int member_0; int member_1; int reg; int val; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int FUNC_0 (struct sensor_val const*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 static const struct sensor_val VAR_1[] = {

  { 0x00d, 0x000b }, { 0x00d, 0x0008 }, { 0x035, 0x0022 },

  { 0x106, 0x700e },

  { 0x2dd, 0x18e0 },


  { 0x21f, 0x0180 },
  { 0x220, 0xc814 }, { 0x221, 0x8080 },
  { 0x222, 0xa078 }, { 0x223, 0xa078 },
  { 0x224, 0x5f20 }, { 0x228, 0xea02 },
  { 0x229, 0x867a },



  { 0x25e, 0x594c }, { 0x25f, 0x4d51 }, { 0x260, 0x0002 },

  { 0x2ef, 0x0008 }, { 0x2f2, 0x0000 },

  { 0x202, 0x00ee }, { 0x203, 0x3923 }, { 0x204, 0x0724 },

  { 0x209, 0x00cd }, { 0x20a, 0x0093 }, { 0x20b, 0x0004 },
  { 0x20c, 0x005c }, { 0x20d, 0x00d9 }, { 0x20e, 0x0053 },
  { 0x20f, 0x0008 }, { 0x210, 0x0091 }, { 0x211, 0x00cf },
  { 0x215, 0x0000 },

  { 0x216, 0x0000 }, { 0x217, 0x0000 }, { 0x218, 0x0000 },
  { 0x219, 0x0000 }, { 0x21a, 0x0000 }, { 0x21b, 0x0000 },
  { 0x21c, 0x0000 }, { 0x21d, 0x0000 }, { 0x21e, 0x0000 },

  { 0x106, 0xf00e }, { 0x106, 0x700e },


  { 0x180, 0x0007 },

  { 0x181, 0xde13 }, { 0x182, 0xebe2 }, { 0x183, 0x00f6 },
  { 0x184, 0xe114 }, { 0x185, 0xeadd }, { 0x186, 0xfdf6 },
  { 0x187, 0xe511 }, { 0x188, 0xede6 }, { 0x189, 0xfbf7 },

  { 0x18a, 0xd613 }, { 0x18b, 0xedec },
  { 0x18c, 0xf9f2 }, { 0x18d, 0x0000 },
  { 0x18e, 0xd815 }, { 0x18f, 0xe9ea },
  { 0x190, 0xf9f1 }, { 0x191, 0x0002 },
  { 0x192, 0xde10 }, { 0x193, 0xefef },
  { 0x194, 0xfbf4 }, { 0x195, 0x0002 },

  { 0x1b6, 0x0e06 }, { 0x1b7, 0x2713 },
  { 0x1b8, 0x1106 }, { 0x1b9, 0x2713 },
  { 0x1ba, 0x0c03 }, { 0x1bb, 0x2a0f },

  { 0x1bc, 0x1208 }, { 0x1bd, 0x1a16 }, { 0x1be, 0x0022 },
  { 0x1bf, 0x150a }, { 0x1c0, 0x1c1a }, { 0x1c1, 0x002d },
  { 0x1c2, 0x1109 }, { 0x1c3, 0x1414 }, { 0x1c4, 0x002a },
  { 0x106, 0x740e },


  { 0x153, 0x0b03 }, { 0x154, 0x4722 }, { 0x155, 0xac82 },
  { 0x156, 0xdac7 }, { 0x157, 0xf5e9 }, { 0x158, 0xff00 },

  { 0x1dc, 0x0b03 }, { 0x1dd, 0x4722 }, { 0x1de, 0xac82 },
  { 0x1df, 0xdac7 }, { 0x1e0, 0xf5e9 }, { 0x1e1, 0xff00 },


  { 0x13a, 0x4300 }, { 0x19b, 0x4300 },
  { 0x108, 0x0180 },

  { 0x22f, 0xd100 }, { 0x29c, 0xd100 },


  { 0x2d2, 0x0000 }, { 0x2cc, 0x0004 }, { 0x2cb, 0x0001 },

  { 0x22e, 0x0c3c }, { 0x267, 0x1010 },


  { 0x065, 0xa000 },
  { 0x066, 0x2003 }, { 0x067, 0x0501 },
  { 0x065, 0x2000 },

  { 0x005, 0x01b8 }, { 0x007, 0x00d8 },


  { 0x239, 0x06c0 }, { 0x23b, 0x040e },
  { 0x23a, 0x06c0 }, { 0x23c, 0x0564 },

  { 0x257, 0x0208 }, { 0x258, 0x0271 },
  { 0x259, 0x0209 }, { 0x25a, 0x0271 },

  { 0x25c, 0x120d }, { 0x25d, 0x1712 },
  { 0x264, 0x5e1c },

  { 0x25b, 0x0003 }, { 0x236, 0x7810 }, { 0x237, 0x8304 },

  { 0x008, 0x0021 },
 };
 int VAR_2;
 u16 VAR_3, VAR_4;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  FUNC_1(VAR_0, VAR_1[VAR_2].reg, VAR_1[VAR_2].val);


 VAR_3 = VAR_0->pixfmt.width;
 VAR_4 = VAR_0->pixfmt.height;
 if (VAR_3 <= 640 && VAR_4 <= 512) {
  FUNC_1(VAR_0, 0x1a7, VAR_3);
  FUNC_1(VAR_0, 0x1aa, VAR_4);

  FUNC_1(VAR_0, 0x0c8, 0x0000);

  FUNC_1(VAR_0, 0x2c8, 0x0000);
 } else {
  FUNC_1(VAR_0, 0x1a1, VAR_3);
  FUNC_1(VAR_0, 0x1a4, VAR_4);

  FUNC_1(VAR_0, 0x0c8, 0x0008);

  FUNC_1(VAR_0, 0x2c8, 0x040b);
 }
}
