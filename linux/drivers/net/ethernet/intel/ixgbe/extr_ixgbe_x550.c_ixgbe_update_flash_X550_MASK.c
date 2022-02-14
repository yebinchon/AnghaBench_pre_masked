
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int checksum; int buf_lenl; scalar_t__ buf_lenh; int cmd; } ;
union ixgbe_hic_hdr2 {TYPE_1__ req; } ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,union ixgbe_hic_hdr2*,int,int ,int) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5 = 0;
 union ixgbe_hic_hdr2 VAR_6;

 VAR_6.req.cmd = VAR_1;
 VAR_6.req.buf_lenh = 0;
 VAR_6.req.buf_lenl = VAR_2;
 VAR_6.req.checksum = VAR_0;

 VAR_5 = FUNC_0(VAR_4, &VAR_6, sizeof(VAR_6),
           VAR_3, 0);
 return VAR_5;
}
