
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int rtl8150_t ;
typedef int data ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int,int*) ;
 int FUNC_1 (int *,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(rtl8150_t * VAR_5, u8 VAR_6, __u8 VAR_7, u16 VAR_8)
{
 int VAR_9;
 u8 VAR_10[3], VAR_11;

 VAR_10[0] = VAR_6;
 VAR_10[1] = VAR_8 & 0xff;
 VAR_10[2] = (VAR_8 >> 8) & 0xff;
 VAR_11 = VAR_7 | VAR_4 | VAR_3;
 VAR_9 = 0;

 FUNC_1(VAR_5, VAR_1, sizeof(VAR_10), VAR_10);
 FUNC_1(VAR_5, VAR_2, 1, &VAR_11);
 do {
  FUNC_0(VAR_5, VAR_2, 1, VAR_10);
 } while ((VAR_10[0] & VAR_3) && (VAR_9++ < VAR_0));

 if (VAR_9 <= VAR_0)
  return 0;
 else
  return 1;
}
