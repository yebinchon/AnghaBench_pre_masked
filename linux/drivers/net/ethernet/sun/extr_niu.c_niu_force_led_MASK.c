
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_5, int VAR_6)
{
 u64 VAR_7, VAR_8, VAR_9;

 if (VAR_5->flags & VAR_2) {
  VAR_8 = VAR_3;
  VAR_9 = VAR_4;
 } else {
  VAR_8 = VAR_0;
  VAR_9 = VAR_1;
 }

 VAR_7 = FUNC_0(VAR_8);
 if (VAR_6)
  VAR_7 |= VAR_9;
 else
  VAR_7 &= ~VAR_9;
 FUNC_1(VAR_8, VAR_7);
}
