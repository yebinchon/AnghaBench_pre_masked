
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ef4_nic {int rx_packet_hash_offset; } ;
typedef int __le32 ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static inline u32 FUNC_1(struct ef4_nic *VAR_0, const u8 *VAR_1)
{



 const u8 *VAR_2 = VAR_1 + VAR_0->rx_packet_hash_offset;
 return (u32)VAR_2[0] |
        (u32)VAR_2[1] << 8 |
        (u32)VAR_2[2] << 16 |
        (u32)VAR_2[3] << 24;

}
