
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flag; void* nextindex; void* maxentry; scalar_t__ prev; scalar_t__ next; int self; } ;
struct metapage {TYPE_1__ header; int i_sb; int * xad; scalar_t__ data; } ;
typedef struct metapage xtpage_t ;
typedef int xad_t ;
typedef int tid_t ;
struct xtsplit {int index; struct metapage* mp; int addr; int len; int off; int flag; struct pxdlist* pxdlist; } ;
struct TYPE_7__ {size_t offset; size_t length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct inode {TYPE_1__ header; int i_sb; int * xad; scalar_t__ data; } ;
typedef int s64 ;
typedef int pxd_t ;
struct TYPE_10__ {struct metapage i_xtroot; } ;
struct TYPE_9__ {int nbperpage; } ;
struct TYPE_8__ {int split; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct metapage*,struct metapage*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (struct metapage*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (struct metapage*,int ) ;
 struct metapage* FUNC_8 (struct metapage*,int ,int,int) ;
 int FUNC_9 (char*,struct metapage*,struct metapage*) ;
 size_t FUNC_10 (void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (struct metapage*) ;
 int FUNC_14 (int ,struct metapage*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tlock* FUNC_15 (int ,struct metapage*,struct metapage*,int) ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static int
FUNC_16(tid_t VAR_12,
     struct inode *VAR_13, struct xtsplit * VAR_14, struct metapage ** VAR_15)
{
 xtpage_t *VAR_16;
 struct metapage *VAR_17;
 xtpage_t *VAR_18;
 s64 VAR_19;
 int VAR_20, VAR_21;
 xad_t *VAR_22;
 pxd_t *VAR_23;
 struct pxdlist *VAR_24;
 struct tlock *VAR_25;
 struct xtlock *VAR_26;
 int VAR_27;

 VAR_16 = &FUNC_2(VAR_13)->i_xtroot;

 FUNC_1(VAR_11.split);




 VAR_24 = VAR_14->pxdlist;
 VAR_23 = &VAR_24->pxd[VAR_24->npxd];
 VAR_24->npxd++;
 VAR_19 = FUNC_5(VAR_23);
 VAR_17 = FUNC_8(VAR_13, VAR_19, VAR_5, 1);
 if (VAR_17 == ((void*)0))
  return -VAR_3;


 VAR_27 = FUNC_7(VAR_13, FUNC_11(VAR_23));
 if (VAR_27) {
  FUNC_13(VAR_17);
  return VAR_27;
 }

 FUNC_9("xtSplitRoot: ip:0x%p rmp:0x%p", VAR_13, VAR_17);






 FUNC_0(VAR_17, VAR_13);

 VAR_18 = (xtpage_t *) VAR_17->data;
 VAR_18->header.flag =
     (VAR_16->header.flag & VAR_1) ? VAR_1 : VAR_0;
 VAR_18->header.self = *VAR_23;
 VAR_18->header.nextindex = FUNC_6(VAR_7);
 VAR_18->header.maxentry = FUNC_6(VAR_5 >> VAR_4);


 VAR_18->header.next = 0;
 VAR_18->header.prev = 0;




 VAR_21 = FUNC_10(VAR_16->header.maxentry);
 FUNC_12(&VAR_18->xad[VAR_7], &VAR_16->xad[VAR_7],
  (VAR_21 - VAR_7) << VAR_4);





 VAR_20 = VAR_14->index;

 if (VAR_20 != VAR_21)
  FUNC_12(&VAR_18->xad[VAR_20 + 1], &VAR_18->xad[VAR_20],
   (VAR_21 - VAR_20) * sizeof(xad_t));

 VAR_22 = &VAR_18->xad[VAR_20];
 FUNC_4(VAR_22, VAR_14->flag, VAR_14->off, VAR_14->len, VAR_14->addr);


 VAR_18->header.nextindex = FUNC_6(VAR_21 + 1);

 if (!FUNC_14(VAR_2, VAR_13)) {
  VAR_25 = FUNC_15(VAR_12, VAR_13, VAR_17, VAR_10 | VAR_9);
  VAR_26 = (struct xtlock *) & VAR_25->lock;
  VAR_26->lwm.offset = VAR_7;
  VAR_26->lwm.length = FUNC_10(VAR_18->header.nextindex) -
      VAR_7;
 }
 FUNC_0(VAR_14->mp, VAR_13);

 VAR_22 = &VAR_16->xad[VAR_7];
 FUNC_4(VAR_22, VAR_6, 0, FUNC_3(VAR_13->i_sb)->nbperpage, VAR_19);


 VAR_16->header.flag &= ~VAR_1;
 VAR_16->header.flag |= VAR_0;

 VAR_16->header.nextindex = FUNC_6(VAR_7 + 1);

 if (!FUNC_14(VAR_2, VAR_13)) {
  VAR_25 = FUNC_15(VAR_12, VAR_13, VAR_14->mp, VAR_10 | VAR_8);
  VAR_26 = (struct xtlock *) & VAR_25->lock;
  VAR_26->lwm.offset = VAR_7;
  VAR_26->lwm.length = 1;
 }

 *VAR_15 = VAR_17;

 FUNC_9("xtSplitRoot: sp:0x%p rp:0x%p", VAR_16, VAR_18);
 return 0;
}
