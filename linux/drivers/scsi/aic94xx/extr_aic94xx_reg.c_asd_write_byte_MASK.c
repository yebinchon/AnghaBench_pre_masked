
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct asd_ha_struct {TYPE_1__* io_handle; int iospace; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct asd_ha_struct *VAR_0,
      unsigned long VAR_1, u8 VAR_2)
{
 if (FUNC_1(VAR_0->iospace))
  FUNC_0(VAR_2,
       (unsigned long)VAR_0->io_handle[0].addr + (VAR_1 & 0xFF));
 else
  FUNC_3(VAR_2, VAR_0->io_handle[0].addr + VAR_1);
 FUNC_2();
}
