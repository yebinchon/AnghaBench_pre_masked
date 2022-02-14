
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct device*,int *,char*,void const*,unsigned long) ;
 scalar_t__ FUNC_2 (void const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void const*) ;

void FUNC_5(struct device *VAR_0, const void *VAR_1,
       unsigned long VAR_2)
{
 if (FUNC_3(FUNC_0()))
  return;

 if (!FUNC_4(VAR_1))
  FUNC_1(VAR_0, ((void*)0), "device driver maps memory from invalid area [addr=%p] [len=%lu]\n",
      VAR_1, VAR_2);

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_0, ((void*)0), "device driver maps memory from vmalloc area [addr=%p] [len=%lu]\n",
      VAR_1, VAR_2);
}
