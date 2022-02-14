
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ks_net {size_t* mcast_bits; size_t mcast_lst_size; int * mcast_lst; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ks_net*,int ,int) ;
 int FUNC_2 (size_t*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ks_net *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_2->mcast_bits, 0, sizeof(u8) * VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->mcast_lst_size; VAR_3++) {
  VAR_5 = (FUNC_0(6, VAR_2->mcast_lst[VAR_3]) >> 26) & 0x3f;
  VAR_4 = VAR_5 >> 3;
  VAR_6 = 1 << (VAR_5 & 7);
  VAR_2->mcast_bits[VAR_4] |= (u8)VAR_6;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_3 & 1) {
   FUNC_1(VAR_2, (u16)((VAR_1 + VAR_3) & ~1),
    (VAR_2->mcast_bits[VAR_3] << 8) |
    VAR_2->mcast_bits[VAR_3 - 1]);
  }
 }
}
