
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_4, int VAR_5)
{
 if (VAR_2 & 1)
  FUNC_0(VAR_3);
 if ((VAR_2 & 2) && (VAR_5 < VAR_1))
  FUNC_2("%s\n",
        FUNC_1(VAR_0 + VAR_5 - 1));
}
