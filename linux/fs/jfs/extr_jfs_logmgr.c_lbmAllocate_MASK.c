
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {int l_pn; scalar_t__ l_ceor; scalar_t__ l_blkno; struct lbuf* l_freelist; int * l_wqnext; scalar_t__ l_flag; } ;
struct jfs_log {int l2bsize; scalar_t__ base; struct lbuf* lbuf_free; int free_wait; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,struct lbuf*,unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static struct lbuf *FUNC_3(struct jfs_log * VAR_1, int VAR_2)
{
 struct lbuf *VAR_3;
 unsigned long VAR_4;




 FUNC_0(VAR_4);
 FUNC_1(VAR_1->free_wait, (VAR_3 = VAR_1->lbuf_free), VAR_4);
 VAR_1->lbuf_free = VAR_3->l_freelist;
 FUNC_2(VAR_4);

 VAR_3->l_flag = 0;

 VAR_3->l_wqnext = ((void*)0);
 VAR_3->l_freelist = ((void*)0);

 VAR_3->l_pn = VAR_2;
 VAR_3->l_blkno = VAR_1->base + (VAR_2 << (VAR_0 - VAR_1->l2bsize));
 VAR_3->l_ceor = 0;

 return VAR_3;
}
