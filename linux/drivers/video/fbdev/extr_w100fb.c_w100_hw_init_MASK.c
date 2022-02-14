
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int top_addr; } ;
union wrap_top_dir_u {scalar_t__ val; TYPE_9__ f; } ;
struct TYPE_17__ {int start_addr; } ;
union wrap_start_dir_u {scalar_t__ val; TYPE_8__ f; } ;
struct TYPE_14__ {int ad_inc_a; int ad_inc_b; scalar_t__ rd_data_rdy_b; scalar_t__ rd_data_rdy_a; } ;
union intf_cntl_u {scalar_t__ val; TYPE_5__ f; } ;
struct TYPE_15__ {int access_ind_addr_a; int access_ind_addr_b; int access_scratch_reg; scalar_t__ transition_size; } ;
union cpu_defaults_u {scalar_t__ val; TYPE_6__ f; } ;
struct TYPE_11__ {int en_dword_split_to_rbbm; int dis_timeout_during_rbbm; scalar_t__ dis_packer_ful_during_rbbm_timeout; } ;
union cif_write_dbg_u {void* val; TYPE_2__ f; } ;
struct TYPE_12__ {int dis_rd_same_byte_to_trig_fetch; } ;
union cif_read_dbg_u {void* val; TYPE_3__ f; } ;
union cif_io_u {scalar_t__ val; } ;
struct TYPE_13__ {int dis_system_bits; int dis_mr; int intb_oe; int interrupt_active_high; scalar_t__ en_wait_to_compensate_dq_prop_dly; } ;
union cif_cntl_u {void* val; TYPE_4__ f; } ;
struct TYPE_16__ {int cfgreg_base; } ;
union cfgreg_base_u {scalar_t__ val; TYPE_7__ f; } ;
typedef int u8 ;
typedef int u32 ;
struct w100fb_par {TYPE_1__* mach; } ;
struct w100_gpio_regs {int init_data1; int init_data2; int gpio_dir1; int gpio_oe1; int gpio_dir2; int gpio_oe2; } ;
struct TYPE_10__ {struct w100_gpio_regs* gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct w100fb_par *VAR_31)
{
 u32 VAR_32;
 union cif_cntl_u VAR_33;
 union intf_cntl_u VAR_34;
 union cfgreg_base_u VAR_35;
 union wrap_top_dir_u VAR_36;
 union cif_read_dbg_u VAR_37;
 union cpu_defaults_u VAR_38;
 union cif_write_dbg_u VAR_39;
 union wrap_start_dir_u VAR_40;
 union cif_io_u VAR_41;
 struct w100_gpio_regs *VAR_42 = VAR_31->mach->gpio;

 FUNC_1();



 FUNC_3(0x31, VAR_30 + VAR_26);
 for (VAR_32 = 0; VAR_32 < 10000; VAR_32++)
  FUNC_0(VAR_30 + VAR_26);
 FUNC_3(0x30, VAR_30 + VAR_26);


 VAR_41.val = VAR_8;
 FUNC_3((u32)(VAR_41.val), VAR_30 + VAR_15);

 VAR_39.val = FUNC_0(VAR_30 + VAR_17);
 VAR_39.f.dis_packer_ful_during_rbbm_timeout = 0;
 VAR_39.f.en_dword_split_to_rbbm = 1;
 VAR_39.f.dis_timeout_during_rbbm = 1;
 FUNC_3((u32) (VAR_39.val), VAR_30 + VAR_17);

 VAR_37.val = FUNC_0(VAR_30 + VAR_16);
 VAR_37.f.dis_rd_same_byte_to_trig_fetch = 1;
 FUNC_3((u32) (VAR_37.val), VAR_30 + VAR_16);

 VAR_33.val = FUNC_0(VAR_30 + VAR_14);
 VAR_33.f.dis_system_bits = 1;
 VAR_33.f.dis_mr = 1;
 VAR_33.f.en_wait_to_compensate_dq_prop_dly = 0;
 VAR_33.f.intb_oe = 1;
 VAR_33.f.interrupt_active_high = 1;
 FUNC_3((u32) (VAR_33.val), VAR_30 + VAR_14);


 VAR_34.val = VAR_10;
 VAR_34.f.ad_inc_a = 1;
 VAR_34.f.ad_inc_b = 1;
 VAR_34.f.rd_data_rdy_a = 0;
 VAR_34.f.rd_data_rdy_b = 0;
 FUNC_2((u8) (VAR_34.val), VAR_29 + VAR_5);

 VAR_38.val = VAR_9;
 VAR_38.f.access_ind_addr_a = 1;
 VAR_38.f.access_ind_addr_b = 1;
 VAR_38.f.access_scratch_reg = 1;
 VAR_38.f.transition_size = 0;
 FUNC_2((u8) (VAR_38.val), VAR_29 + VAR_4);


 FUNC_2((u8) (VAR_1 >> 16), VAR_29 + VAR_6);

 VAR_35.val = VAR_7;
 VAR_35.f.cfgreg_base = VAR_0;
 FUNC_3((u32) (VAR_35.val), VAR_30 + VAR_13);

 VAR_40.val = VAR_11;
 VAR_40.f.start_addr = VAR_2 >> 1;
 FUNC_3((u32) (VAR_40.val), VAR_30 + VAR_27);

 VAR_36.val = VAR_12;
 VAR_36.f.top_addr = VAR_3 >> 1;
 FUNC_3((u32) (VAR_36.val), VAR_30 + VAR_28);

 FUNC_3((u32) 0x2440, VAR_30 + VAR_25);


 VAR_32 = FUNC_0(VAR_30 + VAR_18);
 VAR_32 &= 0xff7fffff;
 VAR_32 |= 0x00800000;
 FUNC_3(VAR_32, VAR_30 + VAR_18);


 if (VAR_42) {
  FUNC_3(VAR_42->init_data1, VAR_30 + VAR_23);
  FUNC_3(VAR_42->init_data2, VAR_30 + VAR_24);
  FUNC_3(VAR_42->gpio_dir1, VAR_30 + VAR_19);
  FUNC_3(VAR_42->gpio_oe1, VAR_30 + VAR_20);
  FUNC_3(VAR_42->gpio_dir2, VAR_30 + VAR_21);
  FUNC_3(VAR_42->gpio_oe2, VAR_30 + VAR_22);
 }
}
