
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ir_raw_event**,unsigned int,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(enum rc_proto VAR_2, u32 VAR_3,
    struct ir_raw_event *VAR_4, unsigned int VAR_5)
{
 struct ir_raw_event *VAR_6 = VAR_4;
 int VAR_7;
 u32 VAR_8 = (FUNC_0((VAR_3 >> 8) & 0xff) << 8) |
    (FUNC_0((VAR_3 >> 0) & 0xff) << 0);

 VAR_7 = FUNC_1(&VAR_6, VAR_5, &VAR_1, VAR_0, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_6 - VAR_4;
}
