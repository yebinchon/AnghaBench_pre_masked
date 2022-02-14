
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysrq_key_op {int dummy; } ;


 struct sysrq_key_op* FUNC_0 (int) ;
 int FUNC_1 (int,struct sysrq_key_op*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct sysrq_key_op *VAR_2,
                                struct sysrq_key_op *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_0);
 if (FUNC_0(VAR_1) == VAR_3) {
  FUNC_1(VAR_1, VAR_2);
  VAR_4 = 0;
 } else {
  VAR_4 = -1;
 }
 FUNC_3(&VAR_0);






 FUNC_4();

 return VAR_4;
}
