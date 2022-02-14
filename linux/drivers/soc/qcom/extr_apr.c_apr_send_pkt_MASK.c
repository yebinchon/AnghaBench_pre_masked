
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apr_hdr {int pkt_size; int dest_svc; int dest_domain; int src_svc; int src_domain; } ;
struct apr_pkt {struct apr_hdr hdr; } ;
struct TYPE_2__ {int parent; } ;
struct apr_device {int lock; int svc_id; int domain_id; TYPE_1__ dev; } ;
struct apr {int ch; } ;


 int VAR_0 ;
 struct apr* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct apr_pkt*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct apr_device *VAR_1, struct apr_pkt *VAR_2)
{
 struct apr *VAR_3 = FUNC_0(VAR_1->dev.parent);
 struct apr_hdr *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->lock, VAR_5);

 VAR_4 = &VAR_2->hdr;
 VAR_4->src_domain = VAR_0;
 VAR_4->src_svc = VAR_1->svc_id;
 VAR_4->dest_domain = VAR_1->domain_id;
 VAR_4->dest_svc = VAR_1->svc_id;

 VAR_6 = FUNC_1(VAR_3->ch, VAR_2, VAR_4->pkt_size);
 FUNC_3(&VAR_1->lock, VAR_5);

 return VAR_6 ? VAR_6 : VAR_4->pkt_size;
}
