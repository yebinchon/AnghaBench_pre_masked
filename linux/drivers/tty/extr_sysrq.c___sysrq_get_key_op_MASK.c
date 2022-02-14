
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysrq_key_op {int dummy; } ;


 struct sysrq_key_op** VAR_0 ;
 int FUNC_0 (int) ;

struct sysrq_key_op *FUNC_1(int VAR_1)
{
        struct sysrq_key_op *VAR_2 = ((void*)0);
        int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != -1)
         VAR_2 = VAR_0[VAR_3];

        return VAR_2;
}
