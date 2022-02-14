
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* tw_pci_dev; } ;
struct TYPE_5__ {scalar_t__ device; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(TW_Device_Extension *VAR_4)
{
 u32 VAR_5 = 0;
 unsigned long VAR_6;
 int VAR_7 = 1;

 if (VAR_4->tw_pci_dev->device != VAR_1) {
  VAR_6 = VAR_3;
  while ((VAR_5 & VAR_2) != VAR_2) {
   VAR_5 = FUNC_2(FUNC_0(VAR_4));
   FUNC_1(1);
   if (FUNC_3(VAR_3, VAR_6 + VAR_0 * 30))
    goto out;
  }

  FUNC_1(500);
  VAR_7 = 0;
 } else
  VAR_7 = 0;
out:
 return VAR_7;
}
