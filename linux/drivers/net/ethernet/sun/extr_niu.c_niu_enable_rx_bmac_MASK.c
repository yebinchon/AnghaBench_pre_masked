
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_6, int VAR_7)
{
 u64 VAR_8 = FUNC_0(VAR_0);

 VAR_8 &= ~(VAR_2 |
   VAR_3);

 if (VAR_6->flags & VAR_4)
  VAR_8 |= VAR_2;
 if (VAR_6->flags & VAR_5)
  VAR_8 |= VAR_3;

 if (VAR_7)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 FUNC_1(VAR_0, VAR_8);
}
