
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mt7615_channel_group { ____Placeholder_mt7615_channel_group } mt7615_channel_group ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline enum mt7615_channel_group
FUNC_0(int VAR_7)
{
 if (VAR_7 >= 184 && VAR_7 <= 196)
  return VAR_0;
 if (VAR_7 <= 48)
  return VAR_1;
 if (VAR_7 <= 64)
  return VAR_2;
 if (VAR_7 <= 114)
  return VAR_3;
 if (VAR_7 <= 144)
  return VAR_4;
 if (VAR_7 <= 161)
  return VAR_5;
 return VAR_6;
}
