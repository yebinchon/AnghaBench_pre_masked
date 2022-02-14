
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct go7007 {int sensor_framerate; int fps_scale; scalar_t__ interlace_coding; } ;
typedef int __le16 ;


 int FUNC_0 (int *,int*,int,int) ;
 int FUNC_1 (struct go7007*) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_0, __le16 *VAR_1, int VAR_2,
 int (*VAR_3)(struct go7007 *VAR_4,
  unsigned char *VAR_5, int VAR_6))
{
 int VAR_7 = FUNC_1(VAR_0);
 int VAR_8 = VAR_0->sensor_framerate / VAR_0->fps_scale *
     (VAR_0->interlace_coding ? 2 : 1);
 unsigned char VAR_9[40] = { };
 int VAR_10 = VAR_3(VAR_0, VAR_9, 1);
 u16 VAR_11[] = {
  0x2006, 0,
  0xbf08, VAR_8,
  0xbf09, 0,
  0xbff2, VAR_7,
  0xbff3, (1 << VAR_7) - 1,
  0xbfe6, 0,
  0xbfe7, (VAR_8 / 1000) << 8,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,

  0x2007, 0,
  0xc800, VAR_9[2] << 8 | VAR_9[3],
  0xc801, VAR_9[4] << 8 | VAR_9[5],
  0xc802, VAR_9[6] << 8 | VAR_9[7],
  0xc803, VAR_9[8] << 8 | VAR_9[9],
  0xc406, 64,
  0xc407, VAR_10 - 64,
  0xc61b, 1,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,

  0x200e, 0,
  0xc808, VAR_9[10] << 8 | VAR_9[11],
  0xc809, VAR_9[12] << 8 | VAR_9[13],
  0xc80a, VAR_9[14] << 8 | VAR_9[15],
  0xc80b, VAR_9[16] << 8 | VAR_9[17],
  0xc80c, VAR_9[18] << 8 | VAR_9[19],
  0xc80d, VAR_9[20] << 8 | VAR_9[21],
  0xc80e, VAR_9[22] << 8 | VAR_9[23],
  0xc80f, VAR_9[24] << 8 | VAR_9[25],
  0xc810, VAR_9[26] << 8 | VAR_9[27],
  0xc811, VAR_9[28] << 8 | VAR_9[29],
  0xc812, VAR_9[30] << 8 | VAR_9[31],
  0xc813, VAR_9[32] << 8 | VAR_9[33],
  0xc814, VAR_9[34] << 8 | VAR_9[35],
  0xc815, VAR_9[36] << 8 | VAR_9[37],
  0, 0,
  0, 0,
  0, 0,
 };

 return FUNC_0(VAR_1, VAR_11, 3, VAR_2);
}
