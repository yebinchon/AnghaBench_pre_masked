
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_battery_ddata {scalar_t__ vendor; int reg; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cpcap_battery_ddata*,int,int,int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cpcap_battery_ddata *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 s32 VAR_8 = 1;
 s16 VAR_9;

 if (VAR_4->vendor == VAR_2)
  VAR_8 = 4;


 VAR_7 = FUNC_1(VAR_4->reg, VAR_0, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if ((VAR_4->vendor == VAR_3) && (VAR_5 > 0x2000))
  VAR_5 = VAR_5 | 0xc000;

 VAR_6 = (s16)VAR_5;


 VAR_7 = FUNC_1(VAR_4->reg, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 < 0x200)
  VAR_9 = VAR_5;
 else
  VAR_9 = VAR_5 | 0xfc00;

 return FUNC_0(VAR_4, VAR_8, VAR_6, VAR_9);
}
