
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __u32 ;
struct TYPE_2__ {int nt_errcode; int * nt_errstr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_1(__u32 VAR_1)
{
 int VAR_2 = 0;

 while (VAR_0[VAR_2].nt_errstr != ((void*)0)) {
  if (((VAR_0[VAR_2].nt_errcode) & 0xFFFFFF) ==
      (VAR_1 & 0xFFFFFF)) {
   FUNC_0("Status code returned 0x%08x %s\n",
      VAR_1, VAR_0[VAR_2].nt_errstr);
  }
  VAR_2++;
 }
 return;
}
