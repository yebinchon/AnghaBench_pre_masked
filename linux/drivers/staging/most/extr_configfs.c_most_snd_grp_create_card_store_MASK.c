
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_snd_grp {int create_card; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (char*) ;
 struct most_snd_grp* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0,
           const char *VAR_1, size_t VAR_2)
{
 struct most_snd_grp *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 if (VAR_5) {
  VAR_4 = FUNC_1("sound");
  if (VAR_4)
   return VAR_4;
 }
 VAR_3->create_card = VAR_5;
 return VAR_2;
}
