
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int timeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sfp *VAR_1, unsigned int VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_0, &VAR_1->timeout,
     VAR_2);
 else
  FUNC_0(&VAR_1->timeout);
}
