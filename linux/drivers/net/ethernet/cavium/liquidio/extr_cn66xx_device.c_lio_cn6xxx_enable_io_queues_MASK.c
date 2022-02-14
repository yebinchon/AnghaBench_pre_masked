
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int oq; int iq; int iq64B; } ;
struct octeon_device {TYPE_1__ io_qmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_device*,int ) ;
 int FUNC_1 (struct octeon_device*,int ,int ) ;

int FUNC_2(struct octeon_device *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 |= VAR_3->io_qmask.iq64B;
 FUNC_1(VAR_3, VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_3->io_qmask.iq;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 |= VAR_3->io_qmask.oq;
 FUNC_1(VAR_3, VAR_2, VAR_4);

 return 0;
}
