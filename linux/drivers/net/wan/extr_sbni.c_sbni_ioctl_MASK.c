
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sbni_in_stats {int dummy; } ;
struct sbni_flags {int slow_mode; size_t rxl; int fixed_rxl; int rate; int mac_addr; } ;
struct TYPE_2__ {int rate; int rxl; } ;
struct net_local {int state; size_t cur_rxl_index; int lock; TYPE_1__ csr1; int delta_rxl; struct sbni_flags in_stats; } ;
struct net_device {int flags; scalar_t__ base_addr; int dev_addr; } ;
struct ifreq {int ifr_data; int ifr_ifru; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,struct sbni_flags*,int) ;
 struct net_device* FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;
 int VAR_10 ;
 int FUNC_7 (struct sbni_flags*,int ,int) ;
 int FUNC_8 (struct net_device*,char*,char*) ;
 struct net_local* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,scalar_t__) ;
 int * VAR_11 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13( struct net_device *VAR_12, struct ifreq *VAR_13, int VAR_14 )
{
 struct net_local *VAR_15 = FUNC_9(VAR_12);
 struct sbni_flags VAR_16;
 int VAR_17 = 0;






 switch( VAR_14 ) {
 case 131 :
  if (FUNC_2( VAR_13->ifr_data, &VAR_15->in_stats,
     sizeof(struct sbni_in_stats) ))
   VAR_17 = -VAR_4;
  break;

 case 129 :
  if (!FUNC_0(VAR_0))
   return -VAR_6;
  FUNC_7( &VAR_15->in_stats, 0, sizeof(struct sbni_in_stats) );
  break;

 case 130 :
  VAR_16.mac_addr = *(u32 *)(VAR_12->dev_addr + 3);
  VAR_16.rate = VAR_15->csr1.rate;
  VAR_16.slow_mode = (VAR_15->state & VAR_7) != 0;
  VAR_16.rxl = VAR_15->cur_rxl_index;
  VAR_16.fixed_rxl = VAR_15->delta_rxl == 0;

  if (FUNC_2( VAR_13->ifr_data, &VAR_16, sizeof VAR_16 ))
   VAR_17 = -VAR_4;
  break;

 case 128 :
  if (!FUNC_0(VAR_0))
   return -VAR_6;

  FUNC_11( &VAR_15->lock );
  VAR_16 = *(struct sbni_flags*) &VAR_13->ifr_ifru;
  if( VAR_16.fixed_rxl )
   VAR_15->delta_rxl = 0,
   VAR_15->cur_rxl_index = VAR_16.rxl;
  else
   VAR_15->delta_rxl = VAR_3,
   VAR_15->cur_rxl_index = VAR_2;

  VAR_15->csr1.rxl = VAR_11[ VAR_15->cur_rxl_index ];
  VAR_15->csr1.rate = VAR_16.rate;
  FUNC_10( *(u8 *)&VAR_15->csr1 | VAR_9, VAR_12->base_addr + VAR_1 );
  FUNC_12( &VAR_15->lock );
  break;
 default :
  return -VAR_5;
 }

 return VAR_17;
}
