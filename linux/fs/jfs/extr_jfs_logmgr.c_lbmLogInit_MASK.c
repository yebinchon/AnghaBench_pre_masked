
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct page {int dummy; } ;
struct lbuf {char* l_ldata; struct lbuf* l_freelist; int l_ioevent; struct jfs_log* l_log; struct page* l_page; scalar_t__ l_offset; } ;
struct jfs_log {struct lbuf* lbuf_free; int free_wait; int * wqueue; int * bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct jfs_log*) ;
 struct lbuf* FUNC_5 (int,int) ;
 int FUNC_6 (struct jfs_log*) ;
 char* FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct jfs_log * VAR_6)
{
 int VAR_7;
 struct lbuf *VAR_8;

 FUNC_4("lbmLogInit: log:0x%p", VAR_6);


 VAR_6->bp = ((void*)0);


 VAR_6->wqueue = ((void*)0);
 FUNC_3(&VAR_6->free_wait);

 VAR_6->lbuf_free = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_2;) {
  char *VAR_9;
  uint VAR_10;
  struct page *VAR_11 = FUNC_1(VAR_1 | VAR_5);

  if (!VAR_11)
   goto error;
  VAR_9 = FUNC_7(VAR_11);
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += VAR_3) {
   VAR_8 = FUNC_5(sizeof(struct lbuf), VAR_1);
   if (VAR_8 == ((void*)0)) {
    if (VAR_10 == 0)
     FUNC_0(VAR_11);
    goto error;
   }
   if (VAR_10)
    FUNC_2(VAR_11);
   VAR_8->l_offset = VAR_10;
   VAR_8->l_ldata = VAR_9 + VAR_10;
   VAR_8->l_page = VAR_11;
   VAR_8->l_log = VAR_6;
   FUNC_3(&VAR_8->l_ioevent);

   VAR_8->l_freelist = VAR_6->lbuf_free;
   VAR_6->lbuf_free = VAR_8;
   VAR_7++;
  }
 }

 return (0);

      error:
 FUNC_6(VAR_6);
 return -VAR_0;
}
