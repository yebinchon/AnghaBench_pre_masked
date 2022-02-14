
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int dummy; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0, unsigned char *VAR_1)
{
 struct tda9887_priv *VAR_2 = VAR_0->analog_demod_priv;

 static char *VAR_3[16] = {
  "- 12.5 kHz",
  "- 37.5 kHz",
  "- 62.5 kHz",
  "- 87.5 kHz",
  "-112.5 kHz",
  "-137.5 kHz",
  "-162.5 kHz",
  "-187.5 kHz [min]",
  "+187.5 kHz [max]",
  "+162.5 kHz",
  "+137.5 kHz",
  "+112.5 kHz",
  "+ 87.5 kHz",
  "+ 62.5 kHz",
  "+ 37.5 kHz",
  "+ 12.5 kHz",
 };
 FUNC_0("read: 0x%2x\n", VAR_1[0]);
 FUNC_0("  after power on : %s\n", (VAR_1[0] & 0x01) ? "yes" : "no");
 FUNC_0("  afc            : %s\n", VAR_3[(VAR_1[0] >> 1) & 0x0f]);
 FUNC_0("  fmif level     : %s\n", (VAR_1[0] & 0x20) ? "high" : "low");
 FUNC_0("  afc window     : %s\n", (VAR_1[0] & 0x40) ? "in" : "out");
 FUNC_0("  vfi level      : %s\n", (VAR_1[0] & 0x80) ? "high" : "low");
}
