
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct the_nilfs {scalar_t__ ns_sbwtime; scalar_t__ ns_sb_update_freq; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct the_nilfs *VAR_0)
{
 u64 VAR_1 = FUNC_0();

 return VAR_1 < VAR_0->ns_sbwtime ||
  VAR_1 > VAR_0->ns_sbwtime + VAR_0->ns_sb_update_freq;
}
