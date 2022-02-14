
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_dev {int dummy; } ;


 int FUNC_0 (struct cx23885_dev*,int) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct cx23885_dev *VAR_0)
{
 int VAR_1;
 FUNC_1(1, "Flatiron dump\n");
 for (VAR_1 = 0; VAR_1 < 0x24; VAR_1++) {
  FUNC_1(1, "FI[%02x] = %02x\n", VAR_1,
   FUNC_0(VAR_0, VAR_1));
 }
}
