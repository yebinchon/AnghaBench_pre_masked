
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {struct completion* finish_me; int remove_pci; scalar_t__ done; } ;
struct completion {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct completion*,int ) ;

void FUNC_5(struct rtsx_pcr *VAR_0)
{
 struct completion VAR_1;

 VAR_0->finish_me = &VAR_1;
 FUNC_1(&VAR_1);

 if (VAR_0->done)
  FUNC_0(VAR_0->done);

 if (!VAR_0->remove_pci)
  FUNC_3(VAR_0);

 FUNC_4(&VAR_1,
   FUNC_2(2));
 VAR_0->finish_me = ((void*)0);
}
