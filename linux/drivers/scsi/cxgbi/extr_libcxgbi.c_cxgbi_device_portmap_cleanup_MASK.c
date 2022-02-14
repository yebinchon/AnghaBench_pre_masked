
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int lock; } ;
struct cxgbi_ports_map {int max_connect; struct cxgbi_sock** port_csk; } ;
struct cxgbi_device {struct cxgbi_ports_map pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (int,char*,struct cxgbi_sock*,struct cxgbi_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cxgbi_device *VAR_2)
{
 struct cxgbi_ports_map *VAR_3 = &VAR_2->pmap;
 struct cxgbi_sock *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->max_connect; VAR_5++) {
  if (VAR_3->port_csk[VAR_5]) {
   VAR_4 = VAR_3->port_csk[VAR_5];
   VAR_3->port_csk[VAR_5] = ((void*)0);
   FUNC_3(1 << VAR_1,
    "csk 0x%p, cdev 0x%p, offload down.\n",
    VAR_4, VAR_2);
   FUNC_4(&VAR_4->lock);
   FUNC_2(VAR_4, VAR_0);
   FUNC_0(VAR_4);
   FUNC_5(&VAR_4->lock);
   FUNC_1(VAR_4);
  }
 }
}
