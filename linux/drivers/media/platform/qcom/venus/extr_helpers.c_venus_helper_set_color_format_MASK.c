
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {scalar_t__ session_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct venus_inst*,int ,int ) ;

int FUNC_2(struct venus_inst *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_5->session_type == VAR_3)
  VAR_8 = VAR_2;
 else if (VAR_5->session_type == VAR_4)
  VAR_8 = VAR_1;
 else
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6);
 if (!VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_7, VAR_8);
}
