
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* uint16_t ;
typedef void* u32 ;
struct csio_sge {int csio_fl_align; int * counter_val; void** timer_val; void* sge_control; } ;
struct csio_wrm {struct csio_sge sge; } ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (struct csio_hw*,int ) ;
 int FUNC_12 (struct csio_hw*,struct csio_sge*,int) ;
 struct csio_wrm* FUNC_13 (struct csio_hw*) ;
 int FUNC_14 (struct csio_hw*) ;
 void* FUNC_15 (struct csio_hw*,int ) ;

__attribute__((used)) static void
FUNC_16(struct csio_hw *VAR_6)
{
 struct csio_wrm *VAR_7 = FUNC_13(VAR_6);
 struct csio_sge *VAR_8 = &VAR_7->sge;
 uint32_t VAR_9;
 int VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 VAR_8->sge_control = FUNC_15(VAR_6, VAR_1);

 VAR_9 = FUNC_0(VAR_8->sge_control);

 switch (VAR_9) {
 case 131:
  VAR_8->csio_fl_align = 32; break;
 case 128:
  VAR_8->csio_fl_align = 64; break;
 case 134:
  VAR_8->csio_fl_align = 128; break;
 case 132:
  VAR_8->csio_fl_align = 256; break;
 case 129:
  VAR_8->csio_fl_align = 512; break;
 case 135:
  VAR_8->csio_fl_align = 1024; break;
 case 133:
  VAR_8->csio_fl_align = 2048; break;
 case 130:
  VAR_8->csio_fl_align = 4096; break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_12(VAR_6, VAR_8, VAR_10);

 VAR_11 = FUNC_15(VAR_6, VAR_3);
 VAR_12 = FUNC_15(VAR_6, VAR_4);
 VAR_13 = FUNC_15(VAR_6, VAR_5);

 VAR_8->timer_val[0] = (uint16_t)FUNC_11(VAR_6,
     FUNC_5(VAR_11));
 VAR_8->timer_val[1] = (uint16_t)FUNC_11(VAR_6,
     FUNC_6(VAR_11));
 VAR_8->timer_val[2] = (uint16_t)FUNC_11(VAR_6,
     FUNC_7(VAR_12));
 VAR_8->timer_val[3] = (uint16_t)FUNC_11(VAR_6,
     FUNC_8(VAR_12));
 VAR_8->timer_val[4] = (uint16_t)FUNC_11(VAR_6,
     FUNC_9(VAR_13));
 VAR_8->timer_val[5] = (uint16_t)FUNC_11(VAR_6,
     FUNC_10(VAR_13));

 VAR_14 = FUNC_15(VAR_6, VAR_2);
 VAR_8->counter_val[0] = FUNC_1(VAR_14);
 VAR_8->counter_val[1] = FUNC_2(VAR_14);
 VAR_8->counter_val[2] = FUNC_3(VAR_14);
 VAR_8->counter_val[3] = FUNC_4(VAR_14);

 FUNC_14(VAR_6);
}
