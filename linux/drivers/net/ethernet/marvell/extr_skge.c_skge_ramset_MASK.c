
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct skge_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct skge_hw*,int ,int) ;
 int FUNC_2 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct skge_hw *VAR_12, u16 VAR_13, u32 VAR_14, size_t VAR_15)
{
 u32 VAR_16;

 VAR_14 /= 8;
 VAR_15 /= 8;
 VAR_16 = VAR_14 + VAR_15 - 1;

 FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_2), VAR_7);
 FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_10), VAR_14);
 FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_11), VAR_14);
 FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_6), VAR_14);
 FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_5), VAR_16);

 if (VAR_13 == VAR_0 || VAR_13 == VAR_1) {

  FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_9),
        VAR_14 + (2*VAR_15)/3);
  FUNC_1(VAR_12, FUNC_0(VAR_13, VAR_8),
        VAR_14 + (VAR_15/3));
 } else {



  FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_2), VAR_4);
 }

 FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_2), VAR_3);
}
