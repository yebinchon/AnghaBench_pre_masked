
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {TYPE_1__* desc; } ;
struct pcap_regulator {int index; int reg; } ;
struct TYPE_2__ {int n_voltages; } ;


 int FUNC_0 (void*,int ,int*) ;
 void* FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct regulator_dev*) ;
 struct pcap_regulator* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct pcap_regulator *VAR_2 = &VAR_0[FUNC_2(VAR_1)];
 void *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4;

 if (VAR_1->desc->n_voltages == 1)
  return 0;

 FUNC_0(VAR_3, VAR_2->reg, &VAR_4);
 VAR_4 = ((VAR_4 >> VAR_2->index) & (VAR_1->desc->n_voltages - 1));
 return VAR_4;
}
