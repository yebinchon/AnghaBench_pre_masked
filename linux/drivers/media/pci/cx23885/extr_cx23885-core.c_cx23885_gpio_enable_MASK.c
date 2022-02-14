
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct cx23885_dev*) ;
 scalar_t__ FUNC_3 (struct cx23885_dev*) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct cx23885_dev *VAR_2, u32 VAR_3, int VAR_4)
{
 if ((VAR_3 & 0x00000007) && VAR_4)
  FUNC_1(VAR_0, (VAR_3 & 0x7) << 16);
 else if ((VAR_3 & 0x00000007) && !VAR_4)
  FUNC_0(VAR_0, (VAR_3 & 0x7) << 16);

 if (VAR_3 & 0x0007fff8) {
  if (FUNC_2(VAR_2) || FUNC_3(VAR_2))
   FUNC_4("%s: Enabling GPIO on encoder ports\n",
    VAR_2->name);
 }


 if ((VAR_3 & 0x0007fff8) && VAR_4)
  FUNC_0(VAR_1, (VAR_3 & 0x7fff8) >> 3);

 else if ((VAR_3 & 0x0007fff8) && !VAR_4)
  FUNC_1(VAR_1, (VAR_3 & 0x7fff8) >> 3);


}
