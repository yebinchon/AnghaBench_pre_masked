
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_2, unsigned long VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 u64 VAR_7 = FUNC_2(FUNC_0(VAR_3));

 VAR_7 &= ~((VAR_1 |
        VAR_0) <<
       FUNC_1(VAR_4));
 if (VAR_5)
  VAR_7 |= (VAR_1 <<
       FUNC_1(VAR_4));
 VAR_7 |= (VAR_6 << FUNC_1(VAR_4));

 VAR_7 = FUNC_4(VAR_7);

 FUNC_3(FUNC_0(VAR_3), VAR_7);
}
