
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_y; int vc_top; int vc_x; scalar_t__ vc_decom; } ;
struct tty_struct {int port; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, struct tty_struct *VAR_1)
{
 char VAR_2[40];

 FUNC_1(VAR_2, "\033[%d;%dR", VAR_0->vc_y + (VAR_0->vc_decom ? VAR_0->vc_top + 1 : 1), VAR_0->vc_x + 1);
 FUNC_0(VAR_2, VAR_1->port);
}
