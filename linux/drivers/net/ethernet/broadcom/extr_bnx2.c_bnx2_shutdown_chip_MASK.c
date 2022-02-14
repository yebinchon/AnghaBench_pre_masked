
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int flags; scalar_t__ wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->flags & VAR_3)
  VAR_5 = VAR_2;
 else if (VAR_4->wol)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return FUNC_0(VAR_4, VAR_5);
}
