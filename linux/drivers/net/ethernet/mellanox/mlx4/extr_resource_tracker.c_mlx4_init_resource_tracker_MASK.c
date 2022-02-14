
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct slave_list {int dummy; } ;
struct resource_allocator {int* quota; int* guaranteed; int* allocated; int res_free; int* res_port_free; int res_reserved; int * res_port_rsvd; int alloc_lock; } ;
struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_8__ {struct resource_allocator* res_alloc; int lock; int * res_tree; TYPE_1__* slave_list; } ;
struct TYPE_9__ {TYPE_2__ res_tracker; } ;
struct TYPE_10__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct TYPE_12__ {int max_counters; int num_ports; scalar_t__ reserved_mtts; scalar_t__ num_mtts; scalar_t__ reserved_mrws; scalar_t__ num_mpts; scalar_t__ reserved_srqs; scalar_t__ num_srqs; scalar_t__ reserved_cqs; scalar_t__ num_cqs; scalar_t__ reserved_qps; scalar_t__ num_qps; } ;
struct mlx4_dev {int num_slaves; TYPE_6__ caps; TYPE_5__* persist; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_11__ {int num_vfs; } ;
struct TYPE_7__ {int mutex; int * res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mlx4_dev*,struct resource_allocator*,int const,int,scalar_t__) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int*) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct resource_allocator*,int) ;
 int FUNC_7 (struct mlx4_dev*,char*,int) ;
 struct mlx4_active_ports FUNC_8 (struct mlx4_dev*,int) ;
 int FUNC_9 (struct mlx4_dev*) ;
 scalar_t__ FUNC_10 (struct mlx4_dev*) ;
 struct mlx4_slaves_pport FUNC_11 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int,int ) ;

int FUNC_16(struct mlx4_dev *VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_12(VAR_7);
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_8->mfunc.master.res_tracker.slave_list =
  FUNC_3(VAR_7->num_slaves, sizeof(struct slave_list),
   VAR_1);
 if (!VAR_8->mfunc.master.res_tracker.slave_list)
  return -VAR_0;

 for (VAR_9 = 0 ; VAR_9 < VAR_7->num_slaves; VAR_9++) {
  for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11)
   FUNC_0(&VAR_8->mfunc.master.res_tracker.
           slave_list[VAR_9].res_list[VAR_11]);
  FUNC_13(&VAR_8->mfunc.master.res_tracker.slave_list[VAR_9].mutex);
 }

 FUNC_7(VAR_7, "Started init_resource_tracker: %ld slaves\n",
   VAR_7->num_slaves);
 for (VAR_9 = 0 ; VAR_9 < VAR_5; VAR_9++)
  VAR_8->mfunc.master.res_tracker.res_tree[VAR_9] = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct resource_allocator *VAR_12 =
   &VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9];
  VAR_12->quota = FUNC_5(VAR_7->persist->num_vfs + 1,
       sizeof(int),
       VAR_1);
  VAR_12->guaranteed = FUNC_5(VAR_7->persist->num_vfs + 1,
            sizeof(int),
            VAR_1);
  if (VAR_9 == 133 || VAR_9 == 128)
   VAR_12->allocated =
    FUNC_3(VAR_3 *
      (VAR_7->persist->num_vfs + 1),
     sizeof(int), VAR_1);
  else
   VAR_12->allocated =
    FUNC_3(VAR_7->persist->num_vfs + 1,
     sizeof(int), VAR_1);

  if (VAR_9 == 135)
   VAR_12->res_free = VAR_7->caps.max_counters - 1;

  if (!VAR_12->quota || !VAR_12->guaranteed ||
      !VAR_12->allocated)
   goto no_mem_err;

  FUNC_14(&VAR_12->alloc_lock);
  for (VAR_11 = 0; VAR_11 < VAR_7->persist->num_vfs + 1; VAR_11++) {
   struct mlx4_active_ports VAR_13 =
    FUNC_8(VAR_7, VAR_11);
   switch (VAR_9) {
   case 130:
    FUNC_2(VAR_7, VAR_12, 130,
            VAR_11, VAR_7->caps.num_qps -
            VAR_7->caps.reserved_qps -
            FUNC_10(VAR_7));
    break;
   case 134:
    FUNC_2(VAR_7, VAR_12, 134,
            VAR_11, VAR_7->caps.num_cqs -
            VAR_7->caps.reserved_cqs);
    break;
   case 129:
    FUNC_2(VAR_7, VAR_12, 129,
            VAR_11, VAR_7->caps.num_srqs -
            VAR_7->caps.reserved_srqs);
    break;
   case 132:
    FUNC_2(VAR_7, VAR_12, 132,
            VAR_11, VAR_7->caps.num_mpts -
            VAR_7->caps.reserved_mrws);
    break;
   case 131:
    FUNC_2(VAR_7, VAR_12, 131,
            VAR_11, VAR_7->caps.num_mtts -
            VAR_7->caps.reserved_mtts);
    break;
   case 133:
    if (VAR_11 == FUNC_9(VAR_7)) {
     int VAR_14 = 0;


     for (VAR_10 = 0; VAR_10 < VAR_7->caps.num_ports;
          VAR_10++) {
      struct mlx4_slaves_pport VAR_15 =
       FUNC_11(VAR_7, VAR_10 + 1);
      unsigned VAR_16 =
       FUNC_1(VAR_15.slaves,
              VAR_7->caps.num_ports) - 1;
      if (VAR_14 < VAR_16)
       VAR_14 =
        VAR_16;
     }
     VAR_12->quota[VAR_11] =
      VAR_2 -
      2 * VAR_14;
     VAR_12->guaranteed[VAR_11] = 2;
     for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
      VAR_12->res_port_free[VAR_10] =
       VAR_2;
    } else {
     VAR_12->quota[VAR_11] = VAR_2;
     VAR_12->guaranteed[VAR_11] = 2;
    }
    break;
   case 128:
    if (VAR_11 == FUNC_9(VAR_7)) {
     VAR_12->quota[VAR_11] = VAR_4;
     VAR_12->guaranteed[VAR_11] = VAR_4 / 2;
     for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
      VAR_12->res_port_free[VAR_10] =
       VAR_12->quota[VAR_11];
    } else {
     VAR_12->quota[VAR_11] = VAR_4 / 2;
     VAR_12->guaranteed[VAR_11] = 0;
    }
    break;
   case 135:
    VAR_12->quota[VAR_11] = VAR_7->caps.max_counters;
    VAR_12->guaranteed[VAR_11] =
     FUNC_6(VAR_7, VAR_12, VAR_11);
    break;
   default:
    break;
   }
   if (VAR_9 == 133 || VAR_9 == 128) {
    for (VAR_10 = 0; VAR_10 < VAR_7->caps.num_ports; VAR_10++)
     if (FUNC_15(VAR_10, VAR_13.ports))
      VAR_12->res_port_rsvd[VAR_10] +=
       VAR_12->guaranteed[VAR_11];
   } else {
    VAR_12->res_reserved += VAR_12->guaranteed[VAR_11];
   }
  }
 }
 FUNC_14(&VAR_8->mfunc.master.res_tracker.lock);
 return 0;

no_mem_err:
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_4(VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].allocated);
  VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].allocated = ((void*)0);
  FUNC_4(VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].guaranteed);
  VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].guaranteed = ((void*)0);
  FUNC_4(VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].quota);
  VAR_8->mfunc.master.res_tracker.res_alloc[VAR_9].quota = ((void*)0);
 }
 return -VAR_0;
}
