
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_2__ {size_t num_ports; int* phys_port_id; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {size_t* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,size_t*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,size_t,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*,size_t) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_6)
{
 u8 VAR_7;
 u32 *VAR_8;
 struct mlx4_cmd_mailbox *VAR_9;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14 = 0;




 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);
 VAR_8 = VAR_9->buf;

 for (VAR_7 = 1; VAR_7 <= VAR_6->caps.num_ports; VAR_7++) {
  VAR_10 = VAR_7 << 8;
  VAR_13 = FUNC_4(VAR_6, 0, VAR_9->dma, VAR_10, 0x2,
       VAR_0, VAR_2,
       VAR_1);
  if (VAR_13) {
   FUNC_5(VAR_6, "Fail to get port %d uplink guid\n",
     VAR_7);
   VAR_14 = VAR_13;
  } else {
   FUNC_1(VAR_11, VAR_8, 0X14);
   FUNC_1(VAR_12, VAR_8, 0X1c);
   VAR_6->caps.phys_port_id[VAR_7] = (u64)VAR_12 |
             (u64)VAR_11 << 32;
  }
 }
 FUNC_6(VAR_6, VAR_9);
 return VAR_14;
}
