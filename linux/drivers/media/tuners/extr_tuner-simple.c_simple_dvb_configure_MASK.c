
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tunertype {int stepsize; int name; } ;
struct tuner_simple_priv {struct tunertype* tun; int type; } ;
struct tuner_params {int iffreq; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,struct tuner_params*,int*,int*,int*) ;
 int FUNC_1 (struct dvb_frontend*,int*,int const,int const,int const) ;
 struct tuner_params* FUNC_2 (struct dvb_frontend*,int ) ;
 int FUNC_3 (char*,int ,int,int,int,int,int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static u32 FUNC_5(struct dvb_frontend *VAR_2, u8 *VAR_3,
    const u32 VAR_4,
    const u32 VAR_5,
    const u32 VAR_6)
{

 struct tuner_simple_priv *VAR_7 = VAR_2->tuner_priv;
 struct tunertype *VAR_8 = VAR_7->tun;
 struct tuner_params *VAR_9;
 u8 VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13;
 u32 VAR_14 = VAR_5 / 62500;

 if (!VAR_8->stepsize) {


  FUNC_4("attempt to treat tuner %d (%s) as digital tuner without stepsize defined.\n",
     VAR_7->type, VAR_7->tun->name);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_2, VAR_0);
 VAR_13 = FUNC_0(VAR_2, VAR_9, &VAR_14, &VAR_10, &VAR_11);
 if (VAR_13 < 0)
  return 0;

 VAR_12 = ((VAR_14 + VAR_9->iffreq) * 62500 + VAR_1 +
        VAR_8->stepsize/2) / VAR_8->stepsize;

 VAR_3[0] = VAR_12 >> 8;
 VAR_3[1] = VAR_12 & 0xff;
 VAR_3[2] = VAR_10;
 VAR_3[3] = VAR_11;

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_3("%s: div=%d | buf=0x%02x,0x%02x,0x%02x,0x%02x\n",
    VAR_8->name, VAR_12, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);


 return (VAR_12 * VAR_8->stepsize) - VAR_9->iffreq;
}
