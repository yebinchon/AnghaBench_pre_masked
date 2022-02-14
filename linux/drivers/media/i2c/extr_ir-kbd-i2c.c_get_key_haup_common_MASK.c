
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct IR_i2c {TYPE_1__* rc; int c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,char*,int,int,int,...) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(struct IR_i2c *VAR_4, enum rc_proto *VAR_5,
          u32 *VAR_6, u8 *VAR_7, int VAR_8)
{
 unsigned char VAR_9[6];
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


 if (VAR_8 != FUNC_4(VAR_4->c, VAR_9, VAR_8))
  return -VAR_0;

 if (VAR_9[0] & 0x80) {
  int VAR_17 = (VAR_8 == 6) ? 3 : 0;


  VAR_10 = (VAR_9[VAR_17] >> 7) & 1;
  VAR_11 = (VAR_9[VAR_17] >> 6) & 1;
  VAR_12 = (VAR_9[VAR_17] >> 5) & 1;
  VAR_13 = VAR_9[VAR_17] & 0x1f;
  VAR_14 = (VAR_9[VAR_17+1] >> 2) & 0x3f;






  if (!VAR_10)

   return 0;


  VAR_15 = (VAR_10 << 12) | (VAR_12 << 11) | (VAR_13 << 6) | VAR_14;
  if ((VAR_15 & 0x1fff) == 0x1fff)
   return 0;

  if (!VAR_11)
   VAR_14 += 64;

  FUNC_2(&VAR_4->rc->dev,
   "ir hauppauge (rc5): s%d r%d t%d dev=%d code=%d\n",
   VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

  *VAR_5 = VAR_1;
  *VAR_6 = FUNC_0(VAR_13, VAR_14);
  *VAR_7 = VAR_12;

  return 1;
 } else if (VAR_8 == 6 && (VAR_9[0] & 0x40)) {
  VAR_14 = VAR_9[4];
  VAR_13 = VAR_9[3];
  VAR_16 = FUNC_3(VAR_9 + 1);

  if (VAR_16 == 0x800f) {
   *VAR_7 = (VAR_13 & 0x80) != 0;
   *VAR_5 = VAR_3;
   VAR_13 &= 0x7f;
   FUNC_2(&VAR_4->rc->dev,
    "ir hauppauge (rc6-mce): t%d vendor=%d dev=%d code=%d\n",
    *VAR_7, VAR_16, VAR_13, VAR_14);
  } else {
   *VAR_7 = 0;
   *VAR_5 = VAR_2;
   FUNC_2(&VAR_4->rc->dev,
    "ir hauppauge (rc6-6a-32): vendor=%d dev=%d code=%d\n",
    VAR_16, VAR_13, VAR_14);
  }

  *VAR_6 = FUNC_1(VAR_16, VAR_13, VAR_14);

  return 1;
 }

 return 0;
}
