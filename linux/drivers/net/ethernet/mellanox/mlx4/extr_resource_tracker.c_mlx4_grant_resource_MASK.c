
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource_allocator {int* allocated; int* res_port_free; int res_free; int* res_port_rsvd; int res_reserved; int* guaranteed; int* quota; int alloc_lock; } ;
struct TYPE_5__ {struct resource_allocator* res_alloc; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {TYPE_4__* persist; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;
struct TYPE_8__ {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,char*,int,int,int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct mlx4_dev *VAR_2, int VAR_3,
          enum mlx4_resource VAR_4, int VAR_5,
          int VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_0(VAR_2);
 struct resource_allocator *VAR_8 =
  &VAR_7->mfunc.master.res_tracker.res_alloc[VAR_4];
 int VAR_9 = -VAR_0;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (VAR_3 > VAR_2->persist->num_vfs)
  return -VAR_1;

 FUNC_3(&VAR_8->alloc_lock);
 VAR_10 = (VAR_6 > 0) ?
  VAR_8->allocated[(VAR_6 - 1) *
  (VAR_2->persist->num_vfs + 1) + VAR_3] :
  VAR_8->allocated[VAR_3];
 VAR_11 = (VAR_6 > 0) ? VAR_8->res_port_free[VAR_6 - 1] :
  VAR_8->res_free;
 VAR_12 = (VAR_6 > 0) ? VAR_8->res_port_rsvd[VAR_6 - 1] :
  VAR_8->res_reserved;
 VAR_13 = VAR_8->guaranteed[VAR_3];

 if (VAR_10 + VAR_5 > VAR_8->quota[VAR_3]) {
  FUNC_1(VAR_2, "VF %d port %d res %s: quota exceeded, count %d alloc %d quota %d\n",
     VAR_3, VAR_6, FUNC_2(VAR_4), VAR_5,
     VAR_10, VAR_8->quota[VAR_3]);
  goto out;
 }

 if (VAR_10 + VAR_5 <= VAR_13) {
  VAR_9 = 0;
  VAR_15 = VAR_5;
 } else {

  if (VAR_13 - VAR_10 > 0)
   VAR_14 = VAR_5 - (VAR_13 - VAR_10);
  else
   VAR_14 = VAR_5;

  VAR_15 = VAR_5 - VAR_14;

  if (VAR_11 - VAR_14 >= VAR_12)
   VAR_9 = 0;
  else
   FUNC_1(VAR_2, "VF %d port %d res %s: free pool empty, free %d from_free %d rsvd %d\n",
      VAR_3, VAR_6, FUNC_2(VAR_4), VAR_11,
      VAR_14, VAR_12);
 }

 if (!VAR_9) {

  if (VAR_6 > 0) {
   VAR_8->allocated[(VAR_6 - 1) *
   (VAR_2->persist->num_vfs + 1) + VAR_3] += VAR_5;
   VAR_8->res_port_free[VAR_6 - 1] -= VAR_5;
   VAR_8->res_port_rsvd[VAR_6 - 1] -= VAR_15;
  } else {
   VAR_8->allocated[VAR_3] += VAR_5;
   VAR_8->res_free -= VAR_5;
   VAR_8->res_reserved -= VAR_15;
  }
 }

out:
 FUNC_4(&VAR_8->alloc_lock);
 return VAR_9;
}
