
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,char*) ;
 scalar_t__ FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int ,int const*,int) ;

__attribute__((used)) static int
FUNC_3(struct rtw_dev *VAR_2, u16 VAR_3, const u8 *VAR_4, u32 VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_2) == VAR_0 &&
     !((VAR_5 + VAR_1) & (512 - 1)))
  VAR_5 += 1;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_0(VAR_2, "failed to download rsvd page\n");

 return VAR_6;
}
