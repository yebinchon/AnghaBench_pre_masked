
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2, u64 VAR_3, u64 VAR_4,
  u32 VAR_5)
{
 if (VAR_5 & ~VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_2, (VAR_5 & VAR_1) ? 0x06 : 0x00,
   VAR_3, VAR_4, 0,
   (1 << 0) );
}
