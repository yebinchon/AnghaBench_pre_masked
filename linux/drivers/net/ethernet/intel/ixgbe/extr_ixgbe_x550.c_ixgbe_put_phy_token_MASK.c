
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int token_cmd ;
struct TYPE_4__ {int lan_id; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct TYPE_5__ {scalar_t__ ret_status; scalar_t__ cmd_resv; } ;
struct TYPE_6__ {TYPE_2__ cmd_or_resp; int checksum; int buf_len; int cmd; } ;
struct ixgbe_hic_phy_token_req {TYPE_3__ hdr; scalar_t__ pad; int command_type; int port_number; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,struct ixgbe_hic_phy_token_req*,int,int ,int) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_7)
{
 struct ixgbe_hic_phy_token_req VAR_8;
 s32 VAR_9;

 VAR_8.hdr.cmd = VAR_3;
 VAR_8.hdr.buf_len = VAR_4;
 VAR_8.hdr.cmd_or_resp.cmd_resv = 0;
 VAR_8.hdr.checksum = VAR_0;
 VAR_8.port_number = VAR_7->bus.lan_id;
 VAR_8.command_type = VAR_2;
 VAR_8.pad = 0;
 VAR_9 = FUNC_0(VAR_7, &VAR_8, sizeof(VAR_8),
           VAR_6,
           1);
 if (VAR_9)
  return VAR_9;
 if (VAR_8.hdr.cmd_or_resp.ret_status == VAR_1)
  return 0;
 return VAR_5;
}
