
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1362_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp1362_hcd*,int ) ;
 int FUNC_1 (struct isp1362_hcd*,int ,int ) ;
 int FUNC_2 (struct isp1362_hcd*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct isp1362_hcd *VAR_4)
{
 int VAR_5 = 20;

 FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_0, VAR_3);
 while (--VAR_5) {
  FUNC_3(1);
  if (!(FUNC_0(VAR_4, VAR_0) & VAR_3))
   break;
 }
 if (!VAR_5)
  FUNC_4("Software reset timeout\n");
}
