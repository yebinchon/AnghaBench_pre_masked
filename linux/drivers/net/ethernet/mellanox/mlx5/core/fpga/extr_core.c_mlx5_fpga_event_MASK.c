
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_device {int state; int mdev; int state_lock; } ;
struct TYPE_2__ {void* raw; } ;
struct mlx5_eqe {TYPE_1__ data; } ;





 int FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_fpga_device*,char*,int ,char const*) ;
 int FUNC_4 (struct mlx5_fpga_device*,char*,int ,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct mlx5_fpga_device *VAR_4,
      unsigned long VAR_5, void *VAR_6)
{
 void *VAR_7 = ((struct mlx5_eqe *)VAR_6)->data.raw;
 const char *VAR_8;
 bool VAR_9 = 0;
 unsigned long VAR_10;
 u8 VAR_11;

 switch (VAR_5) {
 case 130:
  VAR_11 = FUNC_0(VAR_2, VAR_7, VAR_11);
  VAR_8 = FUNC_2(VAR_11);
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_3, VAR_7, VAR_11);
  VAR_8 = FUNC_1(VAR_11);
  break;
 default:
  return VAR_0;
 }

 FUNC_6(&VAR_4->state_lock, VAR_10);
 switch (VAR_4->state) {
 case 128:
  FUNC_3(VAR_4, "Error %u: %s\n", VAR_11, VAR_8);
  VAR_9 = 1;
  break;
 default:
  FUNC_4(VAR_4, "Unexpected error event %u: %s\n",
        VAR_11, VAR_8);
 }
 FUNC_7(&VAR_4->state_lock, VAR_10);





 if (VAR_9)
  FUNC_5(VAR_4->mdev);

 return VAR_1;
}
