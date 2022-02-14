
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct console {int cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 struct device_node* FUNC_0 (char*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char const*,int *,int ) ;
 char* FUNC_5 (char const*,char) ;

void FUNC_6(struct console *VAR_24, struct device_node *VAR_25)
{
 const char *VAR_26, *VAR_27;
 char VAR_28[] = "ttyX-mode";
 int VAR_29, VAR_30, VAR_31, VAR_32;
 char VAR_33;

 if (FUNC_2(VAR_25, "rsc") ||
     FUNC_2(VAR_25, "rsc-console") ||
     FUNC_2(VAR_25, "rsc-control")) {
  VAR_26 = FUNC_1(VAR_25,
           "ssp-console-modes", ((void*)0));
  if (!VAR_26)
   VAR_26 = "115200,8,n,1,-";
 } else if (FUNC_2(VAR_25, "lom-console")) {
  VAR_26 = "9600,8,n,1,-";
 } else {
  struct device_node *VAR_34;
  char VAR_35;

  VAR_35 = 'a';
  if (VAR_23)
   VAR_35 = *VAR_23;

  VAR_28[3] = VAR_35;

  VAR_34 = FUNC_0("/options");
  VAR_26 = FUNC_1(VAR_34, VAR_28, ((void*)0));
  if (!VAR_26)
   VAR_26 = "9600,8,n,1,-";
  FUNC_3(VAR_34);
 }

 VAR_32 = VAR_14 | VAR_20 | VAR_13;

 VAR_27 = VAR_26;
 VAR_29 = FUNC_4(VAR_27, ((void*)0), 0);
 VAR_27 = FUNC_5(VAR_27, ',');
 VAR_30 = FUNC_4(++VAR_27, ((void*)0), 0);
 VAR_27 = FUNC_5(VAR_27, ',');
 VAR_33 = *(++VAR_27);
 VAR_27 = FUNC_5(VAR_27, ',');
 VAR_31 = FUNC_4(++VAR_27, ((void*)0), 0);
 VAR_27 = FUNC_5(VAR_27, ',');


 switch (VAR_29) {
  case 150: VAR_32 |= VAR_2; break;
  case 300: VAR_32 |= VAR_6; break;
  case 600: VAR_32 |= VAR_11; break;
  case 1200: VAR_32 |= VAR_1; break;
  case 2400: VAR_32 |= VAR_5; break;
  case 4800: VAR_32 |= VAR_9; break;
  case 9600: VAR_32 |= VAR_12; break;
  case 19200: VAR_32 |= VAR_3; break;
  case 38400: VAR_32 |= VAR_7; break;
  case 57600: VAR_32 |= VAR_10; break;
  case 115200: VAR_32 |= VAR_0; break;
  case 230400: VAR_32 |= VAR_4; break;
  case 460800: VAR_32 |= VAR_8; break;
  default: VAR_29 = 9600; VAR_32 |= VAR_12; break;
 }

 switch (VAR_30) {
  case 5: VAR_32 |= VAR_15; break;
  case 6: VAR_32 |= VAR_16; break;
  case 7: VAR_32 |= VAR_17; break;
  case 8: VAR_32 |= VAR_18; break;
  default: VAR_32 |= VAR_18; break;
 }

 switch (VAR_33) {
  case 'o': VAR_32 |= (VAR_21 | VAR_22); break;
  case 'e': VAR_32 |= VAR_21; break;
  case 'n': default: break;
 }

 switch (VAR_31) {
  case 2: VAR_32 |= VAR_19; break;
  case 1: default: break;
 }

 VAR_24->cflag = VAR_32;
}
