
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bs {int dummy; } ;


 int FUNC_0 (struct bs*,int,scalar_t__) ;
 int FUNC_1 (struct bs*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bs *VAR_0, u32 VAR_1)
{
 if (VAR_1 == 0) {
  FUNC_1(VAR_0, 1);
 } else {
  VAR_1++;
  FUNC_0(VAR_0, 2 * FUNC_2(VAR_1) - 1, VAR_1);
 }
}
