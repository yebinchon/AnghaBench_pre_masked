
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t page_len; int page_base; } ;
struct svc_rqst {TYPE_2__ rq_res; struct page** rq_next_page; } ;
struct TYPE_3__ {struct svc_rqst* data; } ;
struct splice_desc {size_t len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; struct page* page; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int
FUNC_2(struct pipe_inode_info *VAR_0, struct pipe_buffer *VAR_1,
    struct splice_desc *VAR_2)
{
 struct svc_rqst *VAR_3 = VAR_2->u.data;
 struct page **VAR_4 = VAR_3->rq_next_page;
 struct page *VAR_5 = VAR_1->page;
 size_t VAR_6;

 VAR_6 = VAR_2->len;

 if (VAR_3->rq_res.page_len == 0) {
  FUNC_0(VAR_5);
  FUNC_1(*VAR_3->rq_next_page);
  *(VAR_3->rq_next_page++) = VAR_5;
  VAR_3->rq_res.page_base = VAR_1->offset;
  VAR_3->rq_res.page_len = VAR_6;
 } else if (VAR_5 != VAR_4[-1]) {
  FUNC_0(VAR_5);
  if (*VAR_3->rq_next_page)
   FUNC_1(*VAR_3->rq_next_page);
  *(VAR_3->rq_next_page++) = VAR_5;
  VAR_3->rq_res.page_len += VAR_6;
 } else
  VAR_3->rq_res.page_len += VAR_6;

 return VAR_6;
}
