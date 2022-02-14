
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxl111sf_tuner_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_tuner_state*,int*,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct mxl111sf_tuner_state *VAR_3 = VAR_1->tuner_priv;
 int VAR_4, VAR_5, VAR_6;

 *VAR_2 = 0;

 VAR_6 = FUNC_0(VAR_3, &VAR_4, &VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;
 FUNC_2("%s%s", VAR_4 ? "rf locked " : "",
   VAR_5 ? "ref locked" : "");

 if ((VAR_4) || (VAR_5))
  *VAR_2 |= VAR_0;
fail:
 return VAR_6;
}
