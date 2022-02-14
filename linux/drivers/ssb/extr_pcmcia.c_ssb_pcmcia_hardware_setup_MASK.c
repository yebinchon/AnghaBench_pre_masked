
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {scalar_t__ bustype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ssb_bus*,scalar_t__) ;
 int FUNC_1 (struct ssb_bus*,int ) ;

int FUNC_2(struct ssb_bus *VAR_2)
{
 int VAR_3;

 if (VAR_2->bustype != VAR_1)
  return 0;



 FUNC_1(VAR_2, 0);

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0 + 0x80);
 if (VAR_3)
  return VAR_3;

 return 0;
}
