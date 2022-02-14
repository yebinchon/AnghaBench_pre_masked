
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_asy {unsigned char* xbuff; int xleft; unsigned char* xhead; unsigned char* rbuff; int rcount; int buffsize; int lock; int flags; } ;
struct TYPE_2__ {int rx_over_errors; int tx_dropped; } ;
struct net_device {int mtu; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 struct x25_asy* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned char* FUNC_7 (unsigned char**,unsigned char*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, int VAR_4)
{
 struct x25_asy *VAR_5 = FUNC_3(VAR_3);
 unsigned char *VAR_6, *VAR_7;
 int VAR_8;

 VAR_8 = 2 * VAR_4;
 VAR_6 = FUNC_1(VAR_8 + 4, VAR_1);
 VAR_7 = FUNC_1(VAR_8 + 4, VAR_1);

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6);
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 FUNC_5(&VAR_5->lock);
 VAR_6 = FUNC_7(&VAR_5->xbuff, VAR_6);
 if (VAR_5->xleft) {
  if (VAR_5->xleft <= VAR_8) {
   FUNC_2(VAR_5->xbuff, VAR_5->xhead, VAR_5->xleft);
  } else {
   VAR_5->xleft = 0;
   VAR_3->stats.tx_dropped++;
  }
 }
 VAR_5->xhead = VAR_5->xbuff;

 VAR_7 = FUNC_7(&VAR_5->rbuff, VAR_7);
 if (VAR_5->rcount) {
  if (VAR_5->rcount <= VAR_8) {
   FUNC_2(VAR_5->rbuff, VAR_7, VAR_5->rcount);
  } else {
   VAR_5->rcount = 0;
   VAR_3->stats.rx_over_errors++;
   FUNC_4(VAR_2, &VAR_5->flags);
  }
 }

 VAR_3->mtu = VAR_4;
 VAR_5->buffsize = VAR_8;

 FUNC_6(&VAR_5->lock);

 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return 0;
}
