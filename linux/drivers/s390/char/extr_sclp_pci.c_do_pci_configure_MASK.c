
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int response_code; int length; } ;
struct pci_cfg_sccb {TYPE_1__ header; int aid; int atype; } ;
typedef int sclp_cmdw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,struct pci_cfg_sccb*) ;

__attribute__((used)) static int FUNC_4(sclp_cmdw_t VAR_8, u32 VAR_9)
{
 struct pci_cfg_sccb *VAR_10;
 int VAR_11;

 if (!VAR_7)
  return -VAR_2;

 VAR_10 = (struct pci_cfg_sccb *) FUNC_1(VAR_4 | VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->header.length = VAR_5;
 VAR_10->atype = VAR_6;
 VAR_10->aid = VAR_9;
 VAR_11 = FUNC_3(VAR_8, VAR_10);
 if (VAR_11)
  goto out;
 switch (VAR_10->header.response_code) {
 case 0x0020:
 case 0x0120:
  break;
 default:
  FUNC_2("configure PCI I/O adapter failed: cmd=0x%08x  response=0x%04x\n",
   VAR_8, VAR_10->header.response_code);
  VAR_11 = -VAR_0;
  break;
 }
out:
 FUNC_0((unsigned long) VAR_10);
 return VAR_11;
}
