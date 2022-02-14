
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int core; } ;


 size_t FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_2 (struct venus_inst*,unsigned int const) ;
 int FUNC_3 (struct venus_inst*) ;

int FUNC_4(struct venus_inst *VAR_2)
{
 const unsigned int *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_2->core)) {
  VAR_4 = FUNC_0(VAR_1);
  VAR_3 = VAR_1;
 } else {
  VAR_4 = FUNC_0(VAR_0);
  VAR_3 = VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_2(VAR_2, VAR_3[VAR_5]);
  if (VAR_6)
   goto error;
 }

 return 0;

error:
 FUNC_3(VAR_2);
 return VAR_6;
}
