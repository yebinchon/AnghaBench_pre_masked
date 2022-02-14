
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
 case 0:
  VAR_3 = 0x00032000;
  break;
 case 3:
  VAR_3 = 0x0003200C;
  break;
 case 4:
  VAR_3 = 0x00032010;
  break;
 case 5:
  VAR_3 = 0x00032014;
  break;
 case 7:
  VAR_3 = 0x0003201C;
  break;
 default:
  FUNC_0(VAR_0, "invalid CE id: %d", VAR_2);
  break;
 }
 return VAR_3;
}
