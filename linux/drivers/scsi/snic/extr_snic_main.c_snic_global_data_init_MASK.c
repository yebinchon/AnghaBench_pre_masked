
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snic_req_info {int dummy; } ;
struct snic_max_sgl {int dummy; } ;
struct snic_host_req {int dummy; } ;
struct snic_dflt_sgl {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct kmem_cache** req_cache; int event_q; int snic_list_lock; int snic_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct kmem_cache* FUNC_4 (char*,int,int ,int ,int *) ;
 int FUNC_5 (struct kmem_cache*) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(void)
{
 int VAR_8 = 0;
 struct kmem_cache *VAR_9;
 ssize_t VAR_10 = 0;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);

 if (!VAR_7) {
  FUNC_1("Failed to allocate Global Context.\n");

  VAR_8 = -VAR_0;
  goto gdi_end;
 }
 FUNC_0(&VAR_7->snic_list);
 FUNC_11(&VAR_7->snic_list_lock);


 VAR_10 = sizeof(struct snic_req_info);
 VAR_10 += sizeof(struct snic_host_req) + sizeof(struct snic_dflt_sgl);
 VAR_9 = FUNC_4("snic_req_dfltsgl", VAR_10, VAR_6,
       VAR_2, ((void*)0));
 if (!VAR_9) {
  FUNC_1("Failed to create snic default sgl slab\n");
  VAR_8 = -VAR_0;

  goto err_dflt_req_slab;
 }
 VAR_7->req_cache[VAR_3] = VAR_9;


 VAR_10 = sizeof(struct snic_req_info);
 VAR_10 += sizeof(struct snic_host_req) + sizeof(struct snic_max_sgl);
 VAR_9 = FUNC_4("snic_req_maxsgl", VAR_10, VAR_6,
       VAR_2, ((void*)0));
 if (!VAR_9) {
  FUNC_1("Failed to create snic max sgl slab\n");
  VAR_8 = -VAR_0;

  goto err_max_req_slab;
 }
 VAR_7->req_cache[VAR_4] = VAR_9;

 VAR_10 = sizeof(struct snic_host_req);
 VAR_9 = FUNC_4("snic_req_maxsgl", VAR_10, VAR_6,
       VAR_2, ((void*)0));
 if (!VAR_9) {
  FUNC_1("Failed to create snic tm req slab\n");
  VAR_8 = -VAR_0;

  goto err_tmreq_slab;
 }
 VAR_7->req_cache[VAR_5] = VAR_9;


 VAR_7->event_q = FUNC_2("snic_event_wq");
 if (!VAR_7->event_q) {
  FUNC_1("snic event queue create failed\n");
  VAR_8 = -VAR_0;

  goto err_eventq;
 }

 return VAR_8;

err_eventq:
 FUNC_5(VAR_7->req_cache[VAR_5]);

err_tmreq_slab:
 FUNC_5(VAR_7->req_cache[VAR_4]);

err_max_req_slab:
 FUNC_5(VAR_7->req_cache[VAR_3]);

err_dflt_req_slab:




 FUNC_3(VAR_7);
 VAR_7 = ((void*)0);

gdi_end:
 return VAR_8;
}
