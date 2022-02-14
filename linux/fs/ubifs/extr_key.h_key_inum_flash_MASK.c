
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * j32; } ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline ino_t FUNC_1(const struct ubifs_info *VAR_0, const void *VAR_1)
{
 const union ubifs_key *VAR_2 = VAR_1;

 return FUNC_0(VAR_2->j32[0]);
}
