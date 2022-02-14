
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 unsigned char FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(int VAR_4)
{
 int VAR_5 = 0;
 unsigned char VAR_6;
 unsigned long VAR_7;
 u8 VAR_8;






 if (VAR_4 < 0 || VAR_4 > 0x3f)
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_4);


 if (VAR_6 > 0x3f || VAR_6 < 0x04)
  return -VAR_0;


 FUNC_4(&VAR_2, VAR_7);
 VAR_8 = FUNC_1(FUNC_0(VAR_3));
 VAR_8 &= 0xc0;
 VAR_8 |= VAR_6;
 FUNC_2(VAR_8, FUNC_0(VAR_3));
 VAR_8 = FUNC_1(FUNC_0(VAR_3));

 if ((VAR_8 & 0x3f) != VAR_6)
  VAR_5 = -VAR_0;
 FUNC_5(&VAR_2, VAR_7);

 if (VAR_5)
  return VAR_5;

 VAR_1 = VAR_4;
 return 0;
}
