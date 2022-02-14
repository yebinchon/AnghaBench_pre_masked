
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4, 0, VAR_0, "rpmsg");
 if (VAR_5 < 0) {
  FUNC_5("rpmsg: failed to allocate char dev region\n");
  return VAR_5;
 }

 VAR_3 = FUNC_3(VAR_1, "rpmsg");
 if (FUNC_0(VAR_3)) {
  FUNC_5("failed to create rpmsg class\n");
  FUNC_7(VAR_4, VAR_0);
  return FUNC_1(VAR_3);
 }

 VAR_5 = FUNC_6(&VAR_2);
 if (VAR_5 < 0) {
  FUNC_5("rpmsgchr: failed to register rpmsg driver\n");
  FUNC_4(VAR_3);
  FUNC_7(VAR_4, VAR_0);
 }

 return VAR_5;
}
