
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_card {int conf_mutex; } ;
typedef int ssize_t ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qeth_card*,int,int *,int ,int) ;
 int FUNC_3 (char const*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_4(const char *VAR_1, size_t VAR_2,
    struct qeth_card *VAR_3, enum qeth_prot_versions VAR_4)
{
 u8 VAR_5[16];
 int VAR_6;

 FUNC_0(&VAR_3->conf_mutex);
 VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_2(VAR_3, 0, VAR_5,
           VAR_0, VAR_4);
 FUNC_1(&VAR_3->conf_mutex);
 return VAR_6 ? VAR_6 : VAR_2;
}
