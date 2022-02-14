
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct npc_mcam {int pf_offset; int nixlf_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct npc_mcam *VAR_5,
        u16 VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_0(VAR_6);
 int VAR_10;


 if (VAR_9 && !(VAR_6 & VAR_4)) {

  VAR_9--;
  VAR_10 = VAR_5->pf_offset + (VAR_9 * VAR_3);



  if (VAR_8 == VAR_0)
   return VAR_10;
  else if (VAR_8 == VAR_1)
   return VAR_10 + 1;
 }

 return (VAR_5->nixlf_offset + (VAR_7 * VAR_2));
}
