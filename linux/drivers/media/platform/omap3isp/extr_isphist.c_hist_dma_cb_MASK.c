
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ispstat {scalar_t__ state; int isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ispstat*) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
 struct ispstat *VAR_5 = VAR_4;



 FUNC_0(VAR_5->isp, VAR_3, VAR_0,
      VAR_1);

 FUNC_2(VAR_5);
 if (VAR_5->state != VAR_2)
  FUNC_1(VAR_5->isp);
}
