
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int prepath; } ;
struct cifs_tcon {int treeName; } ;
struct cifs_sb_info {int dummy; } ;


 char FUNC_0 (struct cifs_sb_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char) ;
 char* FUNC_2 (int,int ) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

char *
FUNC_7(struct smb_vol *VAR_2, struct cifs_sb_info *VAR_3,
   struct cifs_tcon *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2->prepath ? FUNC_5(VAR_2->prepath) + 1 : 0;
 int VAR_7;
 char *VAR_8 = ((void*)0);


 if (VAR_6 == 0) {
  VAR_8 = FUNC_3(1, VAR_0);
  return VAR_8;
 }

 if (VAR_5)
  VAR_7 = FUNC_6(VAR_4->treeName, VAR_1 + 1);
 else
  VAR_7 = 0;

 VAR_8 = FUNC_2(VAR_7 + VAR_6 + 1, VAR_0);
 if (VAR_8 == ((void*)0))
  return VAR_8;

 if (VAR_7)
  FUNC_4(VAR_8, VAR_4->treeName, VAR_7);
 VAR_8[VAR_7] = FUNC_0(VAR_3);
 FUNC_4(VAR_8 + VAR_7 + 1, VAR_2->prepath, VAR_6);
 FUNC_1(VAR_8, FUNC_0(VAR_3));
 return VAR_8;
}
