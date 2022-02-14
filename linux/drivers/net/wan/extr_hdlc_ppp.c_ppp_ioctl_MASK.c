
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ppp {int req_timeout; int cr_retries; int term_retries; int keepalive_interval; int keepalive_timeout; int lock; } ;
struct net_device {int flags; int hard_header_len; int type; int * header_ops; } ;
struct TYPE_4__ {int type; } ;
struct ifreq {TYPE_1__ ifr_settings; } ;
struct hdlc_header {int dummy; } ;
struct TYPE_5__ {int (* attach ) (struct net_device*,int ,int ) ;int * proto; } ;
typedef TYPE_2__ hdlc_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *,int) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 struct ppp* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_11, struct ifreq *VAR_12)
{
 hdlc_device *VAR_13 = FUNC_3(VAR_11);
 struct ppp *VAR_14;
 int VAR_15;

 switch (VAR_12->ifr_settings.type) {
 case 129:
  if (FUNC_3(VAR_11)->proto != &VAR_10)
   return -VAR_3;
  VAR_12->ifr_settings.type = 128;
  return 0;

 case 128:
  if (!FUNC_2(VAR_1))
   return -VAR_5;

  if (VAR_11->flags & VAR_6)
   return -VAR_2;



  VAR_15 = VAR_13->attach(VAR_11, VAR_4,VAR_8);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_0(VAR_11, &VAR_10, sizeof(struct ppp));
  if (VAR_15)
   return VAR_15;

  VAR_14 = FUNC_4(VAR_11);
  FUNC_6(&VAR_14->lock);
  VAR_14->req_timeout = 2;
  VAR_14->cr_retries = 10;
  VAR_14->term_retries = 2;
  VAR_14->keepalive_interval = 10;
  VAR_14->keepalive_timeout = 60;

  VAR_11->hard_header_len = sizeof(struct hdlc_header);
  VAR_11->header_ops = &VAR_9;
  VAR_11->type = VAR_0;
  FUNC_1(VAR_7, VAR_11);
  FUNC_5(VAR_11);
  return 0;
 }

 return -VAR_3;
}
