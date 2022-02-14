
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int key_fmt; } ;


 unsigned long long VAR_0 ;

 unsigned long long VAR_1 ;

__attribute__((used)) static inline unsigned long long FUNC_0(const struct ubifs_info *VAR_2)
{
 switch (VAR_2->key_fmt) {
 case 128:
  return (1ULL << VAR_1) * VAR_0;
 default:
  return 0;
 }
}
