
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct em28xx_v4l2 {int vinmode; int vinctl; int vbi_width; int vbi_height; int norm; TYPE_1__* format; } ;
struct em28xx {int is_em25xx; struct em28xx_v4l2* v4l2; } ;
struct TYPE_2__ {int reg; } ;


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
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (struct em28xx*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_10)
{
 int VAR_11;
 u8 VAR_12, VAR_13;
 struct em28xx_v4l2 *VAR_14 = VAR_10->v4l2;

 VAR_12 = VAR_14->format->reg;
 if (!VAR_10->is_em25xx)
  VAR_12 |= 0x20;
 VAR_11 = FUNC_1(VAR_10, VAR_2, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_0, VAR_14->vinmode);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_13 = VAR_14->vinctl;
 if (FUNC_0(VAR_10) == 1) {
  VAR_13 |= VAR_7;
  FUNC_1(VAR_10, VAR_3, 0x00);
  FUNC_1(VAR_10, VAR_5,
     VAR_14->vbi_width / 4);
  FUNC_1(VAR_10, VAR_6, VAR_14->vbi_height);
  if (VAR_14->norm & VAR_8) {

   FUNC_1(VAR_10, VAR_4, 0x09);
  } else if (VAR_14->norm & VAR_9) {

   FUNC_1(VAR_10, VAR_4, 0x07);
  }
 }

 return FUNC_1(VAR_10, VAR_1, VAR_13);
}
