
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int ) ;
 int FUNC_1 (struct bnxt*,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_1, u16 VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
