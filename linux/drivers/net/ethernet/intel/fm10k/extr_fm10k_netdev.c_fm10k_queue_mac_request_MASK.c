
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_2__ {void* vid; void* glort; int addr; } ;
struct fm10k_macvlan_request {int set; int list; TYPE_1__ mac; int type; } ;
struct fm10k_intfc {int macvlan_lock; int macvlan_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 struct fm10k_macvlan_request* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct fm10k_intfc *VAR_4, u16 VAR_5,
       const unsigned char *VAR_6, u16 VAR_7, bool VAR_8)
{
 struct fm10k_macvlan_request *VAR_9;
 unsigned long VAR_10;




 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_0;

 if (FUNC_2(VAR_6))
  VAR_9->type = VAR_1;
 else
  VAR_9->type = VAR_2;

 FUNC_0(VAR_9->mac.addr, VAR_6);
 VAR_9->mac.glort = VAR_5;
 VAR_9->mac.vid = VAR_7;
 VAR_9->set = VAR_8;

 FUNC_5(&VAR_4->macvlan_lock, VAR_10);
 FUNC_4(&VAR_9->list, &VAR_4->macvlan_requests);
 FUNC_6(&VAR_4->macvlan_lock, VAR_10);

 FUNC_1(VAR_4);

 return 0;
}
