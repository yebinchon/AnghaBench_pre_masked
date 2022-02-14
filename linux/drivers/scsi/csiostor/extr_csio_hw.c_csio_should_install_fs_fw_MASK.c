
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct csio_hw*,char*,int ,int ,int ,int ,char const*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct csio_hw *VAR_0, int VAR_1,
    int VAR_2, int VAR_3)
{
 const char *VAR_4;

 if (!VAR_1) {
  VAR_4 = "incompatible or unusable";
  goto install;
 }

 if (VAR_2 > VAR_3) {
  VAR_4 = "older than the version supported with this driver";
  goto install;
 }

 return 0;

install:
 FUNC_4(VAR_0, "firmware on card (%u.%u.%u.%u) is %s, "
  "installing firmware %u.%u.%u.%u on card.\n",
  FUNC_1(VAR_3), FUNC_3(VAR_3),
  FUNC_2(VAR_3), FUNC_0(VAR_3), VAR_4,
  FUNC_1(VAR_2), FUNC_3(VAR_2),
  FUNC_2(VAR_2), FUNC_0(VAR_2));

 return 1;
}
