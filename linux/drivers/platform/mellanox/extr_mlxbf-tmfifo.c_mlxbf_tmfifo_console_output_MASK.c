
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vring_desc {int dummy; } ;
struct mlxbf_tmfifo_vring {int dummy; } ;
struct TYPE_2__ {int tail; int head; } ;
struct mlxbf_tmfifo_vdev {TYPE_1__ tx_buf; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlxbf_tmfifo_vdev*,struct mlxbf_tmfifo_vring*,struct vring_desc*) ;
 struct vring_desc* FUNC_2 (struct mlxbf_tmfifo_vring*) ;
 scalar_t__ FUNC_3 (struct mlxbf_tmfifo_vring*,struct vring_desc*) ;
 int FUNC_4 (struct mlxbf_tmfifo_vring*,struct vring_desc*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mlxbf_tmfifo_vdev *VAR_2,
     struct mlxbf_tmfifo_vring *VAR_3)
{
 struct vring_desc *VAR_4;
 u32 VAR_5, VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 while (VAR_4) {

  VAR_5 = FUNC_3(VAR_3, VAR_4);
  VAR_6 = FUNC_0(VAR_2->tx_buf.head, VAR_2->tx_buf.tail,
       VAR_1);
  if (VAR_5 + VAR_0 > VAR_6) {
   FUNC_4(VAR_3, VAR_4, VAR_5);
   break;
  }

  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_4(VAR_3, VAR_4, VAR_5);
  VAR_4 = FUNC_2(VAR_3);
 }
}
