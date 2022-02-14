
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int dummy; } ;







 int FUNC_0 (struct fwtty_port*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct fwtty_port *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0, "card busy\n");
  break;
 case 132:
  FUNC_0(VAR_0, "bad unit addr or write length\n");
  break;
 case 130:
  FUNC_0(VAR_0, "failed rx\n");
  break;
 case 129:
  FUNC_0(VAR_0, "missing ack\n");
  break;
 case 131:
  FUNC_0(VAR_0, "remote busy\n");
  break;
 default:
  FUNC_0(VAR_0, "failed tx: %d\n", VAR_1);
 }
}
