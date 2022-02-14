
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int FUNC_0 (int ,int ,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6, int *VAR_7)
{
 struct af9005_fe_state *VAR_8 = VAR_6->demodulator_priv;
 int VAR_9;
 u8 VAR_10;

 *VAR_7 = 0;

 VAR_9 = FUNC_0(VAR_8->d, VAR_4,
     VAR_1,
     VAR_0, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 & 1) {
  VAR_9 =
      FUNC_0(VAR_8->d,
           VAR_5,
           VAR_3,
           VAR_2, &VAR_10);
  if (VAR_9)
   return VAR_9;
  if ((VAR_10 & 1) == 0)
   *VAR_7 = 1;

 }
 return 0;
}
