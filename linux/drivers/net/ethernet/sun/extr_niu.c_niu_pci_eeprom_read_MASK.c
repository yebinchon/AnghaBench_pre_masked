
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct niu {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_9, u32 VAR_10)
{
 u64 VAR_11, VAR_12 = (VAR_8 |
     (VAR_10 << VAR_4));
 int VAR_13;

 if (VAR_10 > (VAR_3 >> VAR_4))
  return -VAR_0;

 VAR_11 = VAR_12;
 FUNC_2(VAR_2, VAR_11);
 VAR_13 = 64;
 do {
  FUNC_3(5);
  VAR_11 = FUNC_1(VAR_2);
  if (VAR_11 & VAR_7)
   break;
 } while (VAR_13--);
 if (!(VAR_11 & VAR_7)) {
  FUNC_0(VAR_9->device, "EEPROM read timeout frame[%llx]\n",
   (unsigned long long) VAR_11);
  return -VAR_1;
 }

 VAR_11 = VAR_12;
 FUNC_2(VAR_2, VAR_11);
 VAR_13 = 64;
 do {
  FUNC_3(5);
  VAR_11 = FUNC_1(VAR_2);
  if (VAR_11 & VAR_7)
   break;
 } while (VAR_13--);
 if (!(VAR_11 & VAR_7)) {
  FUNC_0(VAR_9->device, "EEPROM read timeout frame[%llx]\n",
   (unsigned long long) VAR_11);
  return -VAR_1;
 }

 VAR_11 = FUNC_1(VAR_2);
 return (VAR_11 & VAR_5) >> VAR_6;
}
