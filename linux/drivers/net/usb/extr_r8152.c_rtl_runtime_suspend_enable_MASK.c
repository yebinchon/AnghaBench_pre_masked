
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int saved_wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct r8152*,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_7, bool VAR_8)
{
 if (VAR_8) {
  u32 VAR_9;

  FUNC_0(VAR_7, VAR_6);

  FUNC_2(VAR_7, VAR_3, VAR_5, VAR_0);

  VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_4);
  VAR_9 |= VAR_2;
  FUNC_3(VAR_7, VAR_3, VAR_4, VAR_9);

  FUNC_2(VAR_7, VAR_3, VAR_5, VAR_1);
 } else {
  u32 VAR_10;

  FUNC_0(VAR_7, VAR_7->saved_wolopts);

  FUNC_2(VAR_7, VAR_3, VAR_5, VAR_0);

  VAR_10 = FUNC_1(VAR_7, VAR_3, VAR_4);
  VAR_10 &= ~VAR_2;
  FUNC_3(VAR_7, VAR_3, VAR_4, VAR_10);

  FUNC_2(VAR_7, VAR_3, VAR_5, VAR_1);
 }
}
