
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ sectype; } ;
struct cifs_ses {scalar_t__ sectype; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct smb_vol*,struct cifs_ses*) ;

__attribute__((used)) static int
FUNC_1(struct smb_vol *VAR_1, struct cifs_ses *VAR_2)
{
 VAR_1->sectype = VAR_2->sectype;


 if (VAR_1->sectype == VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2);
}
