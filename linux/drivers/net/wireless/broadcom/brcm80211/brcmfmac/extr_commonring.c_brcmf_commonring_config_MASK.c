
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct brcmf_commonring {int inited; scalar_t__ f_ptr; int cr_ctx; int (* cr_write_wptr ) (int ) ;scalar_t__ w_ptr; int (* cr_write_rptr ) (int ) ;scalar_t__ r_ptr; int lock; void* buf_addr; void* item_len; void* depth; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct brcmf_commonring *VAR_0, u16 VAR_1,
        u16 VAR_2, void *VAR_3)
{
 VAR_0->depth = VAR_1;
 VAR_0->item_len = VAR_2;
 VAR_0->buf_addr = VAR_3;
 if (!VAR_0->inited) {
  FUNC_0(&VAR_0->lock);
  VAR_0->inited = 1;
 }
 VAR_0->r_ptr = 0;
 if (VAR_0->cr_write_rptr)
  VAR_0->cr_write_rptr(VAR_0->cr_ctx);
 VAR_0->w_ptr = 0;
 if (VAR_0->cr_write_wptr)
  VAR_0->cr_write_wptr(VAR_0->cr_ctx);
 VAR_0->f_ptr = 0;
}
