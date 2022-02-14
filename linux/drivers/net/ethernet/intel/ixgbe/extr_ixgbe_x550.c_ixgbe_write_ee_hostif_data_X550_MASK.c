
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_3__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct ixgbe_hic_write_shadow_ram {int data; int address; int length; TYPE_2__ hdr; } ;
typedef int s32 ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,struct ixgbe_hic_write_shadow_ram*,int,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_4, u16 VAR_5,
        u16 VAR_6)
{
 s32 VAR_7;
 struct ixgbe_hic_write_shadow_ram VAR_8;

 VAR_8.hdr.req.cmd = VAR_1;
 VAR_8.hdr.req.buf_lenh = 0;
 VAR_8.hdr.req.buf_lenl = VAR_2;
 VAR_8.hdr.req.checksum = VAR_0;


 VAR_8.length = FUNC_0(sizeof(u16));
 VAR_8.data = VAR_6;
 VAR_8.address = FUNC_1(VAR_5 * 2);

 VAR_7 = FUNC_2(VAR_4, &VAR_8, sizeof(VAR_8),
           VAR_3, 0);
 return VAR_7;
}
