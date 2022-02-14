
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda827x_priv {int lpsel; int sgIF; } ;
struct dvb_frontend {struct tda827x_priv* tuner_priv; } ;
struct analog_parameters {int std; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_8,
       struct analog_parameters *VAR_9)
{
 struct tda827x_priv *VAR_10 = VAR_8->tuner_priv;
 char *VAR_11;

 VAR_10->lpsel = 0;
 if (VAR_9->std & VAR_3) {
  VAR_10->sgIF = 92;
  VAR_10->lpsel = 1;
  VAR_11 = "MN";
 } else if (VAR_9->std & VAR_0) {
  VAR_10->sgIF = 108;
  VAR_11 = "B";
 } else if (VAR_9->std & VAR_2) {
  VAR_10->sgIF = 124;
  VAR_11 = "GH";
 } else if (VAR_9->std & VAR_4) {
  VAR_10->sgIF = 124;
  VAR_11 = "I";
 } else if (VAR_9->std & VAR_1) {
  VAR_10->sgIF = 124;
  VAR_11 = "DK";
 } else if (VAR_9->std & VAR_5) {
  VAR_10->sgIF = 124;
  VAR_11 = "L";
 } else if (VAR_9->std & VAR_6) {
  VAR_10->sgIF = 20;
  VAR_11 = "LC";
 } else {
  VAR_10->sgIF = 124;
  VAR_11 = "xx";
 }

 if (VAR_9->mode == VAR_7) {
  VAR_10->sgIF = 88;
  FUNC_0("setting tda827x to radio FM\n");
 } else
  FUNC_0("setting tda827x to system %s\n", VAR_11);
}
