
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {scalar_t__ surprise_removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _adapter*,int*) ;
 int FUNC_1 (struct _adapter*,int ) ;
 int FUNC_2 (struct _adapter*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct _adapter*,int*) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_4, u16 VAR_5, u16 VAR_6)
{
 u16 VAR_7, VAR_8;

 if (VAR_4->surprise_removed)
  goto out;
 VAR_8 = 0x01 << (VAR_6 - 1);
 VAR_7 = FUNC_1(VAR_4, VAR_1);
 VAR_7 &= ~(VAR_3 | VAR_2);
 do {
  VAR_7 &= ~VAR_2;
  if (VAR_5 & VAR_8)
   VAR_7 |= VAR_2;
  if (VAR_4->surprise_removed)
   goto out;
  FUNC_2(VAR_4, VAR_1, (u8)VAR_7);
  FUNC_3(VAR_0);
  FUNC_4(VAR_4, &VAR_7);
  FUNC_0(VAR_4, &VAR_7);
  VAR_8 >>= 1;
 } while (VAR_8);
 if (VAR_4->surprise_removed)
  goto out;
 VAR_7 &= ~VAR_2;
 FUNC_2(VAR_4, VAR_1, (u8)VAR_7);
out:;
}
