
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cpcap_coulomb_counter_data {int sample; int accumulator; int offset; } ;
struct cpcap_battery_ddata {scalar_t__ vendor; int reg; } ;
typedef int s16 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cpcap_battery_ddata*,int,int,int) ;
 int FUNC_2 (int ,int ,int*,int ) ;
 void* FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct cpcap_battery_ddata *VAR_2,
          struct cpcap_coulomb_counter_data *VAR_3)
{
 u16 VAR_4[7];
 int VAR_5;

 VAR_3->sample = 0;
 VAR_3->accumulator = 0;
 VAR_3->offset = 0;


 VAR_5 = FUNC_2(VAR_2->reg, VAR_0,
     VAR_4, FUNC_0(VAR_4));
 if (VAR_5)
  return 0;


 VAR_3->sample = (VAR_4[1] & 0x0fff) << 16;
 VAR_3->sample |= VAR_4[0];
 if (VAR_2->vendor == VAR_1)
  VAR_3->sample = FUNC_3(24, VAR_3->sample);


 VAR_3->accumulator = ((s16)VAR_4[3]) << 16;
 VAR_3->accumulator |= VAR_4[2];





 VAR_3->offset = VAR_4[4];
 VAR_3->offset = FUNC_3(VAR_3->offset, 9);

 return FUNC_1(VAR_2,
           VAR_3->sample,
           VAR_3->accumulator,
           VAR_3->offset);
}
