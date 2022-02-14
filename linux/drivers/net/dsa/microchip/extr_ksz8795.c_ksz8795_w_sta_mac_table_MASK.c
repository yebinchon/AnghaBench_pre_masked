
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_device {int dummy; } ;
struct alu_struct {int* mac; scalar_t__ is_static; scalar_t__ fid; scalar_t__ is_use_fid; scalar_t__ is_override; scalar_t__ port_forward; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_6, u16 VAR_7,
        struct alu_struct *VAR_8)
{
 u32 VAR_9, VAR_10;
 u64 VAR_11;

 VAR_10 = ((u32)VAR_8->mac[2] << 24) |
  ((u32)VAR_8->mac[3] << 16) |
  ((u32)VAR_8->mac[4] << 8) | VAR_8->mac[5];
 VAR_9 = ((u32)VAR_8->mac[0] << 8) | VAR_8->mac[1];
 VAR_9 |= (u32)VAR_8->port_forward << VAR_1;

 if (VAR_8->is_override)
  VAR_9 |= VAR_2;
 if (VAR_8->is_use_fid) {
  VAR_9 |= VAR_3;
  VAR_9 |= (u32)VAR_8->fid << VAR_0;
 }
 if (VAR_8->is_static)
  VAR_9 |= VAR_4;
 else
  VAR_9 &= ~VAR_2;

 VAR_11 = (u64)VAR_9 << 32 | VAR_10;
 FUNC_0(VAR_6, VAR_5, VAR_7, VAR_11);
}
