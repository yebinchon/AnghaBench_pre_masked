
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_pioqueue {scalar_t__ need_workarounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43legacy_pioqueue*,int ,int) ;
 int FUNC_1 (int *,int const*,int,unsigned int*) ;
 int FUNC_2 (struct b43legacy_pioqueue*,int const) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_pioqueue *VAR_4,
      u8 *VAR_5,
      const u8 *VAR_6,
      unsigned int VAR_7)
{
 u16 VAR_8;
 unsigned int VAR_9 = 0;

 if (VAR_4->need_workarounds) {
  VAR_8 = FUNC_1(VAR_5, VAR_6,
     sizeof(struct b43legacy_txhdr_fw3), &VAR_9);
  FUNC_0(VAR_4, VAR_3, VAR_8);
 }
 FUNC_0(VAR_4, VAR_0,
       VAR_2 |
       VAR_1);
 while (VAR_9 < VAR_7 - 1) {
  VAR_8 = FUNC_1(VAR_5, VAR_6,
     sizeof(struct b43legacy_txhdr_fw3), &VAR_9);
  FUNC_0(VAR_4, VAR_3, VAR_8);
 }
 if (VAR_7 % 2)
  FUNC_2(VAR_4, VAR_6[VAR_7 -
    sizeof(struct b43legacy_txhdr_fw3) - 1]);
}
