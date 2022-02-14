
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(u8 VAR_2, u64 *VAR_3)
{
 u64 VAR_4 = VAR_2;


 VAR_4 <<= 56;

 FUNC_1(&VAR_0);
 *VAR_3 = (VAR_1 | VAR_4);
 if (++VAR_1 & 0xff00000000000000ull) {
  FUNC_0(0, "This node's cookie will now wrap!\n");
  VAR_1 = 1;
 }
 FUNC_2(&VAR_0);
}
