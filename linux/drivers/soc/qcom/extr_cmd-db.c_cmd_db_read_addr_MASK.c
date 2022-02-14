
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct entry_header {int addr; } ;


 int FUNC_0 (char const*,struct entry_header const**,int *) ;
 int FUNC_1 (int ) ;

u32 FUNC_2(const char *VAR_0)
{
 int VAR_1;
 const struct entry_header *VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2, ((void*)0));

 return VAR_1 < 0 ? 0 : FUNC_1(VAR_2->addr);
}
