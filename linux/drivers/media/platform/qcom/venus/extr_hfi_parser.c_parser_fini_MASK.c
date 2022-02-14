
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_inst {scalar_t__ session_type; TYPE_1__* core; } ;
struct venus_caps {scalar_t__ codec; scalar_t__ domain; int valid; } ;
struct TYPE_2__ {struct venus_caps* caps; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct venus_inst *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct venus_caps *VAR_4, *VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 if (!VAR_1 || !FUNC_0(VAR_1->core))
  return;

 VAR_4 = VAR_1->core->caps;
 VAR_7 = VAR_1->session_type;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_4[VAR_6];
  if (VAR_5->codec & VAR_2 && VAR_5->domain == VAR_7)
   VAR_5->valid = 1;
 }
}
