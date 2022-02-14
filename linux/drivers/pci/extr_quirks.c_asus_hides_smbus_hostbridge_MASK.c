
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ device; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_18)
{
 if (FUNC_0(VAR_18->subsystem_vendor == VAR_13)) {
  if (VAR_18->device == VAR_5)
   switch (VAR_18->subsystem_device) {
   case 0x8025:
   case 0x8070:
   case 0x8088:
   case 0x1626:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_4)
   switch (VAR_18->subsystem_device) {
   case 0x80b1:
   case 0x80b2:
   case 0x8093:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_6)
   switch (VAR_18->subsystem_device) {
   case 0x8030:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_0)
   switch (VAR_18->subsystem_device) {
   case 0x8070:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_12)
   switch (VAR_18->subsystem_device) {
   case 0x80c9:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_7)
   switch (VAR_18->subsystem_device) {
   case 0x1751:
   case 0x1821:
   case 0x1897:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_8)
   switch (VAR_18->subsystem_device) {
   case 0x184b:
   case 0x186a:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_9)
   switch (VAR_18->subsystem_device) {
   case 0x80f2:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_11)
   switch (VAR_18->subsystem_device) {
   case 0x1882:
   case 0x1977:
    VAR_17 = 1;
   }
 } else if (FUNC_0(VAR_18->subsystem_vendor == VAR_15)) {
  if (VAR_18->device == VAR_8)
   switch (VAR_18->subsystem_device) {
   case 0x088C:
   case 0x0890:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_9)
   switch (VAR_18->subsystem_device) {
   case 0x12bc:
   case 0x12bd:
   case 0x006a:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_10)
   switch (VAR_18->subsystem_device) {
   case 0x12bf:
    VAR_17 = 1;
   }
 } else if (FUNC_0(VAR_18->subsystem_vendor == VAR_16)) {
  if (VAR_18->device == VAR_8)
   switch (VAR_18->subsystem_device) {
   case 0xC00C:
    VAR_17 = 1;
  }
 } else if (FUNC_0(VAR_18->subsystem_vendor == VAR_14)) {
  if (VAR_18->device == VAR_8)
   switch (VAR_18->subsystem_device) {
   case 0x0058:
    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_2)
   switch (VAR_18->subsystem_device) {
   case 0xB16C:



    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_1)
   switch (VAR_18->subsystem_device) {
   case 0x00b8:
   case 0x00b9:
   case 0x00ba:





    VAR_17 = 1;
   }
  else if (VAR_18->device == VAR_3)
   switch (VAR_18->subsystem_device) {
   case 0x001A:



    VAR_17 = 1;
   }
 }
}
