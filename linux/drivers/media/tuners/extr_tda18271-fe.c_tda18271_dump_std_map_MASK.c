
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_std_map {int dummy; } ;
struct tda18271_priv {struct tda18271_std_map std; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_15)
{
 struct tda18271_priv *VAR_16 = VAR_15->tuner_priv;
 struct tda18271_std_map *VAR_17 = &VAR_16->std;

 FUNC_1("========== STANDARD MAP SETTINGS ==========\n");
 FUNC_0(VAR_11, "  fm  ");
 FUNC_0(VAR_1, "atv b ");
 FUNC_0(VAR_2, "atv dk");
 FUNC_0(VAR_3, "atv gh");
 FUNC_0(VAR_4, "atv i ");
 FUNC_0(VAR_5, "atv l ");
 FUNC_0(VAR_6, "atv l'");
 FUNC_0(VAR_7, "atv mn");
 FUNC_0(VAR_0, "atsc 6");
 FUNC_0(VAR_8, "dvbt 6");
 FUNC_0(VAR_9, "dvbt 7");
 FUNC_0(VAR_10, "dvbt 8");
 FUNC_0(VAR_12, "qam 6 ");
 FUNC_0(VAR_13, "qam 7 ");
 FUNC_0(VAR_14, "qam 8 ");

 return 0;
}
