
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pinctrl_dev {int dummy; } ;
struct atlas7_pmx {TYPE_1__* pctl_data; } ;
struct atlas7_pad_config {size_t type; } ;
struct TYPE_2__ {struct atlas7_pad_config* confs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pinctrl_dev*,size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 struct atlas7_pmx* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (char*,size_t,size_t,size_t,char*) ;
 int FUNC_4 (char*,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 struct atlas7_pmx *VAR_5 = FUNC_2(VAR_2);
 struct atlas7_pad_config *VAR_6 = &VAR_5->pctl_data->confs[VAR_3];
 u32 VAR_7 = VAR_6->type;
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6->type, VAR_4);
 if (VAR_0 == VAR_8) {
  FUNC_4("Pad#%d type[%d] doesn't support ds current[%d]!\n",
  VAR_3, VAR_7, VAR_4);
  return -VAR_1;
 }

 VAR_9 = FUNC_0(VAR_2,
      VAR_3, VAR_8);
 FUNC_3("PIN_CFG ### SET PIN#%d DS:%d MA:%d == %s ####\n",
  VAR_3, VAR_8, VAR_4, VAR_9?"FAILED":"OK");
 return VAR_9;
}
