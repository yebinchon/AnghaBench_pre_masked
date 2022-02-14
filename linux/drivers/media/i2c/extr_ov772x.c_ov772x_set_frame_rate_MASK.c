
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ov772x_win_size {unsigned int sizeimage; } ;
struct ov772x_priv {int regmap; int clk; } ;
struct ov772x_color_format {int com7; } ;
struct TYPE_3__ {unsigned int mult; int com4; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (unsigned long,unsigned int) ;

 int VAR_4 ;


 unsigned int FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ov772x_priv *VAR_6,
     unsigned int VAR_7,
     const struct ov772x_color_format *VAR_8,
     const struct ov772x_win_size *VAR_9)
{
 unsigned long VAR_10 = FUNC_4(VAR_6->clk);
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 u8 VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18;


 switch (VAR_8->com7 & VAR_4) {
 case 130:
  VAR_12 = VAR_9->sizeimage;
  break;
 case 129:
 case 128:
 default:
  VAR_12 = VAR_9->sizeimage * 2;
  break;
 }

 VAR_13 = VAR_7 * VAR_12;
 VAR_11 = ~0L;
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_5); VAR_15++) {
  unsigned int VAR_19 = VAR_5[VAR_15].mult;
  unsigned int VAR_20 = VAR_19 * VAR_10;
  unsigned int VAR_21;
  unsigned int VAR_22;

  if (VAR_20 < VAR_13)
   continue;

  VAR_22 = FUNC_2(VAR_20, VAR_13);
  VAR_21 = FUNC_2(VAR_10 * VAR_19, VAR_22);
  VAR_14 = FUNC_3(VAR_13 - VAR_21);
  if (VAR_14 < VAR_11) {
   VAR_11 = VAR_14;
   VAR_16 = FUNC_1(VAR_22);
   VAR_17 = VAR_5[VAR_15].com4;
  }
 }

 VAR_18 = FUNC_5(VAR_6->regmap, VAR_2, VAR_17 | VAR_3);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_6->regmap, VAR_0, VAR_16 | VAR_1);
 if (VAR_18 < 0)
  return VAR_18;

 return 0;
}
