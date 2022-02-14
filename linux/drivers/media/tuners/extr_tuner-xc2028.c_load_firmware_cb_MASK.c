
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc2028_data {int state; int fname; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {struct xc2028_data* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,struct firmware const*) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(const struct firmware *VAR_2,
        void *VAR_3)
{
 struct dvb_frontend *VAR_4 = VAR_3;
 struct xc2028_data *VAR_5 = VAR_4->tuner_priv;
 int VAR_6;

 FUNC_2("request_firmware_nowait(): %s\n", VAR_2 ? "OK" : "error");
 if (!VAR_2) {
  FUNC_3("Could not load firmware %s.\n", VAR_5->fname);
  VAR_5->state = VAR_1;
  return;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_2);

 FUNC_1(VAR_2);

 if (VAR_6 < 0)
  return;
 VAR_5->state = VAR_0;
}
