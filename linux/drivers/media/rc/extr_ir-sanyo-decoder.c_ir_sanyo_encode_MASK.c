
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ir_raw_event**,unsigned int,int *,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(enum rc_proto VAR_2, u32 VAR_3,
      struct ir_raw_event *VAR_4, unsigned int VAR_5)
{
 struct ir_raw_event *VAR_6 = VAR_4;
 int VAR_7;
 u64 VAR_8;

 VAR_8 = ((u64)(FUNC_0(VAR_3 >> 8) & 0xfff8) << (8 + 8 + 13 - 3)) |
       ((u64)(FUNC_0(~VAR_3 >> 8) & 0xfff8) << (8 + 8 + 0 - 3)) |
       ((FUNC_1(VAR_3) & 0xff) << 8) |
       (FUNC_1(~VAR_3) & 0xff);

 VAR_7 = FUNC_2(&VAR_6, VAR_5, &VAR_1, VAR_0, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_6 - VAR_4;
}
