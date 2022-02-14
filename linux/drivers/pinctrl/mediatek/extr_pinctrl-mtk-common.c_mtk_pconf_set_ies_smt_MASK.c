
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int (* spec_ies_smt_set ) (int ,unsigned int,int ,int,int) ;unsigned int ies_offset; unsigned int smt_offset; int port_align; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__,struct mtk_pinctrl*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (scalar_t__,struct mtk_pinctrl*) ;
 scalar_t__ FUNC_3 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_4 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_5 (int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,unsigned int,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct mtk_pinctrl *VAR_4, unsigned VAR_5,
  int VAR_6, enum pin_config_param VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;





 if (!VAR_4->devdata->spec_ies_smt_set &&
  VAR_4->devdata->ies_offset == VAR_1 &&
   VAR_7 == VAR_2)
  return -VAR_0;

 if (!VAR_4->devdata->spec_ies_smt_set &&
  VAR_4->devdata->smt_offset == VAR_1 &&
   VAR_7 == VAR_3)
  return -VAR_0;





 if (VAR_4->devdata->spec_ies_smt_set) {
  return VAR_4->devdata->spec_ies_smt_set(FUNC_4(VAR_4, VAR_5),
   VAR_5, VAR_4->devdata->port_align, VAR_6, VAR_7);
 }

 VAR_10 = FUNC_0(VAR_5 & 0xf);

 if (VAR_7 == VAR_2)
  VAR_9 = VAR_4->devdata->ies_offset;
 else
  VAR_9 = VAR_4->devdata->smt_offset;

 if (VAR_6)
  VAR_8 = FUNC_2(FUNC_3(VAR_4, VAR_5) + VAR_9, VAR_4);
 else
  VAR_8 = FUNC_1(FUNC_3(VAR_4, VAR_5) + VAR_9, VAR_4);

 FUNC_5(FUNC_4(VAR_4, VAR_5), VAR_8, VAR_10);
 return 0;
}
