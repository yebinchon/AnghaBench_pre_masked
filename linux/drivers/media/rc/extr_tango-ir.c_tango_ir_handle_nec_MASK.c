
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_ir {int rc; scalar_t__ rc5_base; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tango_ir *VAR_1)
{
 u32 VAR_2, VAR_3;
 enum rc_proto VAR_4;

 VAR_2 = FUNC_3(VAR_1->rc5_base + VAR_0);
 if (!VAR_2) {
  FUNC_2(VAR_1->rc);
  return;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_2 >> 8, VAR_2 >> 16, VAR_2 >> 24, &VAR_4);
 FUNC_1(VAR_1->rc, VAR_4, VAR_3, 0);
}
