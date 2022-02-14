
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct device*,unsigned int,int *) ;
 int FUNC_1 (struct device*,char*,...) ;

void FUNC_2(struct device *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(VAR_1, "ab8500 register values:\n");

 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1, " bank 0x%02X:\n", VAR_2);
  FUNC_0(VAR_1, VAR_2, ((void*)0));
 }
}
