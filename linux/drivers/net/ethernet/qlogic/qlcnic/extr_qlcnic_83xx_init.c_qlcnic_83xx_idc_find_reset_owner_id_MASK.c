
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10 = FUNC_0(VAR_8->ahw, VAR_4);
 VAR_11 = FUNC_0(VAR_8->ahw, VAR_5);
 VAR_14 = VAR_3;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_9 = VAR_10;

 do {
  VAR_15 = (((VAR_9 & (0xF << VAR_13 * 4)) >> VAR_13 * 4) & 0x3);
  if (VAR_15 == VAR_14)
   break;
  if (VAR_12 == (VAR_7 - 1)) {
   VAR_9 = VAR_11;
   VAR_13 = 0;
  } else {
   VAR_13++;
  }

  if (VAR_12 == (VAR_6 - 1)) {
   if (VAR_14 == VAR_3)
    VAR_14 = VAR_2;
   else if (VAR_14 == VAR_2)
    VAR_14 = VAR_1;
   else if (VAR_14 == VAR_1)
    return -VAR_0;
   VAR_9 = VAR_10;
   VAR_13 = 0;
   VAR_12 = 0;
  }
 } while (VAR_12++ < VAR_6);

 return VAR_12;
}
