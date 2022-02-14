
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*,int) ;

__attribute__((used)) static inline void FUNC_2(struct extent_buffer *VAR_2,
      int VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_2);
 VAR_4 &= ~VAR_0;
 VAR_4 |= (u64)VAR_3 << VAR_1;
 FUNC_1(VAR_2, VAR_4);
}
