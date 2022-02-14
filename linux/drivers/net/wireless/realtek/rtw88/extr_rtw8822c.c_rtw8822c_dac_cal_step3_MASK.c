
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtw_dev*,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rtw_dev*,int ,char*,int,int) ;
 int FUNC_6 (struct rtw_dev*,char*) ;
 int FUNC_7 (struct rtw_dev*,int,int) ;
 int FUNC_8 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_9(struct rtw_dev *VAR_1, u8 VAR_2,
       u32 VAR_3, u32 VAR_4,
       u32 *VAR_5, u32 *VAR_6,
       u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13;

 VAR_9 = FUNC_4(VAR_2);
 VAR_10 = FUNC_3(VAR_2);
 VAR_11 = *VAR_5;
 VAR_12 = *VAR_6;

 FUNC_7(VAR_1, VAR_9 + 0x0c, 0xdff00220);
 FUNC_7(VAR_1, VAR_9 + 0x10, 0x02d508c5);
 FUNC_7(VAR_1, 0x9b4, 0xdb66db00);
 FUNC_7(VAR_1, VAR_9 + 0xb0, 0x0a11fb88);
 FUNC_7(VAR_1, VAR_9 + 0xbc, 0xc008ff81);
 FUNC_7(VAR_1, VAR_9 + 0xc0, 0x0003d208);
 FUNC_8(VAR_1, VAR_9 + 0xbc, 0xf0000000, VAR_11 & 0xf);
 FUNC_8(VAR_1, VAR_9 + 0xc0, 0xf, (VAR_11 & 0xf0) >> 4);
 FUNC_7(VAR_1, VAR_9 + 0xcc, 0x0a11fb88);
 FUNC_7(VAR_1, VAR_9 + 0xd8, 0xe008ff81);
 FUNC_7(VAR_1, VAR_9 + 0xdc, 0x0003d208);
 FUNC_8(VAR_1, VAR_9 + 0xd8, 0xf0000000, VAR_12 & 0xf);
 FUNC_8(VAR_1, VAR_9 + 0xdc, 0xf, (VAR_12 & 0xf0) >> 4);
 FUNC_7(VAR_1, VAR_9 + 0xb8, 0x60000000);
 FUNC_1(2);
 FUNC_8(VAR_1, VAR_9 + 0xbc, 0xe, 0x6);
 FUNC_1(2);
 FUNC_7(VAR_1, VAR_9 + 0xb0, 0x0a11fb89);
 FUNC_7(VAR_1, VAR_9 + 0xcc, 0x0a11fb89);
 FUNC_1(1);
 FUNC_7(VAR_1, VAR_9 + 0xb8, 0x62000000);
 FUNC_7(VAR_1, VAR_9 + 0xd4, 0x62000000);
 FUNC_1(20);
 if (!FUNC_0(VAR_1, VAR_10 + 0x24, 0x07f80000, VAR_11) ||
     !FUNC_0(VAR_1, VAR_10 + 0x50, 0x07f80000, VAR_12))
  FUNC_6(VAR_1, "failed to write IQ vector to hardware\n");
 FUNC_7(VAR_1, VAR_9 + 0xb8, 0x02000000);
 FUNC_1(1);
 FUNC_8(VAR_1, VAR_9 + 0xbc, 0xe, 0x3);
 FUNC_7(VAR_1, 0x9b4, 0xdb6db600);


 VAR_13 = ((VAR_3 + 0x10) & 0x3ff) | (((VAR_4 + 0x10) & 0x3ff) << 10);
 FUNC_7(VAR_1, VAR_9 + 0x68, VAR_13);
 FUNC_7(VAR_1, VAR_9 + 0x10, 0x02d508c5);
 FUNC_7(VAR_1, VAR_9 + 0x60, 0xf0000000);
 FUNC_2(VAR_1, &VAR_11, &VAR_12);
 if (VAR_11 >= 0x10)
  VAR_11 = VAR_11 - 0x10;
 else
  VAR_11 = 0x400 - (0x10 - VAR_11);

 if (VAR_12 >= 0x10)
  VAR_12 = VAR_12 - 0x10;
 else
  VAR_12 = 0x400 - (0x10 - VAR_12);

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;

 if (VAR_11 >= 0x200)
  VAR_11 = 0x400 - VAR_11;
 if (VAR_12 >= 0x200)
  VAR_12 = 0x400 - VAR_12;

 *VAR_5 = VAR_11;
 *VAR_6 = VAR_12;

 FUNC_5(VAR_1, VAR_0,
  "[DACK] after  DACK i=0x%x, q=0x%x\n", *VAR_7, *VAR_8);
}
