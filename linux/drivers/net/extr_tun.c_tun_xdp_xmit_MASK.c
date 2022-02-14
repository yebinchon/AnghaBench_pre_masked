
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct xdp_frame {int dummy; } ;
struct tun_struct {TYPE_1__* pcpu_stats; int * tfiles; int numqueues; } ;
struct TYPE_4__ {int producer_lock; } ;
struct tun_file {TYPE_2__ tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (struct tun_file*) ;
 struct tun_struct* FUNC_3 (struct net_device*) ;
 struct tun_file* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 size_t FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (struct xdp_frame*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_4, int VAR_5,
   struct xdp_frame **VAR_6, u32 VAR_7)
{
 struct tun_struct *VAR_8 = FUNC_3(VAR_4);
 struct tun_file *VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;
 int VAR_12 = VAR_5;
 int VAR_13;

 if (FUNC_12(VAR_7 & ~VAR_2))
  return -VAR_0;

 FUNC_5();

resample:
 VAR_10 = FUNC_0(VAR_8->numqueues);
 if (!VAR_10) {
  FUNC_6();
  return -VAR_1;
 }

 VAR_9 = FUNC_4(VAR_8->tfiles[FUNC_7() %
         VAR_10]);
 if (FUNC_12(!VAR_9))
  goto resample;

 FUNC_8(&VAR_9->tx_ring.producer_lock);
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  struct xdp_frame *VAR_14 = VAR_6[VAR_13];



  void *VAR_15 = FUNC_11(VAR_14);

  if (FUNC_1(&VAR_9->tx_ring, VAR_15)) {
   FUNC_10(VAR_8->pcpu_stats->tx_dropped);
   FUNC_13(VAR_14);
   VAR_11++;
  }
 }
 FUNC_9(&VAR_9->tx_ring.producer_lock);

 if (VAR_7 & VAR_3)
  FUNC_2(VAR_9);

 FUNC_6();
 return VAR_12 - VAR_11;
}
