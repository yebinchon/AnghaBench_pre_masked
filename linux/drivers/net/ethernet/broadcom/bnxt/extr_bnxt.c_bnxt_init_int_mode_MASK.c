
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->flags & VAR_0)
  VAR_3 = FUNC_2(VAR_2);

 if (!(VAR_2->flags & VAR_1) && FUNC_0(VAR_2)) {

  VAR_3 = FUNC_1(VAR_2);
 }
 return VAR_3;
}
