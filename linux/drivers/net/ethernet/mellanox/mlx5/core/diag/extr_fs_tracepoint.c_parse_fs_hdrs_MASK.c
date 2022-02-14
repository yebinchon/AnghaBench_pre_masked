
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_seq*,int const*,int const*) ;
 int FUNC_1 (struct trace_seq*,int const*,int const*) ;
 char* FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*) ;
 int FUNC_4 (struct trace_seq*,int ) ;

const char *FUNC_5(struct trace_seq *VAR_3,
     u8 VAR_4,
     const u32 *VAR_5,
     const u32 *VAR_6,
     const u32 *VAR_7,
     const u32 *VAR_8,
     const u32 *VAR_9,
     const u32 *VAR_10)
{
 const char *VAR_11 = FUNC_2(VAR_3);

 if (VAR_4 &
     1 << VAR_2) {
  FUNC_3(VAR_3, "[outer] ");
  FUNC_0(VAR_3, VAR_5, VAR_8);
 }

 if (VAR_4 &
     1 << VAR_1) {
  FUNC_3(VAR_3, "[misc] ");
  FUNC_1(VAR_3, VAR_6, VAR_9);
 }
 if (VAR_4 &
     1 << VAR_0) {
  FUNC_3(VAR_3, "[inner] ");
  FUNC_0(VAR_3, VAR_7, VAR_10);
 }
 FUNC_4(VAR_3, 0);
 return VAR_11;
}
