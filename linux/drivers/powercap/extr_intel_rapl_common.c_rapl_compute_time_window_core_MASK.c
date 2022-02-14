
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rapl_package {int time_unit; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u64 FUNC_3(struct rapl_package *VAR_0, u64 VAR_1,
      bool VAR_2)
{
 u64 VAR_3, VAR_4;





 if (!VAR_2) {
  VAR_3 = (VAR_1 & 0x60) >> 5;
  VAR_4 = VAR_1 & 0x1f;
  VAR_1 = (1 << VAR_4) * (4 + VAR_3) * VAR_0->time_unit / 4;
 } else {
  FUNC_1(VAR_1, VAR_0->time_unit);
  VAR_4 = FUNC_2(VAR_1);
  VAR_3 = FUNC_0(4 * (VAR_1 - (1 << VAR_4)), 1 << VAR_4);
  VAR_1 = (VAR_4 & 0x1f) | ((VAR_3 & 0x3) << 5);
 }
 return VAR_1;
}
