
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (void*,int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int ,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_2, void *VAR_3, void *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;

 FUNC_3(VAR_4, &VAR_6, &VAR_5);
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_0(VAR_1, VAR_3, VAR_7);
 VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_8);
 VAR_9 = FUNC_0(VAR_1, VAR_3, VAR_9);

 if (!VAR_9 && VAR_7 != VAR_0)
  FUNC_6(VAR_2,
   "%s(0x%x) op_mod(0x%x) failed, status %s(0x%x), syndrome (0x%x)\n",
   FUNC_4(VAR_7), VAR_7, VAR_8,
   FUNC_1(VAR_6), VAR_6, VAR_5);
 else
  FUNC_5(VAR_2,
        "%s(0x%x) op_mod(0x%x) failed, status %s(0x%x), syndrome (0x%x)\n",
        FUNC_4(VAR_7),
        VAR_7, VAR_8,
        FUNC_1(VAR_6),
        VAR_6,
        VAR_5);

 return FUNC_2(VAR_6);
}
