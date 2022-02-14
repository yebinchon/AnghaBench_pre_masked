
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ smb2_status; int * status_string; } ;


 int FUNC_0 (char*,scalar_t__,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(__le32 VAR_1)
{
 int VAR_2 = 0;

 while (VAR_0[VAR_2].status_string != ((void*)0)) {
  if ((VAR_0[VAR_2].smb2_status) == VAR_1) {
   FUNC_0("Status code returned 0x%08x %s\n", VAR_1,
      VAR_0[VAR_2].status_string);
  }
  VAR_2++;
 }
 return;
}
