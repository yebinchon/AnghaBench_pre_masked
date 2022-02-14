
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ofs; scalar_t__ len; int fsize; int id; int * content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void FUNC_1(void)
{
 if (VAR_2.content) {
  FUNC_0((unsigned long) VAR_2.content,
      VAR_3);
  VAR_2.content = ((void*)0);
 }

 VAR_2.id = VAR_0;
 VAR_2.fsize = VAR_1;
 VAR_2.ofs = -1;
 VAR_2.len = 0;
}
