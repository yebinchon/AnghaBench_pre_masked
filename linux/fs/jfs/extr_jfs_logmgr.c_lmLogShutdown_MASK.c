
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sync; } ;
struct TYPE_6__ {TYPE_1__ syncpt; } ;
struct lrd {TYPE_2__ log; scalar_t__ length; void* type; scalar_t__ backchain; scalar_t__ logtid; } ;
struct logsuper {void* end; void* state; } ;
struct TYPE_8__ {void* eor; } ;
struct TYPE_7__ {void* eor; } ;
struct logpage {TYPE_4__ t; TYPE_3__ h; } ;
struct lbuf {scalar_t__ l_ldata; int l_eor; } ;
struct jfs_log {int eor; int page; struct lbuf* bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct jfs_log*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct jfs_log*,struct lbuf*,int) ;
 int VAR_2 ;
 int FUNC_6 (struct lbuf*,int ) ;
 int FUNC_7 (struct jfs_log*) ;
 int VAR_3 ;
 int FUNC_8 (struct jfs_log*,int,struct lbuf**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct jfs_log*,struct lbuf*,int,int ) ;
 int FUNC_10 (struct jfs_log*,int *,struct lrd*,int *) ;

int FUNC_11(struct jfs_log * VAR_6)
{
 int VAR_7;
 struct lrd VAR_8;
 int VAR_9;
 struct logsuper *VAR_10;
 struct lbuf *VAR_11;
 struct lbuf *VAR_12;
 struct logpage *VAR_13;

 FUNC_3("lmLogShutdown: log:0x%p", VAR_6);

 FUNC_2(VAR_6, 2);





 VAR_8.logtid = 0;
 VAR_8.backchain = 0;
 VAR_8.type = FUNC_0(VAR_1);
 VAR_8.length = 0;
 VAR_8.log.syncpt.sync = 0;

 VAR_9 = FUNC_10(VAR_6, ((void*)0), &VAR_8, ((void*)0));
 VAR_12 = VAR_6->bp;
 VAR_13 = (struct logpage *) VAR_12->l_ldata;
 VAR_13->h.eor = VAR_13->t.eor = FUNC_0(VAR_12->l_eor);
 FUNC_9(VAR_6, VAR_6->bp, VAR_5 | VAR_3 | VAR_4, 0);
 FUNC_6(VAR_6->bp, VAR_2);
 VAR_6->bp = ((void*)0);






 if ((VAR_7 = FUNC_8(VAR_6, 1, &VAR_11)))
  goto out;

 VAR_10 = (struct logsuper *) VAR_11->l_ldata;
 VAR_10->state = FUNC_1(VAR_0);
 VAR_10->end = FUNC_1(VAR_9);
 FUNC_5(VAR_6, VAR_11, VAR_5 | VAR_3 | VAR_4);
 VAR_7 = FUNC_6(VAR_11, VAR_2);

 FUNC_3("lmLogShutdown: lsn:0x%x page:%d eor:%d",
   VAR_9, VAR_6->page, VAR_6->eor);

      out:



 FUNC_7(VAR_6);

 if (VAR_7) {
  FUNC_4("lmLogShutdown: exit(%d)", VAR_7);
 }
 return VAR_7;
}
