
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int * data; int i2c_props; scalar_t__ standby; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void FUNC_10(struct dvb_frontend *VAR_4)
{
 struct tda9887_priv *VAR_5 = VAR_4->analog_demod_priv;
 int VAR_6;

 FUNC_1(VAR_5->data,0,sizeof(VAR_5->data));
 FUNC_5(VAR_4);
 VAR_5->data[1] |= VAR_1;
 VAR_5->data[1] |= VAR_2;

 FUNC_3(VAR_4);
 FUNC_4(VAR_4);

 if (VAR_5->standby)
  VAR_5->data[1] |= VAR_0;

 FUNC_7("writing: b=0x%02x c=0x%02x e=0x%02x\n",
    VAR_5->data[1], VAR_5->data[2], VAR_5->data[3]);
 if (VAR_3 > 1)
  FUNC_0(VAR_4, VAR_5->data);

 if (4 != (VAR_6 = FUNC_8(&VAR_5->i2c_props,VAR_5->data,4)))
  FUNC_9("i2c i/o error: rc == %d (should be 4)\n", VAR_6);

 if (VAR_3 > 2) {
  FUNC_2(1000);
  FUNC_6(VAR_4);
 }
}
