
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct tidaw {int flags; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct tidaw *VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u32 VAR_6 = 0;
 u64 VAR_7 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].flags & VAR_1)
   break;



  VAR_7 += VAR_2[VAR_4].count;
  if (VAR_2[VAR_4].flags & VAR_0) {
   VAR_5 = 4 + FUNC_0(VAR_7, 4) - VAR_7;
   VAR_6 += VAR_5;
   VAR_7 += VAR_5;
  }
 }
 return VAR_6;
}
