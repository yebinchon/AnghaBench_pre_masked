
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {int mtd_list; TYPE_1__* type; } ;
struct TYPE_4__ {int writesize; int _sync; int _write; int _read; int _erase; int name; struct ef4_nic* priv; int owner; } ;
struct ef4_mtd_partition {int node; TYPE_2__ mtd; int name; } ;
struct TYPE_3__ {int (* mtd_rename ) (struct ef4_mtd_partition*) ;int mtd_write; int mtd_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ef4_mtd_partition*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (struct ef4_mtd_partition*) ;

int FUNC_4(struct ef4_nic *VAR_4, struct ef4_mtd_partition *VAR_5,
  size_t VAR_6, size_t VAR_7)
{
 struct ef4_mtd_partition *VAR_8;
 size_t VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = (struct ef4_mtd_partition *)((char *)VAR_5 +
          VAR_9 * VAR_7);

  VAR_8->mtd.writesize = 1;

  VAR_8->mtd.owner = VAR_1;
  VAR_8->mtd.priv = VAR_4;
  VAR_8->mtd.name = VAR_8->name;
  VAR_8->mtd._erase = VAR_2;
  VAR_8->mtd._read = VAR_4->type->mtd_read;
  VAR_8->mtd._write = VAR_4->type->mtd_write;
  VAR_8->mtd._sync = VAR_3;

  VAR_4->type->mtd_rename(VAR_8);

  if (FUNC_2(&VAR_8->mtd, ((void*)0), 0))
   goto fail;


  FUNC_1(&VAR_8->node, &VAR_4->mtd_list);
 }

 return 0;

fail:
 while (VAR_9--) {
  VAR_8 = (struct ef4_mtd_partition *)((char *)VAR_5 +
          VAR_9 * VAR_7);
  FUNC_0(VAR_8);
 }

 return -VAR_0;
}
