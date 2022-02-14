
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef size_t u8 ;
struct snic_sg_desc {int dummy; } ;
struct TYPE_6__ {scalar_t__ init_ctx; } ;
struct snic_req_info {size_t rq_pool_type; int req_len; TYPE_3__ hdr; struct snic_req_info* req; struct snic* snic; int start_time; } ;
struct snic_host_req {size_t rq_pool_type; int req_len; TYPE_3__ hdr; struct snic_host_req* req; struct snic* snic; int start_time; } ;
struct TYPE_4__ {int * sgl_cnt; int max_sgl; int alloc_fail; } ;
struct TYPE_5__ {TYPE_1__ io; } ;
struct snic {int shost; TYPE_2__ s_stats; int * req_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,struct snic_req_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_4 ;
 struct snic_req_info* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snic_req_info*,int ,int) ;

struct snic_req_info *
FUNC_8(struct snic *VAR_5, int VAR_6)
{
 u8 VAR_7;
 struct snic_req_info *VAR_8 = ((void*)0);

 VAR_7 = (VAR_6 <= VAR_2) ?
  VAR_2 : VAR_3;

 VAR_8 = FUNC_6(VAR_5->req_pool[VAR_7], VAR_0);
 if (!VAR_8) {
  FUNC_3(&VAR_5->s_stats.io.alloc_fail);
  FUNC_1(VAR_5->shost,
         "Failed to allocate memory from snic req pool id = %d\n",
         VAR_7);
  return VAR_8;
 }

 FUNC_7(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->rq_pool_type = VAR_7;
 VAR_8->start_time = VAR_4;
 VAR_8->req = (struct snic_host_req *) (VAR_8 + 1);
 VAR_8->req_len = sizeof(struct snic_host_req);
 VAR_8->snic = VAR_5;

 VAR_8->req = (struct snic_host_req *)(VAR_8 + 1);

 if (VAR_6 == 0)
  goto end;

 VAR_8->req_len += (VAR_6 * sizeof(struct snic_sg_desc));

 if (VAR_6 > FUNC_4(&VAR_5->s_stats.io.max_sgl))
  FUNC_5(&VAR_5->s_stats.io.max_sgl, VAR_6);

 FUNC_0(VAR_6 > VAR_1);
 FUNC_3(&VAR_5->s_stats.io.sgl_cnt[VAR_6 - 1]);

end:
 FUNC_7(VAR_8->req, 0, VAR_8->req_len);


 VAR_8->req->hdr.init_ctx = (ulong) VAR_8;

 FUNC_2(VAR_5->shost, "Req_alloc:rqi = %p allocatd.\n", VAR_8);

 return VAR_8;
}
