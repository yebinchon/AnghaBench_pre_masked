
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dr_hw_ste_format {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

bool FUNC_1(void *VAR_1, void *VAR_2)
{
 struct dr_hw_ste_format *VAR_3 = (struct dr_hw_ste_format *)VAR_1;
 struct dr_hw_ste_format *VAR_4 = (struct dr_hw_ste_format *)VAR_2;

 return !FUNC_0(VAR_3->tag, VAR_4->tag, VAR_0);
}
