
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;


 int FUNC_0 (struct ofdpa_port*,int ) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_0)
{
 struct ofdpa_port *VAR_1 = VAR_0->wpriv;

 return FUNC_0(VAR_1, 0);
}
