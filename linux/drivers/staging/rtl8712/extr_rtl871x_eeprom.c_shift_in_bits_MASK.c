
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct _adapter {scalar_t__ surprise_removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _adapter*,int*) ;
 int FUNC_1 (struct _adapter*,int ) ;
 int FUNC_2 (struct _adapter*,int*) ;

__attribute__((used)) static u16 FUNC_3(struct _adapter *VAR_3)
{
 u16 VAR_4, VAR_5 = 0, VAR_6;

 if (VAR_3->surprise_removed)
  goto out;
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_4 &= ~(VAR_2 | VAR_1);
 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5 <<= 1;
  FUNC_2(VAR_3, &VAR_4);
  if (VAR_3->surprise_removed)
   goto out;
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  VAR_4 &= ~(VAR_1);
  if (VAR_4 & VAR_2)
   VAR_5 |= 1;
  FUNC_0(VAR_3, &VAR_4);
 }
out:
 return VAR_5;
}
