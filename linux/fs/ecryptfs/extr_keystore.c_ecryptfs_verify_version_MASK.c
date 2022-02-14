
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_1(u16 VAR_4)
{
 int VAR_5 = 0;
 unsigned char VAR_6;
 unsigned char VAR_7;

 VAR_6 = ((VAR_4 >> 8) & 0xFF);
 VAR_7 = (VAR_4 & 0xFF);
 if (VAR_6 != VAR_0) {
  FUNC_0(VAR_3, "Major version number mismatch. "
    "Expected [%d]; got [%d]\n",
    VAR_0, VAR_6);
  VAR_5 = -VAR_2;
  goto out;
 }
 if (VAR_7 != VAR_1) {
  FUNC_0(VAR_3, "Minor version number mismatch. "
    "Expected [%d]; got [%d]\n",
    VAR_1, VAR_7);
  VAR_5 = -VAR_2;
  goto out;
 }
out:
 return VAR_5;
}
