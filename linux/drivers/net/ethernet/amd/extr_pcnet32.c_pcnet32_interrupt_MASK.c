
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pcnet32_private {int lock; TYPE_2__* a; int napi; } ;
struct TYPE_3__ {int rx_errors; int tx_errors; } ;
struct net_device {unsigned long base_addr; TYPE_1__ stats; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* read_csr ) (unsigned long,int ) ;int (* write_csr ) (unsigned long,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcnet32_private*,int ,struct net_device*,char*,int) ;
 int FUNC_4 (struct pcnet32_private*,int ,int ,struct net_device*,char*,int,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned long,int ) ;
 int FUNC_8 (unsigned long,int ,int) ;
 int FUNC_9 (unsigned long,int ) ;
 int FUNC_10 (unsigned long,int ) ;
 int FUNC_11 (unsigned long,int ,int) ;
 int FUNC_12 (unsigned long,int ) ;
 int FUNC_13 (unsigned long,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_14(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct pcnet32_private *VAR_10;
 unsigned long VAR_11;
 u16 VAR_12;
 int VAR_13 = VAR_6;

 VAR_11 = VAR_9->base_addr;
 VAR_10 = FUNC_2(VAR_9);

 FUNC_5(&VAR_10->lock);

 VAR_12 = VAR_10->a->read_csr(VAR_11, VAR_0);
 while ((VAR_12 & 0x8f00) && --VAR_13 >= 0) {
  if (VAR_12 == 0xffff)
   break;

  VAR_10->a->write_csr(VAR_11, VAR_0, VAR_12 & ~0x004f);

  FUNC_4(VAR_10, VAR_5, VAR_3, VAR_9,
        "interrupt  csr0=%#2.2x new csr=%#2.2x\n",
        VAR_12, VAR_10->a->read_csr(VAR_11, VAR_0));


  if (VAR_12 & 0x4000)
   VAR_9->stats.tx_errors++;
  if (VAR_12 & 0x1000) {
   VAR_9->stats.rx_errors++;
  }
  if (VAR_12 & 0x0800) {
   FUNC_3(VAR_10, VAR_4, VAR_9, "Bus master arbitration failure, status %4.4x\n",
      VAR_12);

  }
  if (FUNC_1(&VAR_10->napi)) {
   u16 VAR_14;

   VAR_14 = VAR_10->a->read_csr(VAR_11, VAR_1);
   VAR_14 |= 0x5f00;
   VAR_10->a->write_csr(VAR_11, VAR_1, VAR_14);

   FUNC_0(&VAR_10->napi);
   break;
  }
  VAR_12 = VAR_10->a->read_csr(VAR_11, VAR_0);
 }

 FUNC_4(VAR_10, VAR_5, VAR_3, VAR_9,
       "exiting interrupt, csr0=%#4.4x\n",
       VAR_10->a->read_csr(VAR_11, VAR_0));

 FUNC_6(&VAR_10->lock);

 return VAR_2;
}
