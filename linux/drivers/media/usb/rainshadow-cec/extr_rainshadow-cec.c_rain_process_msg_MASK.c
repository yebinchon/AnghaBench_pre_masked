
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rain {char* cmd; int adap; } ;
struct cec_msg {scalar_t__ len; scalar_t__ msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct cec_msg*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*,int) ;
 int FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static void FUNC_5(struct rain *VAR_4)
{
 struct cec_msg VAR_5 = {};
 const char *VAR_6 = VAR_4->cmd + 3;
 int VAR_7 = -1;

 for (; *VAR_6; VAR_6++) {
  if (!FUNC_4(*VAR_6))
   continue;
  if (FUNC_4(VAR_6[0]) && FUNC_4(VAR_6[1])) {
   if (VAR_5.len == VAR_0)
    break;
   if (FUNC_2(VAR_5.msg + VAR_5.len, VAR_6, 1))
    continue;
   VAR_5.len++;
   VAR_6++;
   continue;
  }
  if (!VAR_6[1])
   VAR_7 = FUNC_3(VAR_6[0]);
  break;
 }

 if (VAR_4->cmd[0] == 'R') {
  if (VAR_7 == 1 || VAR_7 == 2)
   FUNC_0(VAR_4->adap, &VAR_5);
  return;
 }

 switch (VAR_7) {
 case 1:
  FUNC_1(VAR_4->adap, VAR_3);
  break;
 case 2:
  FUNC_1(VAR_4->adap, VAR_2);
  break;
 default:
  FUNC_1(VAR_4->adap, VAR_1);
  break;
 }
}
