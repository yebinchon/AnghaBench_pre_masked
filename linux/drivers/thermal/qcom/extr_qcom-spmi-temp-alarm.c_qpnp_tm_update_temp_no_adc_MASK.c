
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpnp_tm_chip {scalar_t__ subtype; unsigned int stage; unsigned int temp; unsigned int thresh; int lock; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned int* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qpnp_tm_chip*) ;

__attribute__((used)) static int FUNC_3(struct qpnp_tm_chip *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(!FUNC_1(&VAR_6->lock));

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_7 = VAR_10;

 if (VAR_6->subtype == VAR_0) {
  VAR_8 = VAR_7;
  VAR_9 = VAR_6->stage;
 } else {
  VAR_8 = VAR_5[VAR_7];
  VAR_9 = VAR_5[VAR_6->stage];
 }

 if (VAR_8 > VAR_9) {

  VAR_6->temp = (VAR_8 - 1) * VAR_2 +
        VAR_6->thresh * VAR_4 +
        VAR_1 + VAR_3;
 } else if (VAR_8 < VAR_9) {

  VAR_6->temp = VAR_8 * VAR_2 +
        VAR_6->thresh * VAR_4 -
        VAR_1 + VAR_3;
 }

 VAR_6->stage = VAR_7;

 return 0;
}
