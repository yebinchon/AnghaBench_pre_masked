
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_pinctrl {scalar_t__ pctrl_offset; int syscon; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum zynq_io_standards { ____Placeholder_zynq_io_standards } zynq_io_standards ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 struct zynq_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int VAR_8 ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_9,
    unsigned int VAR_10,
    unsigned long *VAR_11)
{
 u32 VAR_12;
 int VAR_13;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = FUNC_1(*VAR_11);
 struct zynq_pinctrl *VAR_16 = FUNC_2(VAR_9);

 if (VAR_10 >= VAR_3)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_16->syscon, VAR_16->pctrl_offset + (4 * VAR_10), &VAR_12);
 if (VAR_13)
  return -VAR_1;

 switch (VAR_15) {
 case 131:
  if (!(VAR_12 & VAR_5))
   return -VAR_0;
  VAR_14 = 1;
  break;
 case 132:
  if (!(VAR_12 & VAR_7))
   return -VAR_0;
  VAR_14 = 1;
  break;
 case 133:
  if (VAR_12 & VAR_5 || VAR_12 & VAR_7)
   return -VAR_0;
  break;
 case 128:
  VAR_14 = !!(VAR_12 & VAR_6);
  break;
 case 129:
 {
  enum zynq_io_standards VAR_17 = FUNC_4(VAR_12);

  if (VAR_17 != VAR_8)
   return -VAR_0;
  if (!(VAR_12 & VAR_4))
   return -VAR_0;
  VAR_14 = !!(VAR_12 & VAR_4);
  break;
 }
 case 130:
  VAR_14 = FUNC_4(VAR_12);
  break;
 default:
  return -VAR_2;
 }

 *VAR_11 = FUNC_0(VAR_15, VAR_14);
 return 0;
}
