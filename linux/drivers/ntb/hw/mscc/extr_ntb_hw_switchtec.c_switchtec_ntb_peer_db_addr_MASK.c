
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct switchtec_ntb {int db_shift; int db_peer_shift; TYPE_2__* stdev; TYPE_1__* mmio_peer_dbmsg; } ;
struct ntb_dev {int pdev; } ;
typedef int resource_size_t ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_4__ {scalar_t__ mmio; } ;
struct TYPE_3__ {scalar_t__ odb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ntb_dev *VAR_2,
          phys_addr_t *VAR_3,
          resource_size_t *VAR_4,
          u64 *VAR_5,
          int VAR_6)
{
 struct switchtec_ntb *VAR_7 = FUNC_1(VAR_2);
 unsigned long VAR_8;

 if (FUNC_3(VAR_6 >= VAR_0))
  return -VAR_1;

 VAR_8 = (unsigned long)VAR_7->mmio_peer_dbmsg->odb -
  (unsigned long)VAR_7->stdev->mmio;

 VAR_8 += VAR_7->db_shift / 8;

 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_2->pdev, 0) + VAR_8;
 if (VAR_4)
  *VAR_4 = sizeof(u32);
 if (VAR_5)
  *VAR_5 = FUNC_0(VAR_6) << VAR_7->db_peer_shift;

 return 0;
}
