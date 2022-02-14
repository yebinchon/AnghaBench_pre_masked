
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_priv {int num_sensors; int tm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tsens_priv *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_5->num_sensors - 1, 0);
 VAR_8 <<= VAR_2;
 VAR_8 |= VAR_1;

 VAR_6 = FUNC_1(VAR_5->tm_map, VAR_0, &VAR_7);
 if (VAR_6)
  return;

 VAR_7 &= ~VAR_8;

 if (VAR_5->num_sensors > 1)
  VAR_7 &= ~VAR_3;
 else
  VAR_7 &= ~VAR_4;

 FUNC_2(VAR_5->tm_map, VAR_0, VAR_7);
}
