
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {void** j32; } ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(const struct ubifs_info *VAR_3, void *VAR_4,
          ino_t VAR_5)
{
 union ubifs_key *VAR_6 = VAR_4;

 VAR_6->j32[0] = FUNC_0(VAR_5);
 VAR_6->j32[1] = FUNC_0(VAR_0 << VAR_2);
 FUNC_1(VAR_4 + 8, 0, VAR_1 - 8);
}
