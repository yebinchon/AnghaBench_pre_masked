
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct isp1362_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct isp1362_hcd*,int ,int ) ;
 int FUNC_3 (struct isp1362_hcd*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct isp1362_hcd *VAR_3, u16 VAR_4, u16 VAR_5)
{
 VAR_5 = (VAR_5 + 1) & ~1;

 FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_3(VAR_3, VAR_0,
       FUNC_0(VAR_4) | FUNC_1(VAR_5));
}
