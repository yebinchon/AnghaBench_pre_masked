
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int dev; scalar_t__ sm_retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sfp*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sfp *VAR_3, bool VAR_4)
{
 if (VAR_3->sm_retries && !--VAR_3->sm_retries) {
  FUNC_0(VAR_3->dev,
   "module persistently indicates fault, disabling\n");
  FUNC_1(VAR_3, VAR_0, 0);
 } else {
  if (VAR_4)
   FUNC_0(VAR_3->dev, "module transmit fault indicated\n");

  FUNC_1(VAR_3, VAR_1, VAR_2);
 }
}
