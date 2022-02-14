
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {int dummy; } ;
struct bnx2x {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_1(struct bnx2x *VAR_8,
         struct bnx2x_fastpath *VAR_9,
         bool VAR_10)
{
 unsigned long VAR_11 = 0;


 FUNC_0(VAR_0, &VAR_11);






 FUNC_0(VAR_2, &VAR_11);
 if (VAR_10)
  FUNC_0(VAR_6, &VAR_11);

 if (VAR_8->flags & VAR_7)
  FUNC_0(VAR_5, &VAR_11);

 FUNC_0(VAR_1, &VAR_11);
 FUNC_0(VAR_3, &VAR_11);





 return VAR_11;
}
