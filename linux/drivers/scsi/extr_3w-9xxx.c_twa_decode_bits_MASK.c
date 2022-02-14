
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ device; } ;
struct TYPE_5__ {int reset_print; int host; int flags; TYPE_3__* tw_pci_dev; } ;
typedef TYPE_1__ TW_Device_Extension ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(TW_Device_Extension *VAR_13, u32 VAR_14)
{
 int VAR_15 = 1;


 if (VAR_14 & VAR_11) {
  FUNC_1(VAR_13->host, VAR_6, 0xc, "PCI Parity Error: clearing");
  FUNC_4(VAR_3, FUNC_0(VAR_13));
 }

 if (VAR_14 & VAR_10) {
  FUNC_1(VAR_13->host, VAR_6, 0xd, "PCI Abort: clearing");
  FUNC_4(VAR_4, FUNC_0(VAR_13));
  FUNC_2(VAR_13->tw_pci_dev, VAR_2, VAR_8);
 }

 if (VAR_14 & VAR_12) {
  if (((VAR_13->tw_pci_dev->device != VAR_0) &&
       (VAR_13->tw_pci_dev->device != VAR_1)) ||
      (!FUNC_3(VAR_7, &VAR_13->flags)))
   FUNC_1(VAR_13->host, VAR_6, 0xe, "Controller Queue Error: clearing");
  FUNC_4(VAR_5, FUNC_0(VAR_13));
 }

 if (VAR_14 & VAR_9) {
  if (VAR_13->reset_print == 0) {
   FUNC_1(VAR_13->host, VAR_6, 0x10, "Microcontroller Error: clearing");
   VAR_13->reset_print = 1;
  }
  goto out;
 }
 VAR_15 = 0;
out:
 return VAR_15;
}
