
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {void* buf; int tail; int head; } ;
struct mlxbf_tmfifo_vdev {TYPE_1__ tx_buf; } ;
struct mlxbf_tmfifo_msg_hdr {size_t type; int len; } ;
struct mlxbf_tmfifo {int spin_lock; scalar_t__ tx_base; struct mlxbf_tmfifo_vdev** vdev; } ;
typedef int hdr ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mlxbf_tmfifo *VAR_4, int VAR_5)
{
 struct mlxbf_tmfifo_msg_hdr VAR_6;
 struct mlxbf_tmfifo_vdev *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;
 u64 VAR_12;


 if (VAR_5 < VAR_1)
  return;

 VAR_7 = VAR_4->vdev[VAR_3];
 if (!VAR_7 || !VAR_7->tx_buf.buf)
  return;


 VAR_9 = FUNC_0(VAR_7->tx_buf.head, VAR_7->tx_buf.tail,
   VAR_0);
 if (VAR_9 == 0)
  return;


 if (VAR_9 + sizeof(VAR_6) > VAR_5 * sizeof(u64))
  VAR_9 = VAR_5 * sizeof(u64) - sizeof(VAR_6);


 VAR_6.type = VAR_3;
 VAR_6.len = FUNC_2(VAR_9);
 FUNC_6(*(u64 *)&VAR_6, VAR_4->tx_base + VAR_2);


 FUNC_4(&VAR_4->spin_lock, VAR_8);

 while (VAR_9 > 0) {
  VAR_11 = VAR_7->tx_buf.buf + VAR_7->tx_buf.tail;

  VAR_10 = FUNC_1(VAR_7->tx_buf.head, VAR_7->tx_buf.tail,
          VAR_0);
  if (VAR_10 >= sizeof(u64)) {
   FUNC_3(&VAR_12, VAR_11, sizeof(u64));
  } else {
   FUNC_3(&VAR_12, VAR_11, VAR_10);
   FUNC_3((u8 *)&VAR_12 + VAR_10, VAR_7->tx_buf.buf,
          sizeof(u64) - VAR_10);
  }
  FUNC_6(VAR_12, VAR_4->tx_base + VAR_2);

  if (VAR_9 >= sizeof(u64)) {
   VAR_7->tx_buf.tail = (VAR_7->tx_buf.tail + sizeof(u64)) %
    VAR_0;
   VAR_9 -= sizeof(u64);
  } else {
   VAR_7->tx_buf.tail = (VAR_7->tx_buf.tail + VAR_9) %
    VAR_0;
   VAR_9 = 0;
  }
 }

 FUNC_5(&VAR_4->spin_lock, VAR_8);
}
