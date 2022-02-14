
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_modify_hdr {int id; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int VAR_7 ;





 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,int ) ;
 int VAR_11 ;
 int FUNC_12 (void*,void*,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int FUNC_15 (struct mlx5_core_dev*,char*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_16(struct mlx5_flow_root_namespace *VAR_16,
     u8 VAR_17, u8 VAR_18,
     void *VAR_19,
     struct mlx5_modify_hdr *VAR_20)
{
 u32 VAR_21[FUNC_8(VAR_10)];
 int VAR_22, VAR_23, VAR_24, VAR_25;
 struct mlx5_core_dev *VAR_26 = VAR_16->dev;
 void *VAR_27;
 u8 VAR_28;
 u32 *VAR_29;

 switch (VAR_17) {
 case 129:
  VAR_22 = FUNC_1(VAR_26, VAR_11);
  VAR_28 = VAR_3;
  break;
 case 128:
 case 132:
  VAR_22 = FUNC_3(VAR_26, VAR_11);
  VAR_28 = VAR_4;
  break;
 case 131:
  VAR_22 = FUNC_4(VAR_26, VAR_11);
  VAR_28 = VAR_5;
  break;
 case 130:
  VAR_22 = FUNC_2(VAR_26, VAR_11);
  VAR_28 = VAR_2;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_18 > VAR_22) {
  FUNC_15(VAR_26, "too many modify header actions %d, max supported %d\n",
          VAR_18, VAR_22);
  return -VAR_1;
 }

 VAR_23 = FUNC_9(VAR_15) * VAR_18;
 VAR_24 = FUNC_7(VAR_9) + VAR_23;

 VAR_29 = FUNC_11(VAR_24, VAR_6);
 if (!VAR_29)
  return -VAR_0;

 FUNC_6(VAR_9, VAR_29, VAR_14,
   VAR_7);
 FUNC_6(VAR_9, VAR_29, VAR_28, VAR_28);
 FUNC_6(VAR_9, VAR_29, VAR_13, VAR_18);

 VAR_27 = FUNC_0(VAR_9, VAR_29, VAR_8);
 FUNC_12(VAR_27, VAR_19, VAR_23);

 FUNC_13(VAR_21, 0, sizeof(VAR_21));
 VAR_25 = FUNC_14(VAR_26, VAR_29, VAR_24, VAR_21, sizeof(VAR_21));

 VAR_20->id = FUNC_5(VAR_10, VAR_21, VAR_12);
 FUNC_10(VAR_29);
 return VAR_25;
}
