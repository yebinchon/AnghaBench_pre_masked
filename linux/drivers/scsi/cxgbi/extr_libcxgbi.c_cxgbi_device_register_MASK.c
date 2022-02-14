
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cxgbi_hba {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct cxgbi_device {char* dd_data; int rcu_node; int list_head; TYPE_1__ pmap; struct cxgbi_hba** hbas; struct net_device** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cxgbi_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,char*,struct cxgbi_device*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct cxgbi_device *FUNC_10(unsigned int VAR_6,
        unsigned int VAR_7)
{
 struct cxgbi_device *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8) + VAR_6 + VAR_7 *
   (sizeof(struct cxgbi_hba *) +
    sizeof(struct net_device *)),
   VAR_1);
 if (!VAR_8) {
  FUNC_6("nport %d, OOM.\n", VAR_7);
  return ((void*)0);
 }
 VAR_8->ports = (struct net_device **)(VAR_8 + 1);
 VAR_8->hbas = (struct cxgbi_hba **)(((char*)VAR_8->ports) + VAR_7 *
      sizeof(struct net_device *));
 if (VAR_6)
  VAR_8->dd_data = ((char *)VAR_8->hbas) +
    VAR_7 * sizeof(struct cxgbi_hba *);
 FUNC_8(&VAR_8->pmap.lock);

 FUNC_4(&VAR_3);
 FUNC_1(&VAR_8->list_head, &VAR_2);
 FUNC_5(&VAR_3);

 FUNC_7(&VAR_5);
 FUNC_2(&VAR_8->rcu_node, &VAR_4);
 FUNC_9(&VAR_5);

 FUNC_3(1 << VAR_0,
  "cdev 0x%p, p# %u.\n", VAR_8, VAR_7);
 return VAR_8;
}
