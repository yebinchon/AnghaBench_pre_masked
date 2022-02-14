
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl5005s_state {int Mode; int RF_LO; int RF_IN; int TG_LO; scalar_t__ IF_Mode; int Chan_Bandwidth; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;



__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_0)
{
 struct mxl5005s_state *VAR_1 = VAR_0->tuner_priv;

 if (VAR_1->Mode == 1) {

   VAR_1->RF_LO = VAR_1->RF_IN;

   VAR_1->TG_LO = VAR_1->RF_IN - 750000;
 } else {
  if (VAR_1->IF_Mode == 0) {
   VAR_1->RF_LO = VAR_1->RF_IN - 400000;
   VAR_1->TG_LO = VAR_1->RF_IN - 1750000;
  } else {
   VAR_1->RF_LO = VAR_1->RF_IN - VAR_1->Chan_Bandwidth/2;
   VAR_1->TG_LO = VAR_1->RF_IN -
    VAR_1->Chan_Bandwidth + 500000;
  }
 }
}
