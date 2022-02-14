
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ks8842_adapter {int conf_flags; int lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ks8842_adapter*,int,scalar_t__) ;
 int FUNC_1 (struct ks8842_adapter*,int,int ,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int,int ,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ks8842_adapter *VAR_8, u8 *VAR_9)
{
 unsigned long VAR_10;
 unsigned VAR_11;

 FUNC_3(&VAR_8->lock, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_2(VAR_8, 2, VAR_9[VAR_0 - VAR_11 - 1], VAR_6 + VAR_11);
  if (!(VAR_8->conf_flags & VAR_1))
   FUNC_2(VAR_8, 39, VAR_9[VAR_0 - VAR_11 - 1],
    VAR_2 + VAR_11);
 }

 if (VAR_8->conf_flags & VAR_1) {





  u16 VAR_12;

  VAR_12 = FUNC_0(VAR_8, 2, VAR_6);
  FUNC_1(VAR_8, 39, VAR_12, VAR_4);
  VAR_12 = FUNC_0(VAR_8, 2, VAR_7);
  FUNC_1(VAR_8, 39, VAR_12, VAR_3);
  VAR_12 = FUNC_0(VAR_8, 2, VAR_5);
  FUNC_1(VAR_8, 39, VAR_12, VAR_2);
 }
 FUNC_4(&VAR_8->lock, VAR_10);
}
