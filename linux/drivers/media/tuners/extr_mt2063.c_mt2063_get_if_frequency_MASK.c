
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int f_out; } ;
struct mt2063_state {TYPE_1__ AS_Data; int init; } ;
struct dvb_frontend {struct mt2063_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct mt2063_state *VAR_3 = VAR_1->tuner_priv;

 FUNC_0(2, "\n");

 if (!VAR_3->init)
  return -VAR_0;

 *VAR_2 = VAR_3->AS_Data.f_out;

 FUNC_0(1, "IF frequency: %d\n", *VAR_2);

 return 0;
}
