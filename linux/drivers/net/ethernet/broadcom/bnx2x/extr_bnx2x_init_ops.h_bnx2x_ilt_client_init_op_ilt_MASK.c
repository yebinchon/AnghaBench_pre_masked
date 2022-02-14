
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ilt_client_info {int flags; int start; int end; } ;
struct bnx2x_ilt {int start_line; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,struct ilt_client_info*,int ,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_ilt*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1,
      struct bnx2x_ilt *VAR_2,
      struct ilt_client_info *VAR_3,
      u8 VAR_4)
{
 int VAR_5;

 if (VAR_3->flags & VAR_0)
  return;

 for (VAR_5 = VAR_3->start; VAR_5 <= VAR_3->end; VAR_5++)
  FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);


 FUNC_0(VAR_1, VAR_3, VAR_2->start_line, VAR_4);
}
