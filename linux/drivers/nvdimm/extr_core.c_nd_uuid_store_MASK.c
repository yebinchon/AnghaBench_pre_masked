
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
typedef int u8 ;
struct device {scalar_t__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct device*,int *,char const*,size_t) ;

int FUNC_3(struct device *VAR_3, u8 **VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 u8 VAR_7[16];
 int VAR_8;

 if (VAR_3->driver)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_0(*VAR_4);
 *VAR_4 = FUNC_1(VAR_7, sizeof(VAR_7), VAR_2);
 if (!(*VAR_4))
  return -VAR_1;

 return 0;
}
