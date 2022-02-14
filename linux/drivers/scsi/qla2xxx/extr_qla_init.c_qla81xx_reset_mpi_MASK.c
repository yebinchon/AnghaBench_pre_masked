
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_2(scsi_qla_host_t *VAR_1)
{
 uint16_t VAR_2[4] = {0x1010, 0, 1, 0};

 if (!FUNC_0(VAR_1->hw))
  return VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
