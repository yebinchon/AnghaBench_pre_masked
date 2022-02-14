
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tc_en; int tc_thr; } ;
union cvmx_sso_wq_int_thrx {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_7__ {int tc_en; int tc_thr; } ;
union cvmx_pow_wq_int_thrx {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_8__ {int pc_thr; } ;
union cvmx_pow_wq_int_pc {scalar_t__ u64; TYPE_3__ s; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int group; int napi; scalar_t__ irq; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 struct net_device** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,int *,int ,int ) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (char*,...) ;
 int VAR_10 ;
 int FUNC_12 (scalar_t__,int ,int ,char*,int *) ;
 int VAR_11 ;

void FUNC_13(void)
{
 int VAR_12;
 struct net_device *VAR_13 = ((void*)0);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (VAR_5[VAR_12]) {
   VAR_13 = VAR_5[VAR_12];
   break;
  }
 }

 if (!VAR_13)
  FUNC_11("No net_devices were allocated.");

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
  int VAR_14;

  if (!(VAR_10 & FUNC_1(VAR_12)))
   continue;

  FUNC_10(VAR_13, &VAR_8[VAR_12].napi,
          VAR_7, VAR_11);
  FUNC_8(&VAR_8[VAR_12].napi);

  VAR_8[VAR_12].irq = VAR_3 + VAR_12;
  VAR_8[VAR_12].group = VAR_12;


  VAR_14 = FUNC_12(VAR_8[VAR_12].irq, VAR_6, 0,
      "Ethernet", &VAR_8[VAR_12].napi);
  if (VAR_14)
   FUNC_11("Could not acquire Ethernet IRQ %d\n",
         VAR_8[VAR_12].irq);

  FUNC_7(VAR_8[VAR_12].irq);


  if (FUNC_4(VAR_2)) {
   union cvmx_sso_wq_int_thrx VAR_15;
   union cvmx_pow_wq_int_pc VAR_16;

   VAR_15.u64 = 0;
   VAR_15.s.tc_en = 1;
   VAR_15.s.tc_thr = 1;
   FUNC_6(FUNC_3(VAR_12), VAR_15.u64);

   VAR_16.u64 = 0;
   VAR_16.s.pc_thr = 5;
   FUNC_6(VAR_1, VAR_16.u64);
  } else {
   union cvmx_pow_wq_int_thrx VAR_17;
   union cvmx_pow_wq_int_pc VAR_18;

   VAR_17.u64 = 0;
   VAR_17.s.tc_en = 1;
   VAR_17.s.tc_thr = 1;
   FUNC_6(FUNC_2(VAR_12), VAR_17.u64);

   VAR_18.u64 = 0;
   VAR_18.s.pc_thr = 5;
   FUNC_6(VAR_0, VAR_18.u64);
  }




  FUNC_9(&VAR_8[VAR_12].napi);
 }
 FUNC_5(&VAR_9);
}
