
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sin6_port; } ;
struct TYPE_4__ {scalar_t__ sin_port; } ;
struct cxgbi_sock {size_t port_id; scalar_t__ csk_family; TYPE_2__ saddr6; TYPE_1__ saddr; struct cxgbi_device* cdev; } ;
struct cxgbi_ports_map {int max_connect; int used; int next; int lock; scalar_t__ sport_base; struct cxgbi_sock** port_csk; } ;
struct cxgbi_device {TYPE_3__** ports; struct cxgbi_ports_map pmap; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,size_t,int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct cxgbi_device*,...) ;
 int FUNC_5 (char*,struct cxgbi_device*,size_t,int ) ;
 int FUNC_6 (char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cxgbi_sock *VAR_4)
{
 struct cxgbi_device *VAR_5 = VAR_4->cdev;
 struct cxgbi_ports_map *VAR_6 = &VAR_5->pmap;
 unsigned int VAR_7;
 int VAR_8;
 __be16 *VAR_9;

 if (!VAR_6->max_connect) {
  FUNC_4("cdev 0x%p, p#%u %s, NO port map.\n",
      VAR_5, VAR_4->port_id, VAR_5->ports[VAR_4->port_id]->name);
  return -VAR_3;
 }

 if (VAR_4->csk_family == VAR_0)
  VAR_9 = &VAR_4->saddr.sin_port;
 else
  VAR_9 = &VAR_4->saddr6.sin6_port;

 if (*VAR_9) {
  FUNC_4("source port NON-ZERO %u.\n",
   FUNC_3(*VAR_9));
  return -VAR_2;
 }

 FUNC_7(&VAR_6->lock);
 if (VAR_6->used >= VAR_6->max_connect) {
  FUNC_8(&VAR_6->lock);
  FUNC_5("cdev 0x%p, p#%u %s, ALL ports used.\n",
   VAR_5, VAR_4->port_id, VAR_5->ports[VAR_4->port_id]->name);
  return -VAR_3;
 }

 VAR_7 = VAR_8 = VAR_6->next;
 do {
  if (++VAR_8 >= VAR_6->max_connect)
   VAR_8 = 0;
  if (!VAR_6->port_csk[VAR_8]) {
   VAR_6->used++;
   *VAR_9 = FUNC_1(VAR_6->sport_base + VAR_8);
   VAR_6->next = VAR_8;
   VAR_6->port_csk[VAR_8] = VAR_4;
   FUNC_8(&VAR_6->lock);
   FUNC_0(VAR_4);
   FUNC_2(1 << VAR_1,
    "cdev 0x%p, p#%u %s, p %u, %u.\n",
    VAR_5, VAR_4->port_id,
    VAR_5->ports[VAR_4->port_id]->name,
    VAR_6->sport_base + VAR_8, VAR_6->next);
   return 0;
  }
 } while (VAR_8 != VAR_7);
 FUNC_8(&VAR_6->lock);


 FUNC_6("cdev 0x%p, p#%u %s, next %u?\n",
  VAR_5, VAR_4->port_id, VAR_5->ports[VAR_4->port_id]->name,
  VAR_6->next);
 return -VAR_3;
}
