
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cx23885_dev *VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_0(VAR_2, VAR_0, 0);
  FUNC_1(30);
  FUNC_0(VAR_2, VAR_1, (VAR_3 & 0x80) >> 7);
  FUNC_1(30);
  VAR_3 <<= 1;
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_1(30);
 }
}
