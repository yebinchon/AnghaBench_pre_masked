
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_12__ {unsigned short fw_on_ctlr_srl; unsigned short fw_on_ctlr_branch; unsigned short fw_on_ctlr_build; int driver_build_low; int driver_branch_low; int driver_srl_low; int driver_build_high; int driver_branch_high; int driver_srl_high; int driver_version; } ;
struct TYPE_13__ {TYPE_1__ tw_compat_info; int host; scalar_t__* sense_buffer_phys; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ,int,char*) ;
 int VAR_14 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int ,int ,int ,int ,int ,unsigned short*,unsigned short*,unsigned short*,unsigned short*,int*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(TW_Device_Extension *VAR_15, int VAR_16)
{
 int VAR_17 = 1;
 int VAR_18 = 0;
 u32 VAR_19 = 0;
 unsigned short VAR_20 = 0, VAR_21 = 0;
 unsigned short VAR_22 = 0, VAR_23 = 0;
 u32 VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = VAR_16;

 while (VAR_25 < VAR_13) {

  if (VAR_26) {
   FUNC_3(VAR_15);


   if (FUNC_11(VAR_15, FUNC_2(VAR_15), VAR_0, 0x0, 30)) {
    FUNC_5(VAR_15->host, VAR_9, 0x10, "Controller never went non-ready during reset sequence");
    VAR_25++;
    continue;
   }
   if (FUNC_11(VAR_15, FUNC_2(VAR_15), VAR_0, VAR_0, 60)) {
    FUNC_5(VAR_15->host, VAR_9, 0x11, "Controller not ready during reset sequence");
    VAR_25++;
    continue;
   }
  }


  if (FUNC_10(VAR_15, VAR_12,
           VAR_11, VAR_8,
           VAR_2, VAR_6,
           VAR_7, &VAR_20,
           &VAR_21, &VAR_22,
           &VAR_23, &VAR_24)) {
   FUNC_5(VAR_15->host, VAR_9, 0x12, "Initconnection failed while checking SRL");
   VAR_26 = 1;
   VAR_25++;
   continue;
  }


  while (VAR_18 < VAR_14) {
   FUNC_12((u32)((u64)VAR_15->sense_buffer_phys[VAR_18] >> 32), FUNC_0(VAR_15));
   FUNC_12((u32)VAR_15->sense_buffer_phys[VAR_18], FUNC_1(VAR_15));


   VAR_19 = FUNC_6(FUNC_4(VAR_15));
   if (!(VAR_19 & VAR_1))
       VAR_18++;
  }


  VAR_19 = FUNC_6(FUNC_4(VAR_15));
  if (VAR_19) {
   FUNC_5(VAR_15->host, VAR_9, 0x13, "Bad controller status after loading sense buffers");
   VAR_26 = 1;
   VAR_25++;
   continue;
  }


  if (FUNC_9(VAR_15, VAR_16)) {
   FUNC_5(VAR_15->host, VAR_9, 0x14, "AEN drain failed during reset sequence");
   VAR_26 = 1;
   VAR_25++;
   continue;
  }


  FUNC_8(VAR_15->tw_compat_info.driver_version, VAR_10, FUNC_7(VAR_10));
  VAR_15->tw_compat_info.driver_srl_high = VAR_8;
  VAR_15->tw_compat_info.driver_branch_high = VAR_6;
  VAR_15->tw_compat_info.driver_build_high = VAR_7;
  VAR_15->tw_compat_info.driver_srl_low = VAR_5;
  VAR_15->tw_compat_info.driver_branch_low = VAR_3;
  VAR_15->tw_compat_info.driver_build_low = VAR_4;
  VAR_15->tw_compat_info.fw_on_ctlr_srl = VAR_20;
  VAR_15->tw_compat_info.fw_on_ctlr_branch = VAR_22;
  VAR_15->tw_compat_info.fw_on_ctlr_build = VAR_23;


  VAR_17 = 0;
  goto out;
 }
out:
 return VAR_17;
}
