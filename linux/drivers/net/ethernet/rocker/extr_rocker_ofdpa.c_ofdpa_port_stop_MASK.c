
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ofdpa_port*,int ) ;

__attribute__((used)) static void FUNC_1(struct rocker_port *VAR_1)
{
 struct ofdpa_port *VAR_2 = VAR_1->wpriv;

 FUNC_0(VAR_2, VAR_0);
}
