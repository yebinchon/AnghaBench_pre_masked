
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *,char*,void*,unsigned long) ;
 scalar_t__ FUNC_1 (void*,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_4, void *VAR_5, unsigned long VAR_6)
{
 if (FUNC_1(VAR_5, VAR_6, VAR_3, VAR_2) ||
     FUNC_1(VAR_5, VAR_6, VAR_1, VAR_0))
  FUNC_0(VAR_4, ((void*)0), "device driver maps memory from kernel text or rodata [addr=%p] [len=%lu]\n", VAR_5, VAR_6);
}
