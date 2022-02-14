
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_host_mng_command_header {scalar_t__ checksum; scalar_t__ reserved2; scalar_t__ reserved1; int command_length; int command_id; } ;
typedef scalar_t__ s32 ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int *,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,struct e1000_host_mng_command_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

s32 FUNC_5(struct e1000_hw *VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct e1000_host_mng_command_header VAR_6;
 s32 VAR_7;
 u32 VAR_8;

 VAR_6.command_id = VAR_1;
 VAR_6.command_length = VAR_5;
 VAR_6.reserved1 = 0;
 VAR_6.reserved2 = 0;
 VAR_6.checksum = 0;


 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
       sizeof(VAR_6), &(VAR_6.checksum));
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_8 = FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_8 | VAR_0);

 return 0;
}
