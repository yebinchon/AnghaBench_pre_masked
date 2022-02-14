
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(enum rc_proto VAR_2, u32 VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_3 & 0xff;

 if (VAR_2 == VAR_0) {


  VAR_5 = (VAR_3 >> 24) & 0xff;
  VAR_4 = (VAR_3 >> 16) & 0xff;
  VAR_7 = (VAR_3 >> 8) & 0xff;
 } else if (VAR_2 == VAR_1) {


  VAR_4 = (VAR_3 >> 16) & 0xff;
  VAR_5 = (VAR_3 >> 8) & 0xff;
  VAR_7 = VAR_6 ^ 0xff;
 } else {


  VAR_4 = (VAR_3 >> 8) & 0xff;
  VAR_5 = VAR_4 ^ 0xff;
  VAR_7 = VAR_6 ^ 0xff;
 }


 return VAR_7 << 24 |
        VAR_6 << 16 |
        VAR_5 << 8 |
        VAR_4;
}
