
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int grc_local_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_7)
{
 u32 VAR_8;

 if (!FUNC_1(VAR_7, VAR_5) ||
     FUNC_0(VAR_7) == VAR_0 ||
     FUNC_0(VAR_7) == VAR_1)
  return;

 VAR_8 = VAR_7->grc_local_ctrl | VAR_2;

 FUNC_2(VAR_4,
      VAR_8 | VAR_3,
      VAR_6);

 FUNC_2(VAR_4,
      VAR_8,
      VAR_6);

 FUNC_2(VAR_4,
      VAR_8 | VAR_3,
      VAR_6);
}
