
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw2100_priv {int config; int essid_len; scalar_t__ essid; } ;
struct host_command {int host_command_length; scalar_t__ host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ipw2100_priv *VAR_4, char *VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_6(VAR_6, VAR_2);
 struct host_command VAR_9 = {
  .host_command = VAR_3,
  .host_command_sequence = 0,
  .host_command_length = VAR_8
 };
 int VAR_10;

 FUNC_0("SSID: '%*pE'\n", VAR_8, VAR_5);

 if (VAR_8)
  FUNC_4(VAR_9.host_command_parameters, VAR_5, VAR_8);

 if (!VAR_7) {
  VAR_10 = FUNC_1(VAR_4);
  if (VAR_10)
   return VAR_10;
 }



 if (!VAR_8 && !(VAR_4->config & VAR_0)) {
  int VAR_11;
  u8 *VAR_12 = (u8 *) VAR_9.host_command_parameters;
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
   VAR_12[VAR_11] = 0x18 + VAR_11;
  VAR_9.host_command_length = VAR_2;
 }




 VAR_10 = FUNC_3(VAR_4, &VAR_9);
 if (!VAR_10) {
  FUNC_5(VAR_4->essid + VAR_8, 0, VAR_2 - VAR_8);
  FUNC_4(VAR_4->essid, VAR_5, VAR_8);
  VAR_4->essid_len = VAR_8;
 }

 if (!VAR_7) {
  if (FUNC_2(VAR_4))
   VAR_10 = -VAR_1;
 }

 return VAR_10;
}
