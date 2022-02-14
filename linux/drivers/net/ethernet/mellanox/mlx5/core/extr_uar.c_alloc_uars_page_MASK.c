
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uars_page {int bfregs; int fp_avail; int reg_avail; int index; void* reg_bitmap; void* fp_bitmap; int ref_count; scalar_t__ map; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_uars_page* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_uars_page*) ;
 int FUNC_6 (int *) ;
 struct mlx5_uars_page* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mlx5_core_dev*,int*) ;
 scalar_t__ FUNC_9 (struct mlx5_core_dev*,int) ;
 int FUNC_10 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_11 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_12 (int,void*) ;
 int FUNC_13 (struct mlx5_core_dev*,int) ;
 int FUNC_14 (struct mlx5_core_dev*) ;

__attribute__((used)) static struct mlx5_uars_page *FUNC_15(struct mlx5_core_dev *VAR_8,
           bool VAR_9)
{
 struct mlx5_uars_page *VAR_10;
 int VAR_11 = -VAR_1;
 phys_addr_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_14(VAR_8) * VAR_3;
 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(VAR_11);

 VAR_10->mdev = VAR_8;
 VAR_10->reg_bitmap = FUNC_2(VAR_13, VAR_2);
 if (!VAR_10->reg_bitmap)
  goto error1;

 VAR_10->fp_bitmap = FUNC_2(VAR_13, VAR_2);
 if (!VAR_10->fp_bitmap)
  goto error1;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  if ((VAR_14 % VAR_3) < VAR_5)
   FUNC_12(VAR_14, VAR_10->reg_bitmap);
  else
   FUNC_12(VAR_14, VAR_10->fp_bitmap);

 VAR_10->bfregs = VAR_13;
 VAR_10->fp_avail = VAR_13 * VAR_4 / VAR_3;
 VAR_10->reg_avail = VAR_13 * VAR_5 / VAR_3;

 VAR_11 = FUNC_8(VAR_8, &VAR_10->index);
 if (VAR_11) {
  FUNC_11(VAR_8, "mlx5_cmd_alloc_uar() failed, %d\n", VAR_11);
  goto error1;
 }

 VAR_12 = FUNC_13(VAR_8, VAR_10->index);
 if (VAR_9) {
  VAR_10->map = FUNC_4(VAR_12 << VAR_6, VAR_7);
  if (!VAR_10->map) {
   VAR_11 = -VAR_0;
   goto error2;
  }
 } else {
  VAR_10->map = FUNC_3(VAR_12 << VAR_6, VAR_7);
  if (!VAR_10->map) {
   VAR_11 = -VAR_1;
   goto error2;
  }
 }
 FUNC_6(&VAR_10->ref_count);
 FUNC_10(VAR_8, "allocated UAR page: index %d, total bfregs %d\n",
        VAR_10->index, VAR_10->bfregs);
 return VAR_10;

error2:
 if (FUNC_9(VAR_8, VAR_10->index))
  FUNC_11(VAR_8, "failed to free uar index %d\n", VAR_10->index);
error1:
 FUNC_1(VAR_10->fp_bitmap);
 FUNC_1(VAR_10->reg_bitmap);
 FUNC_5(VAR_10);
 return FUNC_0(VAR_11);
}
