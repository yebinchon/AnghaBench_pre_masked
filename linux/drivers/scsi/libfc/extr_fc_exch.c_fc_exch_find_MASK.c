
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct fc_lport {int port_id; TYPE_1__* host; } ;
struct fc_exch_pool {int lock; } ;
struct fc_exch_mgr {scalar_t__ min_xid; scalar_t__ max_xid; int pool; struct fc_lport* lport; } ;
struct fc_exch {scalar_t__ xid; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (struct fc_lport*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct fc_exch*) ;
 struct fc_exch* FUNC_4 (struct fc_exch_pool*,scalar_t__) ;
 struct fc_exch VAR_3 ;
 scalar_t__ VAR_4 ;
 struct fc_exch_pool* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct fc_exch *FUNC_9(struct fc_exch_mgr *VAR_5, u16 VAR_6)
{
 struct fc_lport *VAR_7 = VAR_5->lport;
 struct fc_exch_pool *VAR_8;
 struct fc_exch *VAR_9 = ((void*)0);
 u16 VAR_10 = VAR_6 & VAR_1;

 if (VAR_6 == VAR_0)
  return ((void*)0);

 if (VAR_10 >= VAR_4 || !FUNC_2(VAR_10)) {
  FUNC_6("host%u: lport %6.6x: xid %d invalid CPU %d\n:",
         VAR_7->host->host_no, VAR_7->port_id, VAR_6, VAR_10);
  return ((void*)0);
 }

 if ((VAR_6 >= VAR_5->min_xid) && (VAR_6 <= VAR_5->max_xid)) {
  VAR_8 = FUNC_5(VAR_5->pool, VAR_10);
  FUNC_7(&VAR_8->lock);
  VAR_9 = FUNC_4(VAR_8, (VAR_6 - VAR_5->min_xid) >> VAR_2);
  if (VAR_9 == &VAR_3) {
   FUNC_0(VAR_7, "xid %x quarantined\n", VAR_6);
   VAR_9 = ((void*)0);
  }
  if (VAR_9) {
   FUNC_1(VAR_9->xid != VAR_6);
   FUNC_3(VAR_9);
  }
  FUNC_8(&VAR_8->lock);
 }
 return VAR_9;
}
