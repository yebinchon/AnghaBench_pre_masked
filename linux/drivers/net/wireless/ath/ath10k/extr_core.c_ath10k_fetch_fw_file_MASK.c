
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct ath10k {int dev; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 struct firmware const* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,char*,int) ;
 int FUNC_2 (struct firmware const**,char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static const struct firmware *FUNC_4(struct ath10k *VAR_2,
         const char *VAR_3,
         const char *VAR_4)
{
 char VAR_5[100];
 const struct firmware *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_1);

 if (VAR_3 == ((void*)0))
  VAR_3 = ".";

 FUNC_3(VAR_5, sizeof(VAR_5), "%s/%s", VAR_3, VAR_4);
 VAR_7 = FUNC_2(&VAR_6, VAR_5, VAR_2->dev);
 FUNC_1(VAR_2, VAR_0, "boot fw request '%s': %d\n",
     VAR_5, VAR_7);

 if (VAR_7)
  return FUNC_0(VAR_7);

 return VAR_6;
}
