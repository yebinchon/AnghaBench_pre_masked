
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct trace_seq {int dummy; } ;


 int FUNC_0 (unsigned char*) ;




 scalar_t__ FUNC_1 (unsigned char*) ;
 char* FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,char const*,unsigned long long,unsigned char) ;
 int FUNC_4 (struct trace_seq*,int ) ;
 int FUNC_5 (struct trace_seq*,char*) ;

__attribute__((used)) static const char *
FUNC_6(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_0), *VAR_4;
 u64 VAR_5;

 switch (FUNC_0(VAR_1)) {
 case 131:
  VAR_4 = "CLOSE_ZONE";
  break;
 case 130:
  VAR_4 = "FINISH_ZONE";
  break;
 case 129:
  VAR_4 = "OPEN_ZONE";
  break;
 case 128:
  VAR_4 = "RESET_WRITE_POINTER";
  break;
 default:
  FUNC_5(VAR_0, "UNKNOWN");
  goto out;
 }

 VAR_5 = FUNC_1(&VAR_1[2]);

 FUNC_3(VAR_0, "%s zone=%llu all=%u", VAR_4,
    (unsigned long long)VAR_5, VAR_1[14] & 1);

out:
 FUNC_4(VAR_0, 0);

 return VAR_3;
}
