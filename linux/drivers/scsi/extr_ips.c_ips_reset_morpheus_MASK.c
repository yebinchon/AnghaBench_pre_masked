
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ (* init ) (TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ func; TYPE_4__* pcidev; scalar_t__ mem_ptr; int mem_addr; int host_num; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_8__ {int irq; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_3)
{
 int VAR_4;
 uint8_t VAR_5;

 FUNC_2("ips_reset_morpheus", 1);

 FUNC_0(1, "(%s%d) ips_reset_morpheus: mem addr: %x, irq: %d",
    VAR_2, VAR_3->host_num, VAR_3->mem_addr, VAR_3->pcidev->irq);

 VAR_4 = 0;

 while (VAR_4 < 2) {
  VAR_4++;

  FUNC_5(0x80000000, VAR_3->mem_ptr + VAR_1);


  FUNC_1(5 * VAR_0);


  FUNC_3(VAR_3->pcidev, 4, &VAR_5);

  if ((*VAR_3->func.init) (VAR_3))
   break;
  else if (VAR_4 >= 2) {

   return (0);
  }
 }

 return (1);
}
