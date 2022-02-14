
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt1 {int dummy; } ;


 int FUNC_0 (struct pt1*,int ) ;
 int FUNC_1 (struct pt1*,int ,int) ;

__attribute__((used)) static u64 FUNC_2(struct pt1 *VAR_0)
{
 int VAR_1;
 u64 VAR_2;
 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < 57; VAR_1++) {
  VAR_2 |= (u64)(FUNC_0(VAR_0, 0) >> 30 & 1) << VAR_1;
  FUNC_1(VAR_0, 0, 0x00000008);
 }
 return VAR_2;
}
