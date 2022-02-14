
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;

int FUNC_2(struct cx231xx *VAR_4, u32 VAR_5)
{
 u8 VAR_6 = (u8) VAR_5;
 u8 VAR_7 = (u8) (VAR_5 >> 8);
 u8 VAR_8 = (u8) (VAR_5 >> 16);
 int VAR_9 = 0;
 u8 VAR_10 = 0;

 if (VAR_6 != 0) {
  VAR_9 = FUNC_0(VAR_4, VAR_0, &VAR_10);
  VAR_10 &= ~VAR_3;
  VAR_10 |= (VAR_6 - 1) << 4;
  VAR_10 &= 0xff;
  VAR_9 = FUNC_1(VAR_4, VAR_0, VAR_10);
 }

 if (VAR_7 != 0) {
  VAR_9 = FUNC_0(VAR_4, VAR_1, &VAR_10);
  VAR_10 &= ~VAR_3;
  VAR_10 |= (VAR_7 - 1) << 4;
  VAR_10 &= 0xff;
  VAR_9 = FUNC_1(VAR_4, VAR_1, VAR_10);
 }



 if (VAR_8 != 0) {
  VAR_9 = FUNC_0(VAR_4, VAR_2, &VAR_10);
  VAR_10 &= ~VAR_3;
  VAR_10 |= (VAR_8 - 1) << 4;
  VAR_10 &= 0xff;
  VAR_9 = FUNC_1(VAR_4, VAR_2, VAR_10);
 }

 return VAR_9;
}
