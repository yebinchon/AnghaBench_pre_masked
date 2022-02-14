
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (struct vc_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_1, unsigned char VAR_2, char VAR_3)
{
 if (VAR_3)
  return;

 if ((unsigned)VAR_2 < FUNC_0(VAR_0)) {
  if (VAR_0[VAR_2])
   FUNC_2(VAR_1, VAR_0[VAR_2]);
 } else
  FUNC_1("k_fn called with value=%d\n", VAR_2);
}
