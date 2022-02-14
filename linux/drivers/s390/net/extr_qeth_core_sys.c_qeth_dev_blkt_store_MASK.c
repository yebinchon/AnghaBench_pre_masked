
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {scalar_t__ state; int conf_mutex; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct qeth_card *VAR_3,
  const char *VAR_4, size_t VAR_5, int *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (!VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_3->conf_mutex);
 if (VAR_3->state != VAR_0) {
  VAR_10 = -VAR_2;
  goto out;
 }
 VAR_9 = FUNC_2(VAR_4, &VAR_8, 10);
 if (VAR_9 <= VAR_7)
  *VAR_6 = VAR_9;
 else
  VAR_10 = -VAR_1;
out:
 FUNC_1(&VAR_3->conf_mutex);
 return VAR_10 ? VAR_10 : VAR_5;
}
