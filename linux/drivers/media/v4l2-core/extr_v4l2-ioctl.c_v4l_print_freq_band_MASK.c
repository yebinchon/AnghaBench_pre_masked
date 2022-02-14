
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {int modulation; int rangehigh; int rangelow; int capability; int index; int type; int tuner; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_frequency_band *VAR_2 = VAR_0;

 FUNC_0("tuner=%u, type=%u, index=%u, capability=0x%x, rangelow=%u, rangehigh=%u, modulation=0x%x\n",
   VAR_2->tuner, VAR_2->type, VAR_2->index,
   VAR_2->capability, VAR_2->rangelow,
   VAR_2->rangehigh, VAR_2->modulation);
}
