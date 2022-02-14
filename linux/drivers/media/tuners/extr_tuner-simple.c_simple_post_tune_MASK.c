
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tuner_simple_priv {int type; int i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int,int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_3, u8 *VAR_4,
       u16 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct tuner_simple_priv *VAR_8 = VAR_3->tuner_priv;
 int VAR_9;

 switch (VAR_8->type) {
 case 130:
  FUNC_1(VAR_3, VAR_6, 0x20);
  break;
 case 128:
  FUNC_1(VAR_3, VAR_6, 0x60);
  break;
 case 129:
 {

  unsigned long VAR_10 = VAR_2 + FUNC_0(1);
  u8 VAR_11 = 0;


  for (;;) {
   if (FUNC_2(VAR_2, VAR_10))
    return 0;
   VAR_9 = FUNC_4(&VAR_8->i2c_props,
       &VAR_11, 1);
   if (1 != VAR_9) {
    FUNC_6("i2c i/o read error: rc == %d (should be 1)\n",
        VAR_9);
    break;
   }
   if (VAR_11 & VAR_1)
    break;
   FUNC_7(10);
  }


  VAR_6 &= ~VAR_0;
  VAR_4[0] = (VAR_5>>8) & 0x7f;
  VAR_4[1] = VAR_5 & 0xff;
  VAR_4[2] = VAR_6;
  VAR_4[3] = VAR_7;
  FUNC_3("tv 0x%02x 0x%02x 0x%02x 0x%02x\n",
     VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);

  VAR_9 = FUNC_5(&VAR_8->i2c_props, VAR_4, 4);
  if (4 != VAR_9)
   FUNC_6("i2c i/o error: rc == %d (should be 4)\n",
       VAR_9);
  break;
 }
 }

 return 0;
}
