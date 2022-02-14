
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct qed_ooo_buffer {int rx_buffer_size; void* rx_buffer_virt_addr; int rx_buffer_phys_addr; } ;
struct TYPE_6__ {scalar_t__ conn_type; int rx_num_ooo_buffers; int rx_num_desc; } ;
struct qed_ll2_info {TYPE_3__ input; } ;
struct qed_hwfn {int p_ooo_info; TYPE_2__* cdev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (struct qed_ooo_buffer*) ;
 struct qed_ooo_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ,struct qed_ooo_buffer*) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_6,
          struct qed_ll2_info *VAR_7, u16 VAR_8)
{
 struct qed_ooo_buffer *VAR_9 = ((void*)0);
 void *VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 if (VAR_7->input.conn_type != VAR_4)
  return VAR_12;


 if (!VAR_7->input.rx_num_ooo_buffers) {
  u16 VAR_13 = VAR_7->input.rx_num_desc;

  if (!VAR_13)
   return -VAR_0;
  VAR_7->input.rx_num_ooo_buffers = VAR_13 * 2;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->input.rx_num_ooo_buffers;
      VAR_11++) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
  if (!VAR_9) {
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_9->rx_buffer_size = VAR_8 + 26 + VAR_2;
  VAR_9->rx_buffer_size = (VAR_9->rx_buffer_size +
      VAR_2 - 1) &
     ~(VAR_2 - 1);
  VAR_10 = FUNC_1(&VAR_6->cdev->pdev->dev,
         VAR_9->rx_buffer_size,
         &VAR_9->rx_buffer_phys_addr,
         VAR_3);
  if (!VAR_10) {
   FUNC_2(VAR_9);
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_9->rx_buffer_virt_addr = VAR_10;
  FUNC_4(VAR_6, VAR_6->p_ooo_info, VAR_9);
 }

 FUNC_0(VAR_6, VAR_5,
     "Allocated [%04x] LL2 OOO buffers [each of size 0x%08x]\n",
     VAR_7->input.rx_num_ooo_buffers, VAR_9->rx_buffer_size);

out:
 return VAR_12;
}
