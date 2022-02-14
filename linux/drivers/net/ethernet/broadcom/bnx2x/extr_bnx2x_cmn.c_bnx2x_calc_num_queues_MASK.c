
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_1)
{
 int VAR_2 = VAR_0 ? : FUNC_3();


 if (FUNC_2())
  VAR_2 = 1;

 VAR_2 = FUNC_1(VAR_2, 1, FUNC_0(VAR_1));
 return VAR_2;
}
