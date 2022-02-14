
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {int l_page; struct lbuf* l_freelist; } ;
struct jfs_log {struct lbuf* lbuf_free; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct jfs_log*) ;
 int FUNC_2 (struct lbuf*) ;

__attribute__((used)) static void FUNC_3(struct jfs_log * VAR_0)
{
 struct lbuf *VAR_1;

 FUNC_1("lbmLogShutdown: log:0x%p", VAR_0);

 VAR_1 = VAR_0->lbuf_free;
 while (VAR_1) {
  struct lbuf *VAR_2 = VAR_1->l_freelist;
  FUNC_0(VAR_1->l_page);
  FUNC_2(VAR_1);
  VAR_1 = VAR_2;
 }
}
