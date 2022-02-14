
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cx23885_dev*) ;
 scalar_t__ FUNC_2 (struct cx23885_dev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

u32 FUNC_5(struct cx23885_dev *VAR_2, u32 VAR_3)
{
 if (VAR_3 & 0x00000007)
  return (FUNC_0(VAR_0) >> 8) & VAR_3 & 0x7;

 if (VAR_3 & 0x0007fff8) {
  if (FUNC_1(VAR_2) || FUNC_2(VAR_2))
   FUNC_3("%s: Reading GPIO moving on encoder ports\n",
    VAR_2->name);
  return (FUNC_0(VAR_1) & ((VAR_3 & 0x7fff8) >> 3)) << 3;
 }


 if (VAR_3 & 0x00f80000)
  FUNC_4("%s: Unsupported\n", VAR_2->name);

 return 0;
}
