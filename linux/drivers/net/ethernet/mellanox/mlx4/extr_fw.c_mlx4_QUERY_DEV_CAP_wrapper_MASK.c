
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_vhcr {int dummy; } ;
struct TYPE_2__ {int num_ports; scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;
struct mlx4_active_ports {int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 struct mlx4_active_ports FUNC_6 (struct mlx4_dev*,int) ;

int FUNC_7(struct mlx4_dev *VAR_28, int VAR_29,
          struct mlx4_vhcr *VAR_30,
          struct mlx4_cmd_mailbox *VAR_31,
          struct mlx4_cmd_mailbox *VAR_32,
          struct mlx4_cmd_info *VAR_33)
{
 u64 VAR_34;
 int VAR_35 = 0;
 u8 VAR_36;
 u16 VAR_37;
 u32 VAR_38, VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;
 struct mlx4_active_ports VAR_43;

 VAR_35 = FUNC_5(VAR_28, 0, VAR_32->dma, 0, 0, VAR_6,
      VAR_7, VAR_5);
 if (VAR_35)
  return VAR_35;

 FUNC_3(VAR_32->buf);



 FUNC_0(VAR_34, VAR_32->buf, VAR_21);
 VAR_34 |= VAR_9;
 VAR_34 &= ~VAR_8;
 VAR_43 = FUNC_6(VAR_28, VAR_29);
 VAR_42 = FUNC_4(VAR_43.ports, VAR_28->caps.num_ports);
 for (VAR_41 = 0, VAR_40 = VAR_42;
      VAR_40 < VAR_42 +
      FUNC_2(VAR_43.ports, VAR_28->caps.num_ports);
      ++VAR_40, ++VAR_41) {
  if (VAR_34 & (VAR_11 << VAR_40))
   VAR_34 |= VAR_11 << VAR_41;
  else
   VAR_34 &= ~(VAR_11 << VAR_41);
 }
 for (; VAR_41 < VAR_28->caps.num_ports; ++VAR_41)
  VAR_34 &= ~(VAR_11 << VAR_41);


 VAR_34 &= ~VAR_10;
 FUNC_1(VAR_32->buf, VAR_34, VAR_21);

 FUNC_0(VAR_36, VAR_32->buf, VAR_26);
 VAR_36 &= ~0x0F;
 VAR_36 |= FUNC_2(VAR_43.ports, VAR_28->caps.num_ports) & 0x0F;
 FUNC_1(VAR_32->buf, VAR_36, VAR_26);


 FUNC_0(VAR_36, VAR_32->buf, VAR_18);
 VAR_36 &= 0x7f;
 FUNC_1(VAR_32->buf, VAR_36, VAR_18);


 FUNC_0(VAR_36, VAR_32->buf, VAR_27);
 VAR_36 &= 0xd7;
 FUNC_1(VAR_32->buf, VAR_36, VAR_27);


 FUNC_0(VAR_36, VAR_32->buf, VAR_24);
 VAR_36 &= 0x7f;
 FUNC_1(VAR_32->buf, VAR_36, VAR_24);


 FUNC_0(VAR_36, VAR_32->buf, VAR_14);
 VAR_36 &= 0x7f;
 FUNC_1(VAR_32->buf, VAR_36, VAR_14);


 FUNC_0(VAR_38, VAR_32->buf, VAR_15);
 VAR_38 &= ~VAR_4;
 VAR_38 &= ~VAR_12;
 FUNC_1(VAR_32->buf, VAR_38, VAR_15);


 if (VAR_28->caps.steering_mode != VAR_13) {
  FUNC_0(VAR_36, VAR_32->buf,
    VAR_23);
  VAR_36 &= 0x7f;
  FUNC_1(VAR_32->buf, VAR_36,
    VAR_23);
 }


 FUNC_0(VAR_36, VAR_32->buf, VAR_22);
 VAR_36 &= ~0x80;
 FUNC_1(VAR_32->buf, VAR_36, VAR_22);


 FUNC_0(VAR_39, VAR_32->buf, VAR_20);
 VAR_39 &= ~(VAR_3 | VAR_0 |
       VAR_1 | VAR_2);
 FUNC_1(VAR_32->buf, VAR_39, VAR_20);


 FUNC_0(VAR_36, VAR_32->buf, VAR_19);
 VAR_36 &= 0xfe;
 FUNC_1(VAR_32->buf, VAR_36, VAR_19);


 VAR_37 = 0;
 FUNC_1(VAR_32->buf, VAR_37, VAR_25);


 FUNC_0(VAR_36, VAR_32->buf, VAR_17);
 VAR_36 &= 0xef;
 FUNC_1(VAR_32->buf, VAR_36, VAR_17);


 FUNC_0(VAR_36, VAR_32->buf, VAR_16);
 VAR_36 &= 0xfb;
 FUNC_1(VAR_32->buf, VAR_36, VAR_16);

 return 0;
}
