
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int endOfSearch; } ;
struct cifsFileInfo {int invalidHandle; TYPE_1__ srch_inf; } ;



__attribute__((used)) static bool
FUNC_0(struct cifsFileInfo *VAR_0)
{
 return !VAR_0->srch_inf.endOfSearch && !VAR_0->invalidHandle;
}
