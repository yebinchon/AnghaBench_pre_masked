
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int * hca_cur; int * hca_max; } ;
struct mlx5_core_dev {TYPE_1__ caps; } ;
typedef int in ;
typedef enum mlx5_cap_type { ____Placeholder_mlx5_cap_type } mlx5_cap_type ;
typedef enum mlx5_cap_mode { ____Placeholder_mlx5_cap_mode } mlx5_cap_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* FUNC_0 (int ,void*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,void*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,int *,int,void*,int) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_10,
       enum mlx5_cap_type VAR_11,
       enum mlx5_cap_mode VAR_12)
{
 u8 VAR_13[FUNC_2(VAR_8)];
 int VAR_14 = FUNC_2(VAR_9);
 void *VAR_15, *VAR_16;
 u16 VAR_17 = (VAR_11 << 1) | (VAR_12 & 0x01);
 int VAR_18;

 FUNC_7(VAR_13, 0, sizeof(VAR_13));
 VAR_15 = FUNC_5(VAR_14, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_1(VAR_8, VAR_13, VAR_7, VAR_3);
 FUNC_1(VAR_8, VAR_13, VAR_6, VAR_17);
 VAR_18 = FUNC_8(VAR_10, VAR_13, sizeof(VAR_13), VAR_15, VAR_14);
 if (VAR_18) {
  FUNC_9(VAR_10,
          "QUERY_HCA_CAP : type(%x) opmode(%x) Failed(%d)\n",
          VAR_11, VAR_12, VAR_18);
  goto query_ex;
 }

 VAR_16 = FUNC_0(VAR_9, VAR_15, VAR_4);

 switch (VAR_12) {
 case 128:
  FUNC_6(VAR_10->caps.hca_max[VAR_11], VAR_16,
         FUNC_3(VAR_5));
  break;
 case 129:
  FUNC_6(VAR_10->caps.hca_cur[VAR_11], VAR_16,
         FUNC_3(VAR_5));
  break;
 default:
  FUNC_9(VAR_10,
          "Tried to query dev cap type(%x) with wrong opmode(%x)\n",
          VAR_11, VAR_12);
  VAR_18 = -VAR_0;
  break;
 }
query_ex:
 FUNC_4(VAR_15);
 return VAR_18;
}
