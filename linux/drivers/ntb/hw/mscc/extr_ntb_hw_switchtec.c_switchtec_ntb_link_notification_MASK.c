
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int dummy; } ;
struct switchtec_dev {struct switchtec_ntb* sndev; } ;


 int VAR_0 ;
 int FUNC_0 (struct switchtec_ntb*,int ) ;

__attribute__((used)) static void FUNC_1(struct switchtec_dev *VAR_1)
{
 struct switchtec_ntb *VAR_2 = VAR_1->sndev;

 FUNC_0(VAR_2, VAR_0);
}
