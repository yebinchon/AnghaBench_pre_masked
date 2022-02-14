
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt2063_state {int init; } ;
struct dvb_frontend {struct mt2063_state* tuner_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct mt2063_state*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u32 *VAR_3)
{
 struct mt2063_state *VAR_4 = VAR_2->tuner_priv;
 int VAR_5;

 FUNC_0(2, "\n");

 if (!VAR_4->init)
  return -VAR_0;

 *VAR_3 = 0;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5)
  *VAR_3 = VAR_1;

 FUNC_0(1, "Tuner status: %d", *VAR_3);

 return 0;
}
