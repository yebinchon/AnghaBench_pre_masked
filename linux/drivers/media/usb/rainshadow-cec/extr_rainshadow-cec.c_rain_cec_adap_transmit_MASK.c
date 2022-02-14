
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rain {int write_lock; } ;
struct cec_msg {int len; int* msg; } ;
struct cec_adapter {int dummy; } ;
typedef int hex ;
typedef int cmd ;


 int VAR_0 ;
 struct rain* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_msg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rain*,char*) ;
 int FUNC_5 (char*,int,char*,int,...) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct cec_adapter *VAR_1, u8 VAR_2,
        u32 VAR_3, struct cec_msg *VAR_4)
{
 struct rain *VAR_5 = FUNC_0(VAR_1);
 char VAR_6[2 * VAR_0 + 16];
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_4->len == 1) {
  FUNC_5(VAR_6, sizeof(VAR_6), "x%x", FUNC_1(VAR_4));
 } else {
  char VAR_9[3];

  FUNC_5(VAR_6, sizeof(VAR_6), "x%x %02x ",
    FUNC_1(VAR_4), VAR_4->msg[1]);
  for (VAR_7 = 2; VAR_7 < VAR_4->len; VAR_7++) {
   FUNC_5(VAR_9, sizeof(VAR_9), "%02x", VAR_4->msg[VAR_7]);
   FUNC_6(VAR_6, VAR_9, sizeof(VAR_6));
  }
 }
 FUNC_2(&VAR_5->write_lock);
 VAR_8 = FUNC_4(VAR_5, VAR_6);
 FUNC_3(&VAR_5->write_lock);
 return VAR_8;
}
