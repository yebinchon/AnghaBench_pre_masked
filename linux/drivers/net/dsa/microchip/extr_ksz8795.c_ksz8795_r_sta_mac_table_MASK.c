
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_device {int dummy; } ;
struct alu_struct {int port_forward; int is_override; int is_use_fid; int fid; void** mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ksz_device *VAR_9, u16 VAR_10,
       struct alu_struct *VAR_11)
{
 u32 VAR_12, VAR_13;
 u64 VAR_14;

 FUNC_0(VAR_9, VAR_8, VAR_10, &VAR_14);
 VAR_12 = VAR_14 >> 32;
 VAR_13 = (u32)VAR_14;
 if (VAR_12 & (VAR_7 | VAR_5)) {
  VAR_11->mac[5] = (u8)VAR_13;
  VAR_11->mac[4] = (u8)(VAR_13 >> 8);
  VAR_11->mac[3] = (u8)(VAR_13 >> 16);
  VAR_11->mac[2] = (u8)(VAR_13 >> 24);
  VAR_11->mac[1] = (u8)VAR_12;
  VAR_11->mac[0] = (u8)(VAR_12 >> 8);
  VAR_11->port_forward = (VAR_12 & VAR_4) >>
   VAR_2;
  VAR_11->is_override =
   (VAR_12 & VAR_5) ? 1 : 0;
  VAR_12 >>= 1;
  VAR_11->is_use_fid = (VAR_12 & VAR_6) ? 1 : 0;
  VAR_11->fid = (VAR_12 & VAR_3) >>
   VAR_1;
  return 0;
 }
 return -VAR_0;
}
