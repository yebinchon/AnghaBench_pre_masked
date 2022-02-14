
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ace {int whotype; int flag; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;





__attribute__((used)) static short
FUNC_1(struct nfs4_ace *VAR_6)
{
 switch (VAR_6->whotype) {
  case 129:
   return (VAR_6->flag & VAR_5 ?
     VAR_0 : VAR_3);
  case 128:
   return VAR_4;
  case 130:
   return VAR_1;
  case 131:
   return VAR_2;
 }
 FUNC_0();
 return -1;
}
