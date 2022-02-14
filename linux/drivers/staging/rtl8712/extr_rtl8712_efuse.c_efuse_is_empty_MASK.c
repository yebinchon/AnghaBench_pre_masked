
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct _adapter*,int,int ,int*) ;

__attribute__((used)) static u8 FUNC_1(struct _adapter *VAR_0, u8 *VAR_1)
{
 u8 VAR_2, VAR_3 = 1;


 if (FUNC_0(VAR_0, 1, 0, &VAR_2)) {
  if (VAR_2 == 0xFF)
   *VAR_1 = 1;
  else
   *VAR_1 = 0;
 } else {
  VAR_3 = 0;
 }
 return VAR_3;
}
