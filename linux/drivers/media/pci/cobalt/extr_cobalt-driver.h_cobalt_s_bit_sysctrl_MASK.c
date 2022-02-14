
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct cobalt {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct cobalt*,int ) ;
 int FUNC_1 (struct cobalt*,int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct cobalt *VAR_1,
     int VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_1, VAR_0,
   (VAR_4 & ~(1UL << VAR_2)) | (VAR_3 << VAR_2));
}
