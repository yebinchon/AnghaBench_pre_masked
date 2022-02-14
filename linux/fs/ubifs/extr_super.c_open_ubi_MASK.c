
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int dummy; } ;


 int VAR_0 ;
 struct ubi_volume_desc* FUNC_0 (int ) ;
 int FUNC_1 (struct ubi_volume_desc*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,char**,int ) ;
 struct ubi_volume_desc* FUNC_4 (int,int,int) ;
 struct ubi_volume_desc* FUNC_5 (int,char const*,int) ;
 struct ubi_volume_desc* FUNC_6 (char const*,int) ;

__attribute__((used)) static struct ubi_volume_desc *FUNC_7(const char *VAR_1, int VAR_2)
{
 struct ubi_volume_desc *VAR_3;
 int VAR_4, VAR_5;
 char *VAR_6;

 if (!VAR_1 || !*VAR_1)
  return FUNC_0(-VAR_0);


 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (!FUNC_1(VAR_3))
  return VAR_3;


 if (VAR_1[0] != 'u' || VAR_1[1] != 'b' || VAR_1[2] != 'i')
  return FUNC_0(-VAR_0);


 if ((VAR_1[3] == ':' || VAR_1[3] == '!') && VAR_1[4] != '\0')
  return FUNC_5(0, VAR_1 + 4, VAR_2);

 if (!FUNC_2(VAR_1[3]))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_1 + 3, &VAR_6, 0);


 if (*VAR_6 == '\0')
  return FUNC_4(0, VAR_4, VAR_2);


 if (*VAR_6 == '_' && FUNC_2(VAR_6[1])) {
  VAR_5 = FUNC_3(VAR_6 + 1, &VAR_6, 0);
  if (*VAR_6 != '\0')
   return FUNC_0(-VAR_0);
  return FUNC_4(VAR_4, VAR_5, VAR_2);
 }


 if ((*VAR_6 == ':' || *VAR_6 == '!') && VAR_6[1] != '\0')
  return FUNC_5(VAR_4, ++VAR_6, VAR_2);

 return FUNC_0(-VAR_0);
}
