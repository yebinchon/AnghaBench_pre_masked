
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, "ixp4-ptp");
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_4("cannot set trigger type for irq %d\n", VAR_5);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_5, VAR_2, 0, VAR_0, &VAR_3);
 if (VAR_6) {
  FUNC_4("request_irq failed for irq %d\n", VAR_5);
  return VAR_6;
 }

 return VAR_5;
}
