
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct bus_id_priv {int status; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct bus_id_priv*) ;
 struct bus_id_priv* FUNC_2 (char const*) ;
 int FUNC_3 (struct bus_id_priv*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device_driver *VAR_4, const char *VAR_5,
     size_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct bus_id_priv *VAR_9;


 VAR_8 = FUNC_4(VAR_5, VAR_0);

 if (!(VAR_8 < VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_5);
 if (!VAR_9)
  return -VAR_2;


 VAR_9->status = VAR_3;

 FUNC_3(VAR_9);

 VAR_7 = FUNC_1((char *) VAR_5, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_0((char *) VAR_5);

 return VAR_6;
}
