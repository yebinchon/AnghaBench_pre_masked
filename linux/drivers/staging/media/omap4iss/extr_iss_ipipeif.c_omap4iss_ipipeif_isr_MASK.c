
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_ipipeif_device {int output; int stopping; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iss_ipipeif_device*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void FUNC_3(struct iss_ipipeif_device *VAR_1, u32 VAR_2)
{
 if (FUNC_2(&VAR_1->wait,
          &VAR_1->stopping))
  return;

 if ((VAR_2 & FUNC_0(0)) &&
     (VAR_1->output & VAR_0))
  FUNC_1(VAR_1);
}
