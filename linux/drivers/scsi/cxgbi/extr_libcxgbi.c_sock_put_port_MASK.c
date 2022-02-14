
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sin6_port; } ;
struct TYPE_4__ {scalar_t__ sin_port; } ;
struct cxgbi_sock {scalar_t__ csk_family; size_t port_id; TYPE_2__ saddr6; TYPE_1__ saddr; struct cxgbi_device* cdev; } ;
struct cxgbi_ports_map {int sport_base; int max_connect; int lock; int used; int ** port_csk; } ;
struct cxgbi_device {TYPE_3__** ports; struct cxgbi_ports_map pmap; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (int,char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cxgbi_sock *VAR_2)
{
 struct cxgbi_device *VAR_3 = VAR_2->cdev;
 struct cxgbi_ports_map *VAR_4 = &VAR_3->pmap;
 __be16 *VAR_5;

 if (VAR_2->csk_family == VAR_0)
  VAR_5 = &VAR_2->saddr.sin_port;
 else
  VAR_5 = &VAR_2->saddr6.sin6_port;

 if (*VAR_5) {
  int VAR_6 = FUNC_2(*VAR_5) - VAR_4->sport_base;

  *VAR_5 = 0;
  if (VAR_6 < 0 || VAR_6 >= VAR_4->max_connect) {
   FUNC_3("cdev 0x%p, p#%u %s, port %u OOR.\n",
    VAR_3, VAR_2->port_id,
    VAR_3->ports[VAR_2->port_id]->name,
    FUNC_2(*VAR_5));
   return;
  }

  FUNC_4(&VAR_4->lock);
  VAR_4->port_csk[VAR_6] = ((void*)0);
  VAR_4->used--;
  FUNC_5(&VAR_4->lock);

  FUNC_1(1 << VAR_1,
   "cdev 0x%p, p#%u %s, release %u.\n",
   VAR_3, VAR_2->port_id, VAR_3->ports[VAR_2->port_id]->name,
   VAR_4->sport_base + VAR_6);

  FUNC_0(VAR_2);
 }
}
