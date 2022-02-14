
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_device {int destroy; struct storvsc_device* stor_chns; } ;
struct hv_device {int channel; } ;


 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*,int *) ;
 int FUNC_2 (struct storvsc_device*) ;
 int FUNC_3 (struct storvsc_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct hv_device *VAR_0)
{
 struct storvsc_device *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 VAR_1->destroy = 1;


 FUNC_5();







 FUNC_3(VAR_1);
 FUNC_1(VAR_0, ((void*)0));


 FUNC_4(VAR_0->channel);

 FUNC_2(VAR_1->stor_chns);
 FUNC_2(VAR_1);
 return 0;
}
