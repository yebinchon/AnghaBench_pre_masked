
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cifs_dirent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct cifs_dirent*,void const*) ;
 int FUNC_2 (struct cifs_dirent*,void const*) ;
 int FUNC_3 (struct cifs_dirent*,void const*) ;
 int FUNC_4 (struct cifs_dirent*,void const*) ;
 int FUNC_5 (struct cifs_dirent*,void const*) ;
 int FUNC_6 (struct cifs_dirent*,void const*,int) ;
 int FUNC_7 (struct cifs_dirent*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct cifs_dirent *VAR_2, const void *VAR_3,
  u16 VAR_4, bool VAR_5)
{
 FUNC_7(VAR_2, 0, sizeof(*VAR_2));

 switch (VAR_4) {
 case 128:
  FUNC_6(VAR_2, VAR_3, VAR_5);
  break;
 case 132:
  FUNC_2(VAR_2, VAR_3);
  break;
 case 131:
  FUNC_3(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_4(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_1(VAR_2, VAR_3);
  break;
 case 129:
  FUNC_5(VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_1, "Unknown findfirst level %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
