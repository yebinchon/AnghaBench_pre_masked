
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct zynq_pinctrl {scalar_t__ pctrl_offset; int syscon; } ;
struct pinctrl_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct zynq_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_11,
    unsigned int VAR_12,
    unsigned long *VAR_13,
    unsigned int VAR_14)
{
 int VAR_15, VAR_16;
 u32 VAR_17;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 struct zynq_pinctrl *VAR_20 = FUNC_3(VAR_11);

 if (VAR_12 >= VAR_2)
  return -VAR_1;

 VAR_16 = FUNC_4(VAR_20->syscon, VAR_20->pctrl_offset + (4 * VAR_12), &VAR_17);
 if (VAR_16)
  return -VAR_0;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  unsigned int VAR_21 = FUNC_2(VAR_13[VAR_15]);
  unsigned int VAR_22 = FUNC_1(VAR_13[VAR_15]);

  switch (VAR_21) {
  case 131:
   VAR_18 = VAR_6;
   break;
  case 132:
   VAR_19 = VAR_8;
   break;
  case 133:
   VAR_17 &= ~(VAR_6 | VAR_8);
   break;
  case 128:
   if (VAR_22)
    VAR_17 |= VAR_7;
   else
    VAR_17 &= ~VAR_7;

   break;
  case 130:
   if (VAR_22 <= VAR_10 || VAR_22 >= VAR_9) {
    FUNC_0(VAR_11->dev,
      "unsupported IO standard '%u'\n",
      VAR_21);
    break;
   }
   VAR_17 &= ~VAR_4;
   VAR_17 |= VAR_22 << VAR_5;
   break;
  case 129:
   if (VAR_22)
    VAR_17 |= VAR_3;
   else
    VAR_17 &= ~VAR_3;

   break;
  default:
   FUNC_0(VAR_11->dev,
     "unsupported configuration parameter '%u'\n",
     VAR_21);
   continue;
  }
 }

 if (VAR_19 || VAR_18) {
  VAR_17 &= ~(VAR_6 | VAR_8);
  VAR_17 |= VAR_19 | VAR_18;
 }

 VAR_16 = FUNC_5(VAR_20->syscon, VAR_20->pctrl_offset + (4 * VAR_12), VAR_17);
 if (VAR_16)
  return -VAR_0;

 return 0;
}
