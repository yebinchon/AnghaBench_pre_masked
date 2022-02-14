
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_4__ {int mem; } ;
struct TYPE_5__ {int rcv_bufs_to_post; TYPE_1__ base; int kmalloced_dma; scalar_t__ kmalloced; } ;
typedef int PI_DESCR_BLOCK ;
typedef int PI_CONSUMER_BLOCK ;
typedef TYPE_2__ DFX_board_t ;


 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct device*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct device*,int,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static void FUNC_14(struct device *VAR_5)
{
 struct net_device *VAR_6 = FUNC_1(VAR_5);
 DFX_board_t *VAR_7 = FUNC_8(VAR_6);
 int VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = VAR_0 || VAR_9;
 resource_size_t VAR_11[3] = {0};
 resource_size_t VAR_12[3] = {0};
 int VAR_13;

 FUNC_13(VAR_6);

 VAR_13 = sizeof(PI_DESCR_BLOCK) +
       VAR_2 + VAR_3 +

       (VAR_7->rcv_bufs_to_post * VAR_4) +

       sizeof(PI_CONSUMER_BLOCK) +
       (VAR_1 - 1);
 if (VAR_7->kmalloced)
  FUNC_5(VAR_5, VAR_13,
      VAR_7->kmalloced, VAR_7->kmalloced_dma);

 FUNC_3(VAR_6);

 FUNC_4(VAR_5, VAR_11, VAR_12);
 if (VAR_11[2] != 0)
  FUNC_11(VAR_11[2], VAR_12[2]);
 if (VAR_11[1] != 0)
  FUNC_11(VAR_11[1], VAR_12[1]);
 if (VAR_10) {
  FUNC_7(VAR_7->base.mem);
  FUNC_10(VAR_11[0], VAR_12[0]);
 } else
  FUNC_11(VAR_11[0], VAR_12[0]);

 if (VAR_8)
  FUNC_9(FUNC_12(VAR_5));

 FUNC_6(VAR_6);
}
