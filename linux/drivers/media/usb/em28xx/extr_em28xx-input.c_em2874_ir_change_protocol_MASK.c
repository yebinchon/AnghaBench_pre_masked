
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rc_dev {struct em28xx_IR* priv; } ;
struct em28xx_IR {int full_code; int rc_proto; struct em28xx* dev; } ;
struct TYPE_2__ {int xclk; } ;
struct em28xx {TYPE_1__ board; } ;


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
 int FUNC_0 (struct em28xx*,int ,int ,int ) ;
 int FUNC_1 (struct em28xx*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_12, u64 *VAR_13)
{
 struct em28xx_IR *VAR_14 = VAR_12->priv;
 struct em28xx *VAR_15 = VAR_14->dev;
 u8 VAR_16 = VAR_3;


 if (*VAR_13 & VAR_9) {
  VAR_15->board.xclk |= VAR_7;
  VAR_14->full_code = 1;
  *VAR_13 = VAR_9;
 } else if (*VAR_13 & VAR_8) {
  VAR_15->board.xclk &= ~VAR_7;
  VAR_16 = VAR_1 | VAR_2;
  VAR_14->full_code = 1;
  *VAR_13 = VAR_8;
 } else if (*VAR_13 & VAR_10) {
  VAR_15->board.xclk |= VAR_7;
  VAR_16 = VAR_4;
  VAR_14->full_code = 1;
  *VAR_13 = VAR_10;
 } else if (*VAR_13 & VAR_11) {
  *VAR_13 = VAR_11;
 } else {
  *VAR_13 = VAR_14->rc_proto;
  return -VAR_0;
 }
 FUNC_1(VAR_15, VAR_5, &VAR_16, 1);
 FUNC_0(VAR_15, VAR_6, VAR_15->board.xclk,
         VAR_7);

 VAR_14->rc_proto = *VAR_13;

 return 0;
}
