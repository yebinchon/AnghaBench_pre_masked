
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tlock {int flag; int type; int lock; int ip; TYPE_1__* mp; } ;
struct tblock {int clsn; int pn; int eor; int cqueue; struct lbuf* bp; int flag; } ;
struct lvd {int offset; int length; } ;
struct lv {int length; int offset; } ;
struct lrd {int length; int type; } ;
struct logpage {int dummy; } ;
struct linelock {int l2linesize; int index; int maxcnt; int next; struct lv* lv; } ;
struct lbuf {int l_eor; scalar_t__ l_ldata; } ;
struct jfs_log {int eor; int page; struct lbuf* bp; int cqueue; } ;
struct inlinelock {int pxd; } ;
typedef int * caddr_t ;
struct TYPE_6__ {int i_xtroot; int i_dtroot; } ;
struct TYPE_5__ {int commit; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct jfs_log*) ;
 int FUNC_4 (struct jfs_log*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 struct inlinelock* VAR_6 ;
 int FUNC_6 (char*,struct tlock*) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct jfs_log*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_14(struct jfs_log * VAR_13, struct tblock * VAR_14, struct lrd * VAR_15,
       struct tlock * VAR_16)
{
 int VAR_17 = 0;
 struct lbuf *VAR_18;
 struct logpage *VAR_19;
 caddr_t VAR_20;
 int VAR_21;
 int VAR_22;
 caddr_t VAR_23;
 caddr_t VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 struct linelock *VAR_29;
 struct lv *VAR_30;
 struct lvd *VAR_31;
 int VAR_32;

 VAR_28 = 0;


 VAR_18 = (struct lbuf *) VAR_13->bp;
 VAR_19 = (struct logpage *) VAR_18->l_ldata;
 VAR_21 = VAR_13->eor;


 if (VAR_16 == ((void*)0))
  goto moveLrd;





 if (VAR_16->flag & VAR_12) {
  VAR_23 = (caddr_t) (VAR_16->mp->data);
  VAR_29 = (struct linelock *) & VAR_16->lock;
 }

 else if (VAR_16->flag & VAR_11) {
  if (VAR_16->type & VAR_9)
   VAR_23 = (caddr_t) &FUNC_2(VAR_16->ip)->i_dtroot;
  else
   VAR_23 = (caddr_t) &FUNC_2(VAR_16->ip)->i_xtroot;
  VAR_29 = (struct linelock *) & VAR_16->lock;
 }
 else {
  FUNC_6("lmWriteRecord: UFO tlck:0x%p", VAR_16);
  return 0;
 }
 VAR_32 = VAR_29->l2linesize;

      moveData:
 FUNC_0(VAR_29->index <= VAR_29->maxcnt);

 VAR_30 = VAR_29->lv;
 for (VAR_27 = 0; VAR_27 < VAR_29->index; VAR_27++, VAR_30++) {
  if (VAR_30->length == 0)
   continue;


  if (VAR_21 >= VAR_2 - VAR_3) {

   FUNC_11(VAR_13);

   VAR_18 = VAR_13->bp;
   VAR_19 = (struct logpage *) VAR_18->l_ldata;
   VAR_21 = VAR_1;
  }




  VAR_24 = (u8 *) VAR_23 + (VAR_30->offset << VAR_32);
  VAR_25 = VAR_30->length << VAR_32;
  VAR_28 += VAR_25;
  while (VAR_25 > 0) {
   VAR_22 = (VAR_2 - VAR_3) - VAR_21;
   VAR_26 = FUNC_13(VAR_22, VAR_25);
   VAR_20 = (caddr_t) VAR_19 + VAR_21;
   FUNC_12(VAR_20, VAR_24, VAR_26);
   VAR_21 += VAR_26;


   if (VAR_21 < VAR_2 - VAR_3)
    break;


   FUNC_11(VAR_13);

   VAR_18 = (struct lbuf *) VAR_13->bp;
   VAR_19 = (struct logpage *) VAR_18->l_ldata;
   VAR_21 = VAR_1;

   VAR_25 -= VAR_26;
   VAR_24 += VAR_26;
  }




  VAR_28 += 4;
  VAR_31 = (struct lvd *) ((caddr_t) VAR_19 + VAR_21);
  VAR_31->offset = FUNC_5(VAR_30->offset);
  VAR_31->length = FUNC_5(VAR_30->length);
  VAR_21 += 4;
  FUNC_7("lmWriteRecord: lv offset:%d length:%d",
    VAR_30->offset, VAR_30->length);
 }

 if ((VAR_27 = VAR_29->next)) {
  VAR_29 = (struct linelock *) FUNC_9(VAR_27);
  goto moveData;
 }




      moveLrd:
 VAR_15->length = FUNC_5(VAR_28);

 VAR_24 = (caddr_t) VAR_15;
 VAR_25 = VAR_4;

 while (VAR_25 > 0) {
  VAR_22 = (VAR_2 - VAR_3) - VAR_21;
  VAR_26 = FUNC_13(VAR_22, VAR_25);
  VAR_20 = (caddr_t) VAR_19 + VAR_21;
  FUNC_12(VAR_20, VAR_24, VAR_26);

  VAR_21 += VAR_26;
  VAR_25 -= VAR_26;


  if (VAR_25)
   goto pageFull;






  VAR_13->eor = VAR_21;
  VAR_18->l_eor = VAR_21;
  VAR_17 = (VAR_13->page << VAR_0) + VAR_21;

  if (VAR_15->type & FUNC_5(VAR_5)) {
   VAR_14->clsn = VAR_17;
   FUNC_7("wr: tclsn:0x%x, beor:0x%x", VAR_14->clsn,
     VAR_18->l_eor);

   FUNC_1(VAR_7.commit);
   FUNC_3(VAR_13);


   VAR_14->flag = VAR_8;
   VAR_14->bp = VAR_13->bp;
   VAR_14->pn = VAR_13->page;
   VAR_14->eor = VAR_13->eor;


   FUNC_10(&VAR_14->cqueue, &VAR_13->cqueue);

   FUNC_4(VAR_13);
  }

  FUNC_7("lmWriteRecord: lrd:0x%04x bp:0x%p pn:%d eor:0x%x",
   FUNC_8(VAR_15->type), VAR_13->bp, VAR_13->page, VAR_21);


  if (VAR_21 < VAR_2 - VAR_3)
   return VAR_17;

       pageFull:

  FUNC_11(VAR_13);

  VAR_18 = (struct lbuf *) VAR_13->bp;
  VAR_19 = (struct logpage *) VAR_18->l_ldata;
  VAR_21 = VAR_1;
  VAR_24 += VAR_26;
 }

 return VAR_17;
}
