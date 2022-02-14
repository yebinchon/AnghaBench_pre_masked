
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae_ring {TYPE_2__* q; } ;
struct hnae_desc_cb {int dummy; } ;
struct hnae_buf_ops {int (* alloc_buffer ) (struct hnae_ring*,struct hnae_desc_cb*) ;int (* map_buffer ) (struct hnae_ring*,struct hnae_desc_cb*) ;int (* free_buffer ) (struct hnae_ring*,struct hnae_desc_cb*) ;} ;
struct TYPE_4__ {TYPE_1__* handle; } ;
struct TYPE_3__ {struct hnae_buf_ops* bops; } ;


 int FUNC_0 (struct hnae_ring*,struct hnae_desc_cb*) ;
 int FUNC_1 (struct hnae_ring*,struct hnae_desc_cb*) ;
 int FUNC_2 (struct hnae_ring*,struct hnae_desc_cb*) ;

__attribute__((used)) static inline int FUNC_3(struct hnae_ring *VAR_0,
       struct hnae_desc_cb *VAR_1)
{
 struct hnae_buf_ops *VAR_2 = VAR_0->q->handle->bops;
 int VAR_3;

 VAR_3 = VAR_2->alloc_buffer(VAR_0, VAR_1);
 if (VAR_3)
  goto out;

 VAR_3 = VAR_2->map_buffer(VAR_0, VAR_1);
 if (VAR_3)
  goto out_with_buf;

 return 0;

out_with_buf:
 VAR_2->free_buffer(VAR_0, VAR_1);
out:
 return VAR_3;
}
