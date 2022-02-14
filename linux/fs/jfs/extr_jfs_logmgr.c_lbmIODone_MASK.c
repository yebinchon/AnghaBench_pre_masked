
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbuf {int l_flag; int l_pn; int l_ioevent; struct lbuf* l_wqnext; scalar_t__ l_ceor; struct jfs_log* l_log; } ;
struct jfs_log {struct lbuf* wqueue; scalar_t__ clsn; } ;
struct bio {scalar_t__ bi_status; struct lbuf* bi_private; } ;
struct TYPE_2__ {int pagedone; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,struct lbuf*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct lbuf*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct lbuf*) ;
 int FUNC_10 (struct lbuf*) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void FUNC_11(struct bio *VAR_11)
{
 struct lbuf *VAR_12 = VAR_11->bi_private;
 struct lbuf *VAR_13, *VAR_14;
 struct jfs_log *VAR_15;
 unsigned long VAR_16;




 FUNC_7("lbmIODone: bp:0x%p flag:0x%x", VAR_12, VAR_12->l_flag);

 FUNC_1(VAR_16);

 VAR_12->l_flag |= VAR_2;

 if (VAR_11->bi_status) {
  VAR_12->l_flag |= VAR_3;

  FUNC_6("lbmIODone: I/O error in JFS log");
 }

 FUNC_5(VAR_11);




 if (VAR_12->l_flag & VAR_6) {
  VAR_12->l_flag &= ~VAR_6;

  FUNC_2(VAR_16);


  FUNC_3(&VAR_12->l_ioevent);

  return;
 }
 VAR_12->l_flag &= ~VAR_9;
 FUNC_0(VAR_10.pagedone);


 VAR_15 = VAR_12->l_log;
 VAR_15->clsn = (VAR_12->l_pn << VAR_0) + VAR_12->l_ceor;

 if (VAR_12->l_flag & VAR_1) {
  FUNC_3(&VAR_12->l_ioevent);
  FUNC_2(VAR_16);
  return;
 }

 VAR_14 = VAR_15->wqueue;


 if (VAR_12 == VAR_14) {



  if (VAR_12->l_flag & VAR_7) {
   VAR_15->wqueue = ((void*)0);
   VAR_12->l_wqnext = ((void*)0);
  }
 }

 else {



  if (VAR_12->l_flag & VAR_7) {
   VAR_13 = VAR_14->l_wqnext = VAR_12->l_wqnext;
   VAR_12->l_wqnext = ((void*)0);
   if (VAR_13->l_flag & VAR_9) {




    FUNC_8(VAR_13);
   }
  }
 }
 if (VAR_12->l_flag & VAR_8) {
  FUNC_2(VAR_16);


  FUNC_3(&VAR_12->l_ioevent);
 }




 else if (VAR_12->l_flag & VAR_5) {
  FUNC_2(VAR_16);
  FUNC_10(VAR_12);
 }







 else {
  FUNC_4(VAR_12->l_flag & VAR_7);
  FUNC_4(VAR_12->l_flag & VAR_4);
  FUNC_9(VAR_12);

  FUNC_2(VAR_16);
 }
}
