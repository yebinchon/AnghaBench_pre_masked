
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* counts; } ;
typedef TYPE_1__ scsi_changer ;


 unsigned int VAR_0 ;

__attribute__((used)) static int
FUNC_0(scsi_changer *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_2 >= VAR_0 || VAR_3 >= VAR_1->counts[VAR_2])
  return -1;
 return 0;
}
