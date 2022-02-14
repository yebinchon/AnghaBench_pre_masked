
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {unsigned char port_id; } ;
struct cxgbi_ports_map {unsigned int max_connect; unsigned int used; int lock; struct cxgbi_sock** port_csk; } ;
struct cxgbi_device {struct cxgbi_ports_map pmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct cxgbi_sock *FUNC_2(struct cxgbi_device *VAR_0,
         unsigned char VAR_1)
{
 struct cxgbi_ports_map *VAR_2 = &VAR_0->pmap;
 unsigned int VAR_3;
 unsigned int VAR_4;

 if (!VAR_2->max_connect || !VAR_2->used)
  return ((void*)0);

 FUNC_0(&VAR_2->lock);
 VAR_4 = VAR_2->used;
 for (VAR_3 = 0; VAR_4 && VAR_3 < VAR_2->max_connect; VAR_3++) {
  struct cxgbi_sock *VAR_5 = VAR_2->port_csk[VAR_3];

  if (VAR_5) {
   if (VAR_5->port_id == VAR_1) {
    FUNC_1(&VAR_2->lock);
    return VAR_5;
   }
   VAR_4--;
  }
 }
 FUNC_1(&VAR_2->lock);

 return ((void*)0);
}
