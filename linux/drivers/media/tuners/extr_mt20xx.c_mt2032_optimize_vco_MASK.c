
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int i2c_props; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0,int VAR_1,int VAR_2)
{
 struct microtune_priv *VAR_3 = VAR_0->tuner_priv;
 unsigned char VAR_4[2];
 int VAR_5;

 VAR_4[0]=0x0f;
 FUNC_3(&VAR_3->i2c_props,VAR_4,1);
 FUNC_2(&VAR_3->i2c_props,VAR_4,1);
 FUNC_1("mt2032 Reg.F=0x%02x\n",VAR_4[0]);
 VAR_5=VAR_4[0]&0x07;

 if(VAR_5 ==0) return VAR_2;
 if(VAR_5 ==1) return VAR_2;

 if(VAR_5==2) {
  if(VAR_1==0)
   return VAR_2;
  else VAR_1--;
 }
 else {
  if(VAR_1<4)
   VAR_1++;
  else
   return VAR_2;
 }

 FUNC_1("mt2032 optimize_vco: sel=%d\n",VAR_1);

 VAR_4[0]=0x0f;
 VAR_4[1]=VAR_1;
 FUNC_3(&VAR_3->i2c_props,VAR_4,2);
 VAR_2=FUNC_0(VAR_0);
 return VAR_2;
}
