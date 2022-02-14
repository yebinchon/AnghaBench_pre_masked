
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int ,int ,scalar_t__*,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct cx231xx *VAR_4)
{
 u8 VAR_5[4] = { 0, 0, 0, 0 };
 u32 VAR_6 = 0;
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_0,
           VAR_5, 4);
 if (VAR_7 > 0)
  return VAR_7;

 VAR_6 = FUNC_2(*((__le32 *) VAR_5));
 VAR_6 &= (~VAR_1);

 VAR_5[0] = (u8) VAR_6;
 VAR_5[1] = (u8) (VAR_6 >> 8);
 VAR_5[2] = (u8) (VAR_6 >> 16);
 VAR_5[3] = (u8) (VAR_6 >> 24);
 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_0,
     VAR_5, 4);

 return VAR_7;
}
