
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,unsigned int,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_6,
    unsigned VAR_7, unsigned long *VAR_8,
    unsigned VAR_9)
{
 u16 VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_10 = FUNC_3(VAR_8[VAR_12]);
  VAR_11 = FUNC_2(VAR_8[VAR_12]);

  FUNC_4("PMX CFG###### ATLAS7 PIN#%d [%s] CONFIG PARAM:%d ARG:%d >>>>>\n",
   VAR_7, VAR_5[VAR_7].name, VAR_10, VAR_11);
  switch (VAR_10) {
  case 130:
   VAR_13 = FUNC_1(VAR_6,
       VAR_7, VAR_4);
   if (VAR_13)
    return VAR_13;
   break;

  case 131:
   VAR_13 = FUNC_1(VAR_6,
       VAR_7, VAR_3);
   if (VAR_13)
    return VAR_13;
   break;

  case 128:
   VAR_13 = FUNC_1(VAR_6,
       VAR_7, VAR_1);
   if (VAR_13)
    return VAR_13;
   break;
  case 132:
   VAR_13 = FUNC_1(VAR_6,
       VAR_7, VAR_2);
   if (VAR_13)
    return VAR_13;
   break;

  case 129:
   VAR_13 = FUNC_0(VAR_6,
       VAR_7, VAR_11);
   if (VAR_13)
    return VAR_13;
   break;
  default:
   return -VAR_0;
  }
  FUNC_4("PMX CFG###### ATLAS7 PIN#%d [%s] CONFIG PARAM:%d ARG:%d <<<<\n",
   VAR_7, VAR_5[VAR_7].name, VAR_10, VAR_11);
 }

 return 0;
}
