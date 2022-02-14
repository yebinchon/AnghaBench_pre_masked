
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ccw1 {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(u32 VAR_0, u32 VAR_1, int VAR_2)
{
 u32 VAR_3 = VAR_1 + (VAR_2 - 1) * sizeof(struct ccw1);

 return (VAR_1 <= VAR_0 && VAR_0 <= VAR_3);
}
