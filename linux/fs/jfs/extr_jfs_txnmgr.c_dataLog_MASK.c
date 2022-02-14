
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tlock {int flag; struct metapage* mp; int ip; } ;
struct tblock {TYPE_3__* sb; } ;
struct metapage {int logical_size; int index; scalar_t__ lid; } ;
struct TYPE_4__ {int pxd; void* l2linesize; void* type; } ;
struct TYPE_5__ {TYPE_1__ redopage; } ;
struct lrd {int backchain; void* type; TYPE_2__ log; } ;
struct jfs_log {int dummy; } ;
typedef int pxd_t ;
struct TYPE_6__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct metapage*) ;
 int FUNC_5 (struct metapage*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int FUNC_8 (struct metapage*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct jfs_log * VAR_4, struct tblock * VAR_5, struct lrd * VAR_6,
     struct tlock * VAR_7)
{
 struct metapage *VAR_8;
 pxd_t *VAR_9;

 VAR_8 = VAR_7->mp;


 VAR_6->log.redopage.type = FUNC_2(VAR_1);
 VAR_6->log.redopage.l2linesize = FUNC_2(VAR_0);

 VAR_9 = &VAR_6->log.redopage.pxd;


 VAR_6->type = FUNC_2(VAR_2);

 if (FUNC_6(VAR_7->ip)) {




  VAR_8->lid = 0;
  FUNC_5(VAR_8);
  FUNC_8(VAR_8);
  FUNC_4(VAR_8);
  VAR_7->mp = ((void*)0);
  return 0;
 }

 FUNC_0(VAR_9, VAR_8->index);
 FUNC_1(VAR_9, VAR_8->logical_size >> VAR_5->sb->s_blocksize_bits);

 VAR_6->backchain = FUNC_3(FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7));


 VAR_7->flag |= VAR_3;

 return 0;
}
