
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pcie {scalar_t__ ep_is_internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iproc_pcie*,int ) ;
 int FUNC_1 (struct iproc_pcie*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct iproc_pcie *VAR_4, bool VAR_5)
{
 u32 VAR_6;






 if (VAR_4->ep_is_internal)
  return;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  VAR_6 &= ~VAR_1 & ~VAR_0 &
   ~VAR_3;
  FUNC_1(VAR_4, VAR_2, VAR_6);
  FUNC_3(250);
 } else {
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  VAR_6 |= VAR_3;
  FUNC_1(VAR_4, VAR_2, VAR_6);
  FUNC_2(100);
 }
}
