
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;






 int FUNC_0 (char*,int,char*,int) ;

const char *FUNC_1(int VAR_0)
{
 static char VAR_1[9];

 switch (VAR_0) {
 case 129:
  return "CodaDx6";
 case 128:
  return "CodaHx4";
 case 131:
  return "CODA7541";
 case 130:
  return "CODA960";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "(0x%04x)", VAR_0);
  return VAR_1;
 }
}
