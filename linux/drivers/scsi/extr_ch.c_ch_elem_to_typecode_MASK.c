
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__* firsts; scalar_t__* counts; } ;
typedef TYPE_1__ scsi_changer ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(scsi_changer *VAR_1, u_int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 >= VAR_1->firsts[VAR_3] &&
      VAR_2 < VAR_1->firsts[VAR_3] +
             VAR_1->counts[VAR_3])
   return VAR_3+1;
 }
 return 0;
}
