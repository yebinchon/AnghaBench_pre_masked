
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offset_v2 {int v; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline __u16 FUNC_1(const struct offset_v2 *VAR_2)
{
 __u8 VAR_3 = FUNC_0(VAR_2->v) >> 60;
 return (VAR_3 <= VAR_1) ? VAR_3 : VAR_0;
}
