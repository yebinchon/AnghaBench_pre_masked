
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct lan78xx_net {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan78xx_net*,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct lan78xx_net *VAR_2, u32 VAR_3,
          u32 VAR_4, u8 *VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, 0, 1, &VAR_6);
 if ((VAR_7 == 0) && (VAR_6 == VAR_0))
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  VAR_7 = -VAR_1;

 return VAR_7;
}
