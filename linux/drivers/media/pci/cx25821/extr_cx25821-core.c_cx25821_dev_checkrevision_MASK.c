
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int hwrevision; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct cx25821_dev *VAR_1)
{
 VAR_1->hwrevision = FUNC_0(VAR_0) & 0xff;

 FUNC_1("Hardware revision = 0x%02x\n", VAR_1->hwrevision);
}
