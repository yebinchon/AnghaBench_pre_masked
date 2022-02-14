
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int* event_type; int event_log; } ;



__attribute__((used)) static int
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 u16 VAR_2;
 u32 VAR_3;

 if (VAR_1 >= 128 || !VAR_1 || !VAR_0->event_log)
  return 0;

 VAR_3 = (1 << (VAR_1 % 32));
 if (!VAR_3)
  VAR_3 = 1;
 VAR_2 = VAR_1 / 32;
 return VAR_3 & VAR_0->event_type[VAR_2];
}
