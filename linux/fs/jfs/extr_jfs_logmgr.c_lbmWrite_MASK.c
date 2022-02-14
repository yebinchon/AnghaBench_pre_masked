
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {int l_pn; int l_flag; struct lbuf* l_wqnext; scalar_t__ l_blkno; } ;
struct jfs_log {int l2bsize; struct lbuf* wqueue; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct jfs_log*) ;
 int FUNC_4 (char*,struct lbuf*,int,int) ;
 int FUNC_5 (struct lbuf*) ;
 int VAR_1 ;
 int FUNC_6 (struct lbuf*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct jfs_log * VAR_3, struct lbuf * VAR_4, int VAR_5,
       int VAR_6)
{
 struct lbuf *VAR_7;
 unsigned long VAR_8;

 FUNC_4("lbmWrite: bp:0x%p flag:0x%x pn:0x%x", VAR_4, VAR_5, VAR_4->l_pn);


 VAR_4->l_blkno =
     VAR_3->base + (VAR_4->l_pn << (VAR_0 - VAR_3->l2bsize));

 FUNC_0(VAR_8);




 VAR_4->l_flag = VAR_5;







 VAR_7 = VAR_3->wqueue;


 if (VAR_4->l_wqnext == ((void*)0)) {

  if (VAR_7 == ((void*)0)) {
   VAR_3->wqueue = VAR_4;
   VAR_4->l_wqnext = VAR_4;
  } else {
   VAR_3->wqueue = VAR_4;
   VAR_4->l_wqnext = VAR_7->l_wqnext;
   VAR_7->l_wqnext = VAR_4;
  }

  VAR_7 = VAR_4;
 }


 if ((VAR_4 != VAR_7->l_wqnext) || !(VAR_5 & VAR_2)) {
  FUNC_1(VAR_8);
  return;
 }

 FUNC_1(VAR_8);

 if (VAR_6)
  FUNC_5(VAR_4);
 else if (VAR_5 & VAR_1)
  FUNC_6(VAR_4);
 else {
  FUNC_3(VAR_3);
  FUNC_6(VAR_4);
  FUNC_2(VAR_3);
 }
}
