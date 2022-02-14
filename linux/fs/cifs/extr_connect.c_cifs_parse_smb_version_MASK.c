
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct smb_vol {int * vals; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int *) ;
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

__attribute__((used)) static int
FUNC_2(char *VAR_17, struct smb_vol *VAR_18, bool VAR_19)
{
 substring_t VAR_20[VAR_0];

 switch (FUNC_1(VAR_17, VAR_2, VAR_20)) {
 case 135:
  FUNC_0(VAR_1, "vers=1.0 (cifs) mount not permitted when legacy dialects disabled\n");
  return 1;
 case 134:
  FUNC_0(VAR_1, "vers=2.0 mount not permitted when legacy dialects disabled\n");
  return 1;

 case 133:
  VAR_18->ops = &VAR_8;
  VAR_18->vals = &VAR_9;
  break;
 case 132:
  VAR_18->ops = &VAR_11;
  VAR_18->vals = &VAR_12;
  break;
 case 131:
  VAR_18->ops = &VAR_11;
  VAR_18->vals = &VAR_10;
  break;
 case 130:
  VAR_18->ops = &VAR_13;
  VAR_18->vals = &VAR_14;
  break;
 case 129:
  VAR_18->ops = &VAR_11;
  VAR_18->vals = &VAR_15;
  break;
 case 128:
  VAR_18->ops = &VAR_11;
  VAR_18->vals = &VAR_16;
  break;
 default:
  FUNC_0(VAR_1, "Unknown vers= option specified: %s\n", VAR_17);
  return 1;
 }
 return 0;
}
