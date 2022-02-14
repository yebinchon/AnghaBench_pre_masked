
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct trace_seq {int dummy; } ;


 int FUNC_0 (unsigned char*) ;

 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 char* FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,char const*,unsigned long long,int ,unsigned char,unsigned char) ;
 int FUNC_5 (struct trace_seq*,int ) ;
 int FUNC_6 (struct trace_seq*,char*) ;

__attribute__((used)) static const char *
FUNC_7(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_0), *VAR_4;
 u64 VAR_5;
 u32 VAR_6;
 u8 VAR_7;

 switch (FUNC_0(VAR_1)) {
 case 128:
  VAR_4 = "REPORT_ZONES";
  break;
 default:
  FUNC_6(VAR_0, "UNKNOWN");
  goto out;
 }

 VAR_5 = FUNC_2(&VAR_1[2]);
 VAR_6 = FUNC_1(&VAR_1[10]);
 VAR_7 = VAR_1[14] & 0x3f;

 FUNC_4(VAR_0, "%s zone=%llu alloc_len=%u options=%u partial=%u",
    VAR_4, (unsigned long long)VAR_5, VAR_6,
    VAR_7, (VAR_1[14] >> 7) & 1);

out:
 FUNC_5(VAR_0, 0);

 return VAR_3;
}
