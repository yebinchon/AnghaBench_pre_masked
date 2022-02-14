
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u1u2 ;
struct r8152 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct r8152*,int ,int ,int,int *) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_2, bool VAR_3)
{
 u8 VAR_4[8];

 if (VAR_3)
  FUNC_0(VAR_4, 0xff, sizeof(VAR_4));
 else
  FUNC_0(VAR_4, 0x00, sizeof(VAR_4));

 FUNC_1(VAR_2, VAR_1, VAR_0, sizeof(VAR_4), VAR_4);
}
