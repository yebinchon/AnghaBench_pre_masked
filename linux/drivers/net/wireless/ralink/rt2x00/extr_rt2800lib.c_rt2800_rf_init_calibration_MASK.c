
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*,unsigned int const) ;
 int FUNC_3 (struct rt2x00_dev*,unsigned int const,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_0,
           const unsigned int VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_4(&VAR_2, FUNC_0(0x80), 1);
 FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(1);
 FUNC_4(&VAR_2, FUNC_0(0x80), 0);
 FUNC_3(VAR_0, VAR_1, VAR_2);
}
