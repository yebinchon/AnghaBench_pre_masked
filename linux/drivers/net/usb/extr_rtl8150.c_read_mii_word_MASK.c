
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
 int VAR_5 ;
 int FUNC_0 (int *,int ,int,int*) ;
 int FUNC_1 (int *,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(rtl8150_t * VAR_6, u8 VAR_7, __u8 VAR_8, u16 * VAR_9)
{
 int VAR_10;
 u8 VAR_11[3], VAR_12;

 VAR_11[0] = VAR_7;
 VAR_11[1] = VAR_11[2] = 0;
 VAR_12 = VAR_8 | VAR_5 | VAR_4;
 VAR_10 = 0;

 FUNC_1(VAR_6, VAR_1, sizeof(VAR_11), VAR_11);
 FUNC_1(VAR_6, VAR_2, 1, &VAR_12);
 do {
  FUNC_0(VAR_6, VAR_2, 1, VAR_11);
 } while ((VAR_11[0] & VAR_4) && (VAR_10++ < VAR_0));

 if (VAR_10 <= VAR_0) {
  FUNC_0(VAR_6, VAR_3, 2, VAR_11);
  *VAR_9 = VAR_11[0] | (VAR_11[1] << 8);
  return 0;
 } else
  return 1;
}
