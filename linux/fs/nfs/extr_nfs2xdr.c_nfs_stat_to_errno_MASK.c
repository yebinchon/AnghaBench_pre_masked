
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;
struct TYPE_2__ {int stat; int errno; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(enum nfs_stat VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].stat != -1; VAR_2++) {
  if (VAR_0[VAR_2].stat == (int)VAR_1)
   return VAR_0[VAR_2].errno;
 }
 FUNC_0("NFS: Unrecognized nfs status value: %u\n", VAR_1);
 return VAR_0[VAR_2].errno;
}
