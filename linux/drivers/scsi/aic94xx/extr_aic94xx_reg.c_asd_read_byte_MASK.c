
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct asd_ha_struct {TYPE_1__* io_handle; int iospace; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static u8 FUNC_4(struct asd_ha_struct *VAR_0, unsigned long VAR_1)
{
 u8 VAR_2;
 if (FUNC_3(VAR_0->iospace))
  VAR_2 = FUNC_0((unsigned long) VAR_0->io_handle[0].addr
     + (VAR_1 & 0xFF));
 else
  VAR_2 = FUNC_1(VAR_0->io_handle[0].addr + VAR_1);
 FUNC_2();
 return VAR_2;
}
