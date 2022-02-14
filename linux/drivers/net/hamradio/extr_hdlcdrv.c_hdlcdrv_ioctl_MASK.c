
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_22__ {int rx_errors; int rx_packets; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_3__ stats; int dma; int irq; int base_addr; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_27__ {size_t rd; size_t wr; int * buffer; } ;
struct TYPE_26__ {size_t rd; size_t wr; int * buffer; } ;
struct TYPE_25__ {int bitrate; } ;
struct TYPE_17__ {int slotcnt; int calibrate; } ;
struct TYPE_23__ {int dcd; } ;
struct TYPE_20__ {int midiiobase; int pariobase; int seriobase; int dma2; } ;
struct TYPE_15__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct hdlcdrv_state {TYPE_9__* ops; TYPE_8__ bitbuf_hdlc; TYPE_7__ bitbuf_channel; TYPE_6__ par; TYPE_12__ hdlctx; int ptt_keyed; TYPE_4__ hdlcrx; TYPE_1__ ptt_out; TYPE_10__ ch_params; } ;
struct TYPE_24__ {int ptt_keyed; int dcd; void* ptt; } ;
struct TYPE_21__ {int rx_errors; int rx_packets; int tx_errors; int tx_packets; int ptt_keyed; int dcd; void* ptt; } ;
struct TYPE_19__ {int midiiobase; int pariobase; int seriobase; int dma2; int dma; int irq; int iobase; } ;
struct TYPE_16__ {int fulldup; int ppersist; int slottime; int tx_tail; int tx_delay; } ;
struct TYPE_18__ {int calibrate; char* drivername; int bits; TYPE_5__ ocs; TYPE_2__ cs; TYPE_14__ mp; TYPE_11__ cp; } ;
struct hdlcdrv_ioctl {int cmd; TYPE_13__ data; } ;
typedef int bi ;
struct TYPE_28__ {int (* ioctl ) (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;int drvname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hdlcdrv_ioctl*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hdlcdrv_ioctl*,int) ;
 void* FUNC_3 (struct hdlcdrv_state*) ;
 struct hdlcdrv_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;
 int FUNC_8 (struct net_device*,struct ifreq*,struct hdlcdrv_ioctl*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_10, struct ifreq *VAR_11, int VAR_12)
{
 struct hdlcdrv_state *VAR_13 = FUNC_4(VAR_10);
 struct hdlcdrv_ioctl VAR_14;

 if (VAR_12 != VAR_9) {
  if (VAR_13->ops && VAR_13->ops->ioctl)
   return VAR_13->ops->ioctl(VAR_10, VAR_11, &VAR_14, VAR_12);
  return -VAR_6;
 }
 if (FUNC_1(&VAR_14, VAR_11->ifr_data, sizeof(VAR_14)))
  return -VAR_4;

 switch (VAR_14.cmd) {
 default:
  if (VAR_13->ops && VAR_13->ops->ioctl)
   return VAR_13->ops->ioctl(VAR_10, VAR_11, &VAR_14, VAR_12);
  return -VAR_6;

 case 134:
  VAR_14.data.cp.tx_delay = VAR_13->ch_params.tx_delay;
  VAR_14.data.cp.tx_tail = VAR_13->ch_params.tx_tail;
  VAR_14.data.cp.slottime = VAR_13->ch_params.slottime;
  VAR_14.data.cp.ppersist = VAR_13->ch_params.ppersist;
  VAR_14.data.cp.fulldup = VAR_13->ch_params.fulldup;
  break;

 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  VAR_13->ch_params.tx_delay = VAR_14.data.cp.tx_delay;
  VAR_13->ch_params.tx_tail = VAR_14.data.cp.tx_tail;
  VAR_13->ch_params.slottime = VAR_14.data.cp.slottime;
  VAR_13->ch_params.ppersist = VAR_14.data.cp.ppersist;
  VAR_13->ch_params.fulldup = VAR_14.data.cp.fulldup;
  VAR_13->hdlctx.slotcnt = 1;
  return 0;

 case 133:
  VAR_14.data.mp.iobase = VAR_10->base_addr;
  VAR_14.data.mp.irq = VAR_10->irq;
  VAR_14.data.mp.dma = VAR_10->dma;
  VAR_14.data.mp.dma2 = VAR_13->ptt_out.dma2;
  VAR_14.data.mp.seriobase = VAR_13->ptt_out.seriobase;
  VAR_14.data.mp.pariobase = VAR_13->ptt_out.pariobase;
  VAR_14.data.mp.midiiobase = VAR_13->ptt_out.midiiobase;
  break;

 case 128:
  if ((!FUNC_0(VAR_1)) || FUNC_5(VAR_10))
   return -VAR_2;
  VAR_10->base_addr = VAR_14.data.mp.iobase;
  VAR_10->irq = VAR_14.data.mp.irq;
  VAR_10->dma = VAR_14.data.mp.dma;
  VAR_13->ptt_out.dma2 = VAR_14.data.mp.dma2;
  VAR_13->ptt_out.seriobase = VAR_14.data.mp.seriobase;
  VAR_13->ptt_out.pariobase = VAR_14.data.mp.pariobase;
  VAR_13->ptt_out.midiiobase = VAR_14.data.mp.midiiobase;
  return 0;

 case 131:
  VAR_14.data.cs.ptt = FUNC_3(VAR_13);
  VAR_14.data.cs.dcd = VAR_13->hdlcrx.dcd;
  VAR_14.data.cs.ptt_keyed = VAR_13->ptt_keyed;
  VAR_14.data.cs.tx_packets = VAR_10->stats.tx_packets;
  VAR_14.data.cs.tx_errors = VAR_10->stats.tx_errors;
  VAR_14.data.cs.rx_packets = VAR_10->stats.rx_packets;
  VAR_14.data.cs.rx_errors = VAR_10->stats.rx_errors;
  break;

 case 130:
  VAR_14.data.ocs.ptt = FUNC_3(VAR_13);
  VAR_14.data.ocs.dcd = VAR_13->hdlcrx.dcd;
  VAR_14.data.ocs.ptt_keyed = VAR_13->ptt_keyed;
  break;

 case 137:
  if(!FUNC_0(VAR_1))
   return -VAR_7;
  if (VAR_13->par.bitrate <= 0)
   return -VAR_5;
  if (VAR_14.data.calibrate > VAR_8 / VAR_13->par.bitrate)
   return -VAR_5;
  VAR_13->hdlctx.calibrate = VAR_14.data.calibrate * VAR_13->par.bitrate / 16;
  return 0;

 case 132:

  return -VAR_7;
 case 135:

  return -VAR_7;
 case 136:
  if (VAR_13->ops && VAR_13->ops->drvname) {
   FUNC_6(VAR_14.data.drivername, VAR_13->ops->drvname,
    sizeof(VAR_14.data.drivername));
   break;
  }
  VAR_14.data.drivername[0] = '\0';
  break;

 }
 if (FUNC_2(VAR_11->ifr_data, &VAR_14, sizeof(VAR_14)))
  return -VAR_4;
 return 0;

}
