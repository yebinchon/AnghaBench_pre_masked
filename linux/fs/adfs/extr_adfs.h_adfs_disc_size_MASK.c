
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct adfs_discrecord {int disc_size; int disc_size_high; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(const struct adfs_discrecord *VAR_0)
{
 return (u64)FUNC_0(VAR_0->disc_size_high) << 32 |
      FUNC_0(VAR_0->disc_size);
}
