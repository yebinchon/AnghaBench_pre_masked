
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int* tcam; } ;


 int VAR_0 ;
 size_t VAR_1 ;

unsigned int FUNC_0(struct mvpp2_prs_entry *VAR_2)
{
 return (~VAR_2->tcam[VAR_1] >> 24) & VAR_0;
}
