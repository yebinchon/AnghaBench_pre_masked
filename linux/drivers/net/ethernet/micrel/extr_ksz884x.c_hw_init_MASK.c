
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_hw {int features; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ksz_hw *VAR_10)
{
 int VAR_11 = 0;
 u16 VAR_12;
 u16 VAR_13;


 FUNC_1(VAR_0, VAR_10->io + VAR_2);


 VAR_12 = FUNC_0(VAR_10->io + VAR_4);

 VAR_13 = (VAR_12 & VAR_5) >> VAR_6;
 VAR_12 &= VAR_3;
 if (VAR_7 == VAR_12)
  VAR_11 = 1;
 else if (VAR_8 == VAR_12)
  VAR_11 = 2;
 else
  return 0;


 if (VAR_13 <= 1) {
  VAR_10->features |= VAR_9;
  if (1 == VAR_11)
   VAR_10->features |= VAR_1;
 }
 return VAR_11;
}
