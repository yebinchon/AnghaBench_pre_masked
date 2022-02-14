
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_host_mng_command_header {int checksum; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1,
          struct e1000_host_mng_command_header *VAR_2)
{
 u16 VAR_3, VAR_4 = sizeof(struct e1000_host_mng_command_header);



 VAR_2->checksum = FUNC_1((u8 *)VAR_2, VAR_4);

 VAR_4 >>= 2;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_0(VAR_1, VAR_0, VAR_3, *((u32 *)VAR_2 + VAR_3));
  FUNC_2();
 }

 return 0;
}
