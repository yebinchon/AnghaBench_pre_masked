
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ func; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct TYPE_5__ {scalar_t__ ret_status; int cmd_resv; } ;
struct TYPE_6__ {TYPE_2__ cmd_or_resp; scalar_t__ buf_len; scalar_t__ checksum; int cmd; } ;
struct ixgbe_hic_drv_info2 {TYPE_3__ hdr; int driver_string; void* ver_sub; void* ver_build; void* ver_min; void* ver_maj; void* port_num; } ;
typedef scalar_t__ s32 ;
typedef int fw_cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void**,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int *,int,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_9, u8 VAR_10, u8 VAR_11,
         u8 VAR_12, u8 VAR_13, u16 VAR_14,
         const char *VAR_15)
{
 struct ixgbe_hic_drv_info2 VAR_16;
 s32 VAR_17;
 int VAR_18;

 if (!VAR_14 || !VAR_15 || (VAR_14 > sizeof(VAR_16.driver_string)))
  return VAR_7;

 VAR_16.hdr.cmd = VAR_0;
 VAR_16.hdr.buf_len = VAR_1 + VAR_14;
 VAR_16.hdr.cmd_or_resp.cmd_resv = VAR_2;
 VAR_16.port_num = (u8)VAR_9->bus.func;
 VAR_16.ver_maj = VAR_10;
 VAR_16.ver_min = VAR_11;
 VAR_16.ver_build = VAR_12;
 VAR_16.ver_sub = VAR_13;
 VAR_16.hdr.checksum = 0;
 FUNC_2(VAR_16.driver_string, VAR_15, VAR_14);
 VAR_16.hdr.checksum = FUNC_0((u8 *)&VAR_16,
         (VAR_3 + VAR_16.hdr.buf_len));

 for (VAR_18 = 0; VAR_18 <= VAR_4; VAR_18++) {
  VAR_17 = FUNC_1(VAR_9, (u32 *)&VAR_16,
             sizeof(VAR_16),
             VAR_8,
             1);
  if (VAR_17)
   continue;

  if (VAR_16.hdr.cmd_or_resp.ret_status !=
      VAR_5)
   return VAR_6;
  return 0;
 }

 return VAR_17;
}
