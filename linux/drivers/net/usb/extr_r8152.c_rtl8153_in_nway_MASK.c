
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct r8152 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct r8152*,int ) ;

__attribute__((used)) static bool FUNC_1(struct r8152 *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3, VAR_1) & 0xff;

 if (VAR_4 == VAR_2 || VAR_4 == VAR_0)
  return 0;
 else
  return 1;
}
