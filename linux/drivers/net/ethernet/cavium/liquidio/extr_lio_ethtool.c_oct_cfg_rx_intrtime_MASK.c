
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_2__ {int pf_srn; } ;
struct octeon_device {int chip_id; int num_oqs; void* rx_coalesce_usecs; TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct octeon_cn6xxx {int conf; } ;
struct oct_intrmod_cfg {int rx_frames; void* rx_usecs; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ethtool_coalesce {void* rx_coalesce_usecs; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_3 (struct octeon_device*,void*) ;
 int FUNC_4 (struct octeon_device*,void*) ;
 void* FUNC_5 (struct octeon_device*,void*) ;
 int FUNC_6 (struct octeon_device*,int ,void*) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct lio *VAR_3,
          struct oct_intrmod_cfg *VAR_4,
          struct ethtool_coalesce *VAR_5)
{
 struct octeon_device *VAR_6 = VAR_3->oct_dev;
 u32 VAR_7, VAR_8;


 switch (VAR_6->chip_id) {
 case 128:
 case 129: {
  struct octeon_cn6xxx *VAR_9 =
   (struct octeon_cn6xxx *)VAR_6->chip;
  if (!VAR_5->rx_coalesce_usecs)
   VAR_8 = VAR_0;
  else
   VAR_8 = VAR_5->rx_coalesce_usecs;

  VAR_7 = FUNC_5(VAR_6,
        VAR_8);
  FUNC_6(VAR_6,
     VAR_1,
     VAR_7);

  FUNC_0(VAR_9->conf, VAR_8);
  break;
 }
 case 131: {
  u64 VAR_10;
  int VAR_11;

  if (!VAR_5->rx_coalesce_usecs)
   VAR_8 = VAR_4->rx_usecs;
  else
   VAR_8 = VAR_5->rx_coalesce_usecs;
  VAR_10 =
      FUNC_3(VAR_6, (u32)VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_6->num_oqs; VAR_11++) {
   VAR_11 += VAR_6->sriov_info.pf_srn;
   FUNC_7(VAR_6,
        FUNC_1(VAR_11),
        (VAR_4->rx_frames |
         ((u64)VAR_10 << 32)));

  }
  VAR_4->rx_usecs = VAR_8;
  VAR_6->rx_coalesce_usecs = VAR_8;
  break;
 }
 case 130: {
  u64 VAR_12;
  int VAR_13;

  if (!VAR_5->rx_coalesce_usecs)
   VAR_8 = VAR_4->rx_usecs;
  else
   VAR_8 = VAR_5->rx_coalesce_usecs;

  VAR_12 =
      FUNC_4(VAR_6, (u32)VAR_8);
  for (VAR_13 = 0; VAR_13 < VAR_6->num_oqs; VAR_13++) {
   FUNC_7(
    VAR_6, FUNC_2(VAR_13),
    (VAR_4->rx_frames |
     ((u64)VAR_12 << 32)));

  }
  VAR_4->rx_usecs = VAR_8;
  VAR_6->rx_coalesce_usecs = VAR_8;
  break;
 }
 default:
  return -VAR_2;
 }

 return 0;
}
