
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_fl_act_head {unsigned int len_lw; int jump_id; } ;




 unsigned int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_1(char *VAR_1, char *VAR_2, int VAR_3,
       bool *VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6;
 struct nfp_fl_act_head *VAR_7;
 u8 VAR_8 = 0;

 while (VAR_5 < VAR_3) {
  VAR_7 = (struct nfp_fl_act_head *)&VAR_2[VAR_5];
  VAR_6 = VAR_7->len_lw << VAR_0;
  VAR_8 = VAR_7->jump_id;

  switch (VAR_8) {
  case 128:
   if (VAR_4)
    *VAR_4 = 1;

  case 129:
   FUNC_0(VAR_1 + VAR_5, VAR_2 + VAR_5, VAR_6);
   break;
  default:
   return VAR_5;
  }

  VAR_5 += VAR_6;
 }

 return VAR_5;
}
