
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u64 FUNC_4(bool VAR_12)
{
 u64 VAR_13;

 VAR_13 = VAR_2;
 if (FUNC_1(VAR_9) & VAR_0)
  VAR_13 |= VAR_6;
 if (FUNC_2())
  VAR_13 |= VAR_8;
 else
  VAR_13 |= VAR_7;
 VAR_13 |= VAR_3;
 if (VAR_12) {
  if (FUNC_0() & VAR_1)
   VAR_13 |= VAR_5;
 } else {
  VAR_13 |= VAR_4;
  if (!FUNC_3(VAR_11, VAR_10))
   VAR_13 |= VAR_5;
 }
 return VAR_13;
}
