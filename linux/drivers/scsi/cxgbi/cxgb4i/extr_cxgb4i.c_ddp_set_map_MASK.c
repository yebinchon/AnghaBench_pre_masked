
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct cxgbi_task_tag_info {unsigned int idx; unsigned int npods; int cid; struct scatterlist* sgl; } ;
struct cxgbi_sock {int port_id; } ;
struct cxgbi_ppm {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct cxgbi_ppm*,struct cxgbi_sock*,struct cxgbi_task_tag_info*,unsigned int,unsigned int,struct scatterlist**,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cxgbi_ppm *VAR_1, struct cxgbi_sock *VAR_2,
         struct cxgbi_task_tag_info *VAR_3)
{
 unsigned int VAR_4 = VAR_3->idx;
 unsigned int VAR_5 = VAR_3->npods;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0;
 struct scatterlist *VAR_9 = VAR_3->sgl;
 unsigned int VAR_10 = 0;

 VAR_3->cid = VAR_2->port_id;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += VAR_7, VAR_4 += VAR_7) {
  VAR_7 = VAR_5 - VAR_6;

  if (VAR_7 > VAR_0)
   VAR_7 = VAR_0;
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7,
        &VAR_9, &VAR_10);
  if (VAR_8 < 0)
   break;
 }

 return VAR_8;
}
