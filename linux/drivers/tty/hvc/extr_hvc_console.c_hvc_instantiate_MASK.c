
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hvc_struct {int port; } ;
struct hv_ops {int dummy; } ;


 int VAR_0 ;
 struct hv_ops const** VAR_1 ;
 int FUNC_0 (int) ;
 struct hvc_struct* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int* VAR_3 ;

int FUNC_3(uint32_t VAR_4, int VAR_5, const struct hv_ops *VAR_6)
{
 struct hvc_struct *VAR_7;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;

 if (VAR_3[VAR_5] != -1)
  return -1;


 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7) {
  FUNC_2(&VAR_7->port);
  return -1;
 }

 VAR_3[VAR_5] = VAR_4;
 VAR_1[VAR_5] = VAR_6;


 if (VAR_2 < VAR_5)
  VAR_2 = VAR_5;


 FUNC_0(VAR_5);

 return 0;
}
