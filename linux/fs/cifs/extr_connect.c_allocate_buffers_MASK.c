
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {char* bigbuf; char* smallbuf; scalar_t__ large_buf; } ;


 int FUNC_0 (struct TCP_Server_Info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool
FUNC_6(struct TCP_Server_Info *VAR_1)
{
 if (!VAR_1->bigbuf) {
  VAR_1->bigbuf = (char *)FUNC_1();
  if (!VAR_1->bigbuf) {
   FUNC_2(VAR_0, "No memory for large SMB response\n");
   FUNC_5(3000);

   return 0;
  }
 } else if (VAR_1->large_buf) {

  FUNC_4(VAR_1->bigbuf, 0, FUNC_0(VAR_1));
 }

 if (!VAR_1->smallbuf) {
  VAR_1->smallbuf = (char *)FUNC_3();
  if (!VAR_1->smallbuf) {
   FUNC_2(VAR_0, "No memory for SMB response\n");
   FUNC_5(1000);

   return 0;
  }

 } else {

  FUNC_4(VAR_1->smallbuf, 0, FUNC_0(VAR_1));
 }

 return 1;
}
