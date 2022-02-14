
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mxl111sf_tuner_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl111sf_tuner_state*,int ,int*) ;
 int FUNC_1 (struct mxl111sf_tuner_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct mxl111sf_tuner_state *VAR_4 = VAR_2->tuner_priv;
 u8 VAR_5, VAR_6;
 int VAR_7;

 *VAR_3 = 0;

 VAR_7 = FUNC_1(VAR_4, 0x00, 0x02);
 if (FUNC_2(VAR_7))
  goto fail;
 VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (FUNC_2(VAR_7))
  goto fail;
 VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_6);
 if (FUNC_2(VAR_7))
  goto fail;

 *VAR_3 = VAR_5 | ((VAR_6 & 0x07) << 8);
fail:
 VAR_7 = FUNC_1(VAR_4, 0x00, 0x00);
 FUNC_2(VAR_7);

 return VAR_7;
}
