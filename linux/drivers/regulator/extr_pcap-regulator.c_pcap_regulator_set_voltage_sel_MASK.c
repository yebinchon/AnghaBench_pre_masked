
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct pcap_regulator {int index; int reg; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int,unsigned int) ;
 void* FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct regulator_dev*) ;
 struct pcap_regulator* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
       unsigned VAR_3)
{
 struct pcap_regulator *VAR_4 = &VAR_1[FUNC_2(VAR_2)];
 void *VAR_5 = FUNC_1(VAR_2);


 if (VAR_2->desc->n_voltages == 1)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_4->reg,
     (VAR_2->desc->n_voltages - 1) << VAR_4->index,
     VAR_3 << VAR_4->index);
}
