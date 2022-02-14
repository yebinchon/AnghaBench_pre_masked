
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {struct capi_ctr* private; } ;
struct TYPE_8__ {scalar_t__ manu; } ;
struct capi_ctr {TYPE_1__ profile; scalar_t__ driverdata; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_12__ {char** version; unsigned long cardname; TYPE_6__* card; } ;
typedef TYPE_5__ avmctrl_info ;
struct TYPE_13__ {unsigned long name; unsigned long port; unsigned long irq; unsigned long membase; int cardtype; scalar_t__ csr; int lock; TYPE_4__* dma; } ;
typedef TYPE_6__ avmcard ;
struct TYPE_10__ {scalar_t__ dmaaddr; } ;
struct TYPE_9__ {scalar_t__ dmaaddr; } ;
struct TYPE_11__ {TYPE_3__ recvbuf; TYPE_2__ sendbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct seq_file *VAR_8, void *VAR_9)
{
 struct capi_ctr *VAR_10 = VAR_8->private;
 avmctrl_info *VAR_11 = (avmctrl_info *)(VAR_10->driverdata);
 avmcard *VAR_12 = VAR_11->card;
 u8 VAR_13;
 char *VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;

 FUNC_1(VAR_8, "%-16s %s\n", "name", VAR_12->name);
 FUNC_1(VAR_8, "%-16s 0x%x\n", "io", VAR_12->port);
 FUNC_1(VAR_8, "%-16s %d\n", "irq", VAR_12->irq);
 FUNC_1(VAR_8, "%-16s 0x%lx\n", "membase", VAR_12->membase);
 switch (VAR_12->cardtype) {
 case 136: VAR_14 = "B1 ISA"; break;
 case 135: VAR_14 = "B1 PCI"; break;
 case 134: VAR_14 = "B1 PCMCIA"; break;
 case 131: VAR_14 = "M1"; break;
 case 130: VAR_14 = "M2"; break;
 case 129: VAR_14 = "T1 ISA (HEMA)"; break;
 case 128: VAR_14 = "T1 PCI"; break;
 case 132: VAR_14 = "C4"; break;
 case 133: VAR_14 = "C2"; break;
 default: VAR_14 = "???"; break;
 }
 FUNC_1(VAR_8, "%-16s %s\n", "type", VAR_14);
 if ((VAR_14 = VAR_11->version[VAR_6]) != ((void*)0))
  FUNC_1(VAR_8, "%-16s %s\n", "ver_driver", VAR_14);
 if ((VAR_14 = VAR_11->version[VAR_5]) != ((void*)0))
  FUNC_1(VAR_8, "%-16s %s\n", "ver_cardtype", VAR_14);
 if ((VAR_14 = VAR_11->version[VAR_7]) != ((void*)0))
  FUNC_1(VAR_8, "%-16s %s\n", "ver_serial", VAR_14);

 if (VAR_12->cardtype != 131) {
  VAR_13 = ((u8 *)(VAR_10->profile.manu))[3];
  if (VAR_13)
   FUNC_1(VAR_8, "%-16s%s%s%s%s%s%s%s\n",
       "protocol",
       (VAR_13 & 0x01) ? " DSS1" : "",
       (VAR_13 & 0x02) ? " CT1" : "",
       (VAR_13 & 0x04) ? " VN3" : "",
       (VAR_13 & 0x08) ? " NI1" : "",
       (VAR_13 & 0x10) ? " AUSTEL" : "",
       (VAR_13 & 0x20) ? " ESS" : "",
       (VAR_13 & 0x40) ? " 1TR6" : ""
    );
 }
 if (VAR_12->cardtype != 131) {
  VAR_13 = ((u8 *)(VAR_10->profile.manu))[5];
  if (VAR_13)
   FUNC_1(VAR_8, "%-16s%s%s%s%s\n",
       "linetype",
       (VAR_13 & 0x01) ? " point to point" : "",
       (VAR_13 & 0x02) ? " point to multipoint" : "",
       (VAR_13 & 0x08) ? " leased line without D-channel" : "",
       (VAR_13 & 0x04) ? " leased line with D-channel" : ""
    );
 }
 FUNC_1(VAR_8, "%-16s %s\n", "cardname", VAR_11->cardname);


 FUNC_2(&VAR_12->lock, VAR_20);

 VAR_15 = (dma_addr_t)FUNC_0(VAR_12, VAR_4)-VAR_12->dma->sendbuf.dmaaddr;
 VAR_16 = FUNC_0(VAR_12, VAR_3);

 VAR_17 = (dma_addr_t)FUNC_0(VAR_12, VAR_2)-VAR_12->dma->recvbuf.dmaaddr;
 VAR_18 = FUNC_0(VAR_12, VAR_1);

 VAR_19 = FUNC_0(VAR_12, VAR_0);

 FUNC_3(&VAR_12->lock, VAR_20);

 FUNC_1(VAR_8, "%-16s 0x%lx\n", "csr (cached)", (unsigned long)VAR_12->csr);
 FUNC_1(VAR_8, "%-16s 0x%lx\n", "csr", (unsigned long)VAR_19);
 FUNC_1(VAR_8, "%-16s %lu\n", "txoff", (unsigned long)VAR_15);
 FUNC_1(VAR_8, "%-16s %lu\n", "txlen", (unsigned long)VAR_16);
 FUNC_1(VAR_8, "%-16s %lu\n", "rxoff", (unsigned long)VAR_17);
 FUNC_1(VAR_8, "%-16s %lu\n", "rxlen", (unsigned long)VAR_18);

 return 0;
}
