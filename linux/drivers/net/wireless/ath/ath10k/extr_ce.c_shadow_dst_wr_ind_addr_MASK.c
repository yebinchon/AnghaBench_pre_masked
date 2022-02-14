
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ce_pipe {int id; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct ath10k *VAR_0,
      struct ath10k_ce_pipe *VAR_1)
{
 u32 VAR_2 = VAR_1->id;
 u32 VAR_3 = 0;

 switch (VAR_2) {
 case 1:
  VAR_3 = 0x00032034;
  break;
 case 2:
  VAR_3 = 0x00032038;
  break;
 case 5:
  VAR_3 = 0x00032044;
  break;
 case 7:
  VAR_3 = 0x0003204C;
  break;
 case 8:
  VAR_3 = 0x00032050;
  break;
 case 9:
  VAR_3 = 0x00032054;
  break;
 case 10:
  VAR_3 = 0x00032058;
  break;
 case 11:
  VAR_3 = 0x0003205C;
  break;
 default:
  FUNC_0(VAR_0, "invalid CE id: %d", VAR_2);
  break;
 }

 return VAR_3;
}
