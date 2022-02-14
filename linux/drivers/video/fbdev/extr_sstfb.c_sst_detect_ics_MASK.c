
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sstfb_par {int dummy; } ;
struct fb_info {struct sstfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_5)
{
 struct sstfb_par *VAR_6 = VAR_5->par;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13<5; VAR_13++ ) {
  FUNC_2(VAR_1, 0x1);
  VAR_7 = FUNC_1(VAR_0);
  VAR_10 = FUNC_1(VAR_0);
  FUNC_2(VAR_1, 0x7);
  VAR_8 = FUNC_1(VAR_0);
  VAR_11 = FUNC_1(VAR_0);
  FUNC_2(VAR_1, 0xb);
  VAR_9= FUNC_1(VAR_0);
  VAR_12= FUNC_1(VAR_0);
  FUNC_0("m_clk0_1: %#x, m_clk0_7: %#x, m_clk1_b: %#x\n",
   VAR_7, VAR_8, VAR_9);
  FUNC_0("n_clk0_1: %#x, n_clk0_7: %#x, n_clk1_b: %#x\n",
   VAR_10, VAR_11, VAR_12);
  if (( VAR_7 == VAR_2)
      && (VAR_8 == VAR_3)
      && (VAR_9 == VAR_4)) {
   return 1;
  }
 }
 return 0;
}
