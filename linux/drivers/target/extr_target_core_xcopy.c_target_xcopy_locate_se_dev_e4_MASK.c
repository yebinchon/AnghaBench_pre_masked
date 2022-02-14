
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcopy_dev_search_info {unsigned char const* dev_wwn; struct se_device* found_dev; } ;
struct se_device {int dummy; } ;
typedef int info ;


 int VAR_0 ;
 int FUNC_0 (struct xcopy_dev_search_info*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct xcopy_dev_search_info*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const unsigned char *VAR_2,
     struct se_device **VAR_3)
{
 struct xcopy_dev_search_info VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.dev_wwn = VAR_2;

 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_5 == 1) {
  *VAR_3 = VAR_4.found_dev;
  return 0;
 } else {
  FUNC_1("Unable to locate 0xe4 descriptor for EXTENDED_COPY\n");
  return -VAR_0;
 }
}
