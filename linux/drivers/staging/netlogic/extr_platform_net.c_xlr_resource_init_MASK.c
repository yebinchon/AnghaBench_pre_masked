
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char* name; int start; int end; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct resource *VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->name = "gmac";

 VAR_2->start = FUNC_0(FUNC_1(VAR_3));
 VAR_2->end = VAR_2->start + 0xfff;
 VAR_2->flags = VAR_1;

 VAR_2++;
 VAR_2->name = "gmac";
 VAR_2->start = VAR_4;
 VAR_2->end = VAR_4;
 VAR_2->flags = VAR_0;
}
