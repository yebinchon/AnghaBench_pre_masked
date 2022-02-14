
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pinctrl_dev {int dummy; } ;
struct pcs_function {unsigned int nconfs; TYPE_1__* conf; } ;
struct pcs_device {unsigned int width; unsigned int (* read ) (scalar_t__) ;scalar_t__ base; int (* write ) (unsigned int,scalar_t__) ;} ;
struct TYPE_2__ {int param; unsigned int mask; unsigned int enable; unsigned int disable; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct pinctrl_dev*,unsigned int,struct pcs_function**) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 unsigned int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct pcs_device* FUNC_5 (struct pinctrl_dev*) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_2,
    unsigned VAR_3, unsigned long *VAR_4,
    unsigned VAR_5)
{
 struct pcs_device *VAR_6 = FUNC_5(VAR_2);
 struct pcs_function *VAR_7;
 unsigned VAR_8 = 0, VAR_9 = 0, VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_2, VAR_3, &VAR_7);
 if (VAR_12)
  return VAR_12;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  for (VAR_10 = 0; VAR_10 < VAR_7->nconfs; VAR_10++) {
   if (FUNC_4(VAR_4[VAR_14])
    != VAR_7->conf[VAR_10].param)
    continue;

   VAR_8 = VAR_3 * (VAR_6->width / VAR_0);
   VAR_11 = VAR_6->read(VAR_6->base + VAR_8);
   VAR_13 = FUNC_3(VAR_4[VAR_14]);
   switch (VAR_7->conf[VAR_10].param) {

   case 131:
   case 132:
   case 128:
   case 129:
    VAR_9 = FUNC_0(VAR_7->conf[VAR_10].mask) - 1;
    VAR_11 &= ~VAR_7->conf[VAR_10].mask;
    VAR_11 |= (VAR_13 << VAR_9) & VAR_7->conf[VAR_10].mask;
    break;

   case 135:
    FUNC_2(VAR_2, VAR_3);
    break;
   case 134:
   case 133:
    if (VAR_13)
     FUNC_2(VAR_2, VAR_3);

   case 130:
    VAR_11 &= ~VAR_7->conf[VAR_10].mask;
    if (VAR_13)
     VAR_11 |= VAR_7->conf[VAR_10].enable;
    else
     VAR_11 |= VAR_7->conf[VAR_10].disable;
    break;
   default:
    return -VAR_1;
   }
   VAR_6->write(VAR_11, VAR_6->base + VAR_8);

   break;
  }
  if (VAR_10 >= VAR_7->nconfs)
   return -VAR_1;
 }

 return 0;
}
