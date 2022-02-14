
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int fs_info; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct extent_buffer const*) ;
 unsigned int FUNC_2 (struct extent_buffer const*,scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_3(const struct extent_buffer *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == 0)
  return FUNC_0(VAR_0->fs_info);
 return FUNC_2(VAR_0, VAR_1 - 1);
}
