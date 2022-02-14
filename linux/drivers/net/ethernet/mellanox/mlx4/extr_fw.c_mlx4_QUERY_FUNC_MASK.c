
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_func {int bus; int device; int function; int physical_function; int rsvd_eqs; int max_eq; int rsvd_uars; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*,int,int,int,int,int,int,int) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_10, struct mlx4_func *VAR_11, int VAR_12)
{
 struct mlx4_cmd_mailbox *VAR_13;
 u32 *VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u16 VAR_17;
 int VAR_18;
 VAR_13 = FUNC_3(VAR_10);
 if (FUNC_0(VAR_13))
  return FUNC_2(VAR_13);
 VAR_14 = VAR_13->buf;

 VAR_15 = VAR_12;

 VAR_18 = FUNC_4(VAR_10, 0, VAR_13->dma, VAR_15, 0,
      VAR_1,
      VAR_2,
      VAR_0);
 if (VAR_18)
  goto out;

 FUNC_1(VAR_16, VAR_14, 0x00);
 VAR_11->bus = VAR_16 & 0xf;
 FUNC_1(VAR_16, VAR_14, 0x01);
 VAR_11->device = VAR_16 & 0xf1;
 FUNC_1(VAR_16, VAR_14, 0x01);
 VAR_11->function = VAR_16 & 0x7;
 FUNC_1(VAR_16, VAR_14, 0x03);
 VAR_11->physical_function = VAR_16 & 0xf;
 FUNC_1(VAR_17, VAR_14, 0x04);
 VAR_11->rsvd_eqs = VAR_17 & 0xffff;
 FUNC_1(VAR_17, VAR_14, 0x06);
 VAR_11->max_eq = VAR_17 & 0xffff;
 FUNC_1(VAR_16, VAR_14, 0x0b);
 VAR_11->rsvd_uars = VAR_16 & 0x0f;

 FUNC_5(VAR_10, "Bus: %d, Device: %d, Function: %d, Physical function: %d, Max EQs: %d, Reserved EQs: %d, Reserved UARs: %d\n",
   VAR_11->bus, VAR_11->device, VAR_11->function, VAR_11->physical_function,
   VAR_11->max_eq, VAR_11->rsvd_eqs, VAR_11->rsvd_uars);

out:
 FUNC_6(VAR_10, VAR_13);
 return VAR_18;
}
