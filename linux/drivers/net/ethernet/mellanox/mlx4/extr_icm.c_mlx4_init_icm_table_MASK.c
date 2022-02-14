
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct mlx4_icm_table {int virt; int num_icm; int obj_size; int lowmem; int coherent; TYPE_1__** icm; int mutex; scalar_t__ num_obj; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_6__ {int refcount; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_7 ;
 TYPE_1__** FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,TYPE_1__*,int) ;
 int FUNC_6 (struct mlx4_dev*,int,int) ;
 TYPE_1__* FUNC_7 (struct mlx4_dev*,unsigned int,int,int) ;
 int FUNC_8 (struct mlx4_dev*,TYPE_1__*,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct mlx4_dev *VAR_8, struct mlx4_icm_table *VAR_9,
   u64 VAR_10, int VAR_11, u32 VAR_12, int VAR_13,
   int VAR_14, int VAR_15)
{
 int VAR_16;
 int VAR_17;
 unsigned VAR_18;
 int VAR_19;
 u64 VAR_20;

 VAR_16 = VAR_5 / VAR_11;
 if (FUNC_2(!VAR_16))
  return -VAR_0;
 VAR_17 = FUNC_0(VAR_12, VAR_16);

 VAR_9->icm = FUNC_3(VAR_17, sizeof(*VAR_9->icm), VAR_3);
 if (!VAR_9->icm)
  return -VAR_1;
 VAR_9->virt = VAR_10;
 VAR_9->num_icm = VAR_17;
 VAR_9->num_obj = VAR_12;
 VAR_9->obj_size = VAR_11;
 VAR_9->lowmem = VAR_14;
 VAR_9->coherent = VAR_15;
 FUNC_9(&VAR_9->mutex);

 VAR_20 = (u64) VAR_12 * VAR_11;
 for (VAR_19 = 0; VAR_19 * VAR_5 < VAR_13 * VAR_11; ++VAR_19) {
  VAR_18 = VAR_5;
  if ((VAR_19 + 1) * VAR_5 > VAR_20)
   VAR_18 = FUNC_1(VAR_20 -
     VAR_19 * VAR_5);

  VAR_9->icm[VAR_19] = FUNC_7(VAR_8, VAR_18 >> VAR_6,
            (VAR_14 ? VAR_3 : VAR_2) |
            VAR_7, VAR_15);
  if (!VAR_9->icm[VAR_19])
   goto err;
  if (FUNC_5(VAR_8, VAR_9->icm[VAR_19], VAR_10 + VAR_19 * VAR_5)) {
   FUNC_8(VAR_8, VAR_9->icm[VAR_19], VAR_15);
   VAR_9->icm[VAR_19] = ((void*)0);
   goto err;
  }





  ++VAR_9->icm[VAR_19]->refcount;
 }

 return 0;

err:
 for (VAR_19 = 0; VAR_19 < VAR_17; ++VAR_19)
  if (VAR_9->icm[VAR_19]) {
   FUNC_6(VAR_8, VAR_10 + VAR_19 * VAR_5,
           VAR_5 / VAR_4);
   FUNC_8(VAR_8, VAR_9->icm[VAR_19], VAR_15);
  }

 FUNC_4(VAR_9->icm);

 return -VAR_1;
}
