
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_5, u32 VAR_6)
{
 if (VAR_6 < VAR_4 ||
     VAR_6 > VAR_3)
  VAR_6 = VAR_3;

 return FUNC_0(VAR_5, VAR_2,
    VAR_1, VAR_0,
    &VAR_6, 1);
}
