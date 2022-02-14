
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int portnum; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(scsi_qla_host_t *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);






 VAR_3 &= ~(1 << VAR_2->hw->portnum);

 FUNC_0(VAR_1, VAR_2, 0xb13d,
     "drv_state: 0x%08x\n", VAR_3);
 FUNC_2(VAR_2, VAR_0, VAR_3);
}
