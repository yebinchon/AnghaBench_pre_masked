
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tuner_simple_priv {int type; size_t nr; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
 unsigned int* VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_1, u8 *VAR_2,
      const u32 VAR_3,
      const u32 VAR_4,
      const u32 VAR_5)
{
 struct tuner_simple_priv *VAR_6 = VAR_1->tuner_priv;

 switch (VAR_6->type) {
 case 130:
 case 131:
  if (VAR_5 == 8000000 &&
      VAR_4 >= 158870000)
   VAR_2[3] |= 0x08;
  break;
 case 129:

  VAR_2[3] |= (VAR_4 < 161000000) ? 1 :
     (VAR_4 < 444000000) ? 2 : 4;


  if (VAR_5 == 8000000)
   VAR_2[3] |= 1 << 3;
  break;
 case 128:
 case 132:
 {
  unsigned int VAR_7;

  if (VAR_0[VAR_6->nr])
   VAR_7 = VAR_0[VAR_6->nr];
  else
   switch (VAR_3) {
   case 133:
    VAR_7 = 1;
    break;
   case 134:
   default:
    VAR_7 = 0;
    break;
   }
  FUNC_0(VAR_1, &VAR_2[2], &VAR_2[3], VAR_7);
  break;
 }
 default:
  break;
 }
}
