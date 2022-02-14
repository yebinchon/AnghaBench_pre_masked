
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


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
 int FUNC_0 (struct em28xx*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_6, u64 *VAR_7)
{
 struct em28xx_IR *VAR_8 = VAR_6->priv;
 struct em28xx *VAR_9 = VAR_8->dev;


 if (*VAR_7 & VAR_4) {
  VAR_9->board.xclk |= VAR_2;
  VAR_8->full_code = 1;
  *VAR_7 = VAR_4;
 } else if (*VAR_7 & VAR_3) {
  VAR_9->board.xclk &= ~VAR_2;
  VAR_8->full_code = 1;
  *VAR_7 = VAR_3;
 } else if (*VAR_7 & VAR_5) {
  *VAR_7 = VAR_5;
 } else {
  *VAR_7 = VAR_8->rc_proto;
  return -VAR_0;
 }
 FUNC_0(VAR_9, VAR_1, VAR_9->board.xclk,
         VAR_2);

 VAR_8->rc_proto = *VAR_7;

 return 0;
}
