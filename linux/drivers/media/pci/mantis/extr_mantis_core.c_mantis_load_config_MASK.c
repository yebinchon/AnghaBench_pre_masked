
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int subsystem_device; int * hwconfig; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct mantis_pci *VAR_7)
{
 switch (VAR_7->subsystem_device) {
 case 135:
  VAR_7->hwconfig = &VAR_1;
  break;
 case 134:
  VAR_7->hwconfig = &VAR_2;
  break;
 case 133:
 case 128:
  VAR_7->hwconfig = &VAR_3;
  break;
 case 132:
  VAR_7->hwconfig = &VAR_4;
  break;
 case 131:
 case 136:
 case 129:
  VAR_7->hwconfig = &VAR_5;
  break;
 case 130:
  VAR_7->hwconfig = &VAR_6;
  break;
 default:
  VAR_7->hwconfig = &VAR_0;
  break;
 }
}
