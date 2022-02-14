
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;
struct TYPE_2__ {scalar_t__ ntstatus; int dos_code; int dos_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_0(__u32 VAR_3, __u8 *VAR_4, __u16 *VAR_5)
{
 int VAR_6;
 if (VAR_3 == 0) {
  *VAR_4 = 0;
  *VAR_5 = 0;
  return;
 }
 for (VAR_6 = 0; VAR_2[VAR_6].ntstatus; VAR_6++) {
  if (VAR_3 == VAR_2[VAR_6].ntstatus) {
   *VAR_4 = VAR_2[VAR_6].dos_class;
   *VAR_5 = VAR_2[VAR_6].dos_code;
   return;
  }
 }
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_1;
}
