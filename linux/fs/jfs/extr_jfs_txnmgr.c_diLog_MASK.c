
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct tlock {int type; int flag; int lock; struct metapage* mp; } ;
struct tblock {TYPE_2__* sb; } ;
struct pxd_lock {scalar_t__ index; int flag; int pxd; } ;
struct metapage {int logical_size; int index; } ;
struct TYPE_9__ {int pxd; void* nxd; void* type; } ;
struct TYPE_8__ {void* inoext_idx; void* iagnum; } ;
struct TYPE_6__ {int pxd; void* l2linesize; void* type; } ;
struct TYPE_10__ {TYPE_4__ updatemap; TYPE_3__ noredoinoext; TYPE_1__ redopage; } ;
struct lrd {void* backchain; TYPE_5__ log; void* type; } ;
struct jfs_log {int dummy; } ;
struct commit {scalar_t__* iplist; } ;
typedef int pxd_t ;
struct TYPE_7__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,struct tlock*) ;
 int FUNC_6 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_7(struct jfs_log * VAR_15, struct tblock * VAR_16, struct lrd * VAR_17,
   struct tlock * VAR_18, struct commit * VAR_19)
{
 int VAR_20 = 0;
 struct metapage *VAR_21;
 pxd_t *VAR_22;
 struct pxd_lock *VAR_23;

 VAR_21 = VAR_18->mp;


 VAR_17->log.redopage.type = FUNC_3(VAR_3);
 VAR_17->log.redopage.l2linesize = FUNC_3(VAR_0);

 VAR_22 = &VAR_17->log.redopage.pxd;




 if (VAR_18->type & VAR_11) {

  VAR_17->type = FUNC_3(VAR_5);
  FUNC_0(VAR_22, VAR_21->index);
  FUNC_1(VAR_22,
     VAR_21->logical_size >> VAR_16->sb->s_blocksize_bits);
  VAR_17->backchain = FUNC_4(FUNC_6(VAR_15, VAR_16, VAR_17, VAR_18));


  VAR_18->flag |= VAR_14;
 } else if (VAR_18->type & VAR_12) {
  VAR_17->type = FUNC_3(VAR_4);







  VAR_17->log.noredoinoext.iagnum =
      FUNC_4((u32) (size_t) VAR_19->iplist[1]);
  VAR_17->log.noredoinoext.inoext_idx =
      FUNC_4((u32) (size_t) VAR_19->iplist[2]);

  VAR_23 = (struct pxd_lock *) & VAR_18->lock;
  *VAR_22 = VAR_23->pxd;
  VAR_17->backchain = FUNC_4(FUNC_6(VAR_15, VAR_16, VAR_17, ((void*)0)));


  VAR_18->flag |= VAR_13;


  VAR_18->flag |= VAR_14;
 } else
  FUNC_5("diLog: UFO type tlck:0x%p", VAR_18);
 return VAR_20;
}
