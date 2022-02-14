
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int seeks; int scan_objects; int count_objects; } ;
struct TYPE_7__ {int bt_lru; int bt_io_count; TYPE_4__ bt_shrinker; struct dax_device* bt_daxdev; struct block_device* bt_bdev; int bt_dev; struct xfs_mount* bt_mount; } ;
typedef TYPE_1__ xfs_buftarg_t ;
struct xfs_mount {int dummy; } ;
struct dax_device {int dummy; } ;
struct block_device {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_1__*,struct block_device*) ;

xfs_buftarg_t *
FUNC_8(
 struct xfs_mount *VAR_6,
 struct block_device *VAR_7,
 struct dax_device *VAR_8)
{
 xfs_buftarg_t *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);

 VAR_9->bt_mount = VAR_6;
 VAR_9->bt_dev = VAR_7->bd_dev;
 VAR_9->bt_bdev = VAR_7;
 VAR_9->bt_daxdev = VAR_8;

 if (FUNC_7(VAR_9, VAR_7))
  goto error_free;

 if (FUNC_3(&VAR_9->bt_lru))
  goto error_free;

 if (FUNC_5(&VAR_9->bt_io_count, 0, VAR_1))
  goto error_lru;

 VAR_9->bt_shrinker.count_objects = VAR_4;
 VAR_9->bt_shrinker.scan_objects = VAR_5;
 VAR_9->bt_shrinker.seeks = VAR_0;
 VAR_9->bt_shrinker.flags = VAR_3;
 if (FUNC_6(&VAR_9->bt_shrinker))
  goto error_pcpu;
 return VAR_9;

error_pcpu:
 FUNC_4(&VAR_9->bt_io_count);
error_lru:
 FUNC_2(&VAR_9->bt_lru);
error_free:
 FUNC_0(VAR_9);
 return ((void*)0);
}
