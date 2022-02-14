
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ks8842_adapter {int conf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ks8842_adapter*,int,scalar_t__) ;
 int FUNC_1 (struct ks8842_adapter*,int,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ks8842_adapter *VAR_8, u8 *VAR_9)
{
 int VAR_10;
 u16 VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_9[VAR_0 - VAR_10 - 1] = FUNC_1(VAR_8, 2, VAR_6 + VAR_10);

 if (VAR_8->conf_flags & VAR_1) {





  VAR_11 = FUNC_0(VAR_8, 2, VAR_6);
  FUNC_2(VAR_8, 39, VAR_11, VAR_4);
  VAR_11 = FUNC_0(VAR_8, 2, VAR_7);
  FUNC_2(VAR_8, 39, VAR_11, VAR_3);
  VAR_11 = FUNC_0(VAR_8, 2, VAR_5);
  FUNC_2(VAR_8, 39, VAR_11, VAR_2);
 } else {


  VAR_11 = FUNC_0(VAR_8, 2, VAR_6);
  FUNC_2(VAR_8, 39, VAR_11, VAR_2);
  VAR_11 = FUNC_0(VAR_8, 2, VAR_7);
  FUNC_2(VAR_8, 39, VAR_11, VAR_3);
  VAR_11 = FUNC_0(VAR_8, 2, VAR_5);
  FUNC_2(VAR_8, 39, VAR_11, VAR_4);
 }
}
