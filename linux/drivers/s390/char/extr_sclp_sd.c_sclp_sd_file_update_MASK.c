
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_sd_data {int dsize_bytes; } ;
struct sclp_sd_file {int kobj; int data_mutex; struct sclp_sd_data data; int di; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (struct sclp_sd_data*) ;
 int FUNC_6 (struct sclp_sd_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct sclp_sd_file *VAR_2)
{
 const char *VAR_3 = FUNC_0(&VAR_2->kobj);
 struct sclp_sd_data VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_4, VAR_2->di);
 if (VAR_5) {
  if (VAR_5 == -VAR_0) {
   FUNC_4("No data is available for the %s data entity\n",
     VAR_3);
  }
  return VAR_5;
 }

 FUNC_2(&VAR_2->data_mutex);
 FUNC_5(&VAR_2->data);
 VAR_2->data = VAR_4;
 FUNC_3(&VAR_2->data_mutex);

 FUNC_4("A %zu-byte %s data entity was retrieved\n", VAR_4.dsize_bytes,
  VAR_3);
 FUNC_1(&VAR_2->kobj, VAR_1);

 return 0;
}
