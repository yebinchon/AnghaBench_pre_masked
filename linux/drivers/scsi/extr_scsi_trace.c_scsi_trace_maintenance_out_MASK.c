
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 char* FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,char const*,int ) ;
 int FUNC_4 (struct trace_seq*,int ) ;
 int FUNC_5 (struct trace_seq*,char*) ;

__attribute__((used)) static const char *
FUNC_6(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_0), *VAR_4;
 u32 VAR_5;

 switch (FUNC_0(VAR_1)) {
 case 131:
  VAR_4 = "SET_IDENTIFYING_INFORMATION";
  break;
 case 129:
  VAR_4 = "SET_TARGET_PORT_GROUPS";
  break;
 case 133:
  VAR_4 = "CHANGE_ALIASES";
  break;
 case 130:
  VAR_4 = "SET_PRIORITY";
  break;
 case 128:
  VAR_4 = "SET_TIMESTAMP";
  break;
 case 132:
  VAR_4 = "MANAGEMENT_PROTOCOL_OUT";
  break;
 default:
  FUNC_5(VAR_0, "UNKNOWN");
  goto out;
 }

 VAR_5 = FUNC_1(&VAR_1[6]);

 FUNC_3(VAR_0, "%s alloc_len=%u", VAR_4, VAR_5);

out:
 FUNC_4(VAR_0, 0);

 return VAR_3;
}
