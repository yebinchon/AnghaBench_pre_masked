
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cx231xx*,int ,int) ;
 int FUNC_1 (struct cx231xx*) ;

__attribute__((used)) static int FUNC_2(struct cx231xx *VAR_9, u32 VAR_10, u32 VAR_11)
{


 u32 VAR_12;
 int VAR_13 = 0;

 VAR_12 = 0x82 | VAR_4 | ((VAR_11 & 0x000000FF) << 8);
 VAR_12 = VAR_12 << 10;
 VAR_13 = FUNC_0(VAR_9, VAR_0, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_5 | (VAR_11 & 0x0000FF00);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_6 | ((VAR_11 & 0x00FF0000) >> 8);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_7 | ((VAR_11 & 0xFF000000) >> 16);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_3 | VAR_8 |
  ((VAR_10 & 0x003F0000) >> 8);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_2 | (VAR_10 & 0xFF00);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 VAR_12 = 0x82 | VAR_1 | ((VAR_10 & 0x00FF) << 8);
 VAR_12 = VAR_12 << 10;
 FUNC_0(VAR_9, VAR_0, VAR_12);
 VAR_12 = VAR_12 | (0x05 << 10);
 FUNC_0(VAR_9, VAR_0, VAR_12);


 FUNC_1(VAR_9);

 return 0;
}
