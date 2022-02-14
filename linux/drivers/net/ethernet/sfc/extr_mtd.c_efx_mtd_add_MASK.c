
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {int mtd_list; TYPE_1__* type; } ;
struct TYPE_4__ {int writesize; int flags; int _sync; int _write; int _read; int _erase; int name; struct efx_nic* priv; int owner; } ;
struct efx_mtd_partition {int node; TYPE_2__ mtd; int name; } ;
struct TYPE_3__ {int (* mtd_rename ) (struct efx_mtd_partition*) ;int mtd_write; int mtd_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_mtd_partition*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (struct efx_mtd_partition*) ;

int FUNC_4(struct efx_nic *VAR_6, struct efx_mtd_partition *VAR_7,
  size_t VAR_8, size_t VAR_9)
{
 struct efx_mtd_partition *VAR_10;
 size_t VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10 = (struct efx_mtd_partition *)((char *)VAR_7 +
          VAR_11 * VAR_9);

  VAR_10->mtd.writesize = 1;

  if (!(VAR_10->mtd.flags & VAR_1))
   VAR_10->mtd.flags |= VAR_2;

  VAR_10->mtd.owner = VAR_3;
  VAR_10->mtd.priv = VAR_6;
  VAR_10->mtd.name = VAR_10->name;
  VAR_10->mtd._erase = VAR_4;
  VAR_10->mtd._read = VAR_6->type->mtd_read;
  VAR_10->mtd._write = VAR_6->type->mtd_write;
  VAR_10->mtd._sync = VAR_5;

  VAR_6->type->mtd_rename(VAR_10);

  if (FUNC_2(&VAR_10->mtd, ((void*)0), 0))
   goto fail;


  FUNC_1(&VAR_10->node, &VAR_6->mtd_list);
 }

 return 0;

fail:
 while (VAR_11--) {
  VAR_10 = (struct efx_mtd_partition *)((char *)VAR_7 +
          VAR_11 * VAR_9);
  FUNC_0(VAR_10);
 }

 return -VAR_0;
}
