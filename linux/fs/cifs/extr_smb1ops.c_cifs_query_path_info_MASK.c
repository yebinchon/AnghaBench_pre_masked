
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int local_nls; } ;
struct cifs_open_parms {char const* path; int reconnect; struct cifs_fid* fid; int disposition; scalar_t__ create_options; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_fid {int netfid; } ;
struct TYPE_5__ {int Attributes; } ;
typedef TYPE_1__ FILE_ALL_INFO ;


 int VAR_0 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,char const*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (unsigned int const,struct cifs_open_parms*,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned int const,struct cifs_tcon*,char const*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
       struct cifs_sb_info *VAR_7, const char *VAR_8,
       FILE_ALL_INFO *VAR_9, bool *VAR_10, bool *VAR_11)
{
 int VAR_12;

 *VAR_11 = 0;


 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_8, VAR_9, 0 ,
         VAR_7->local_nls, FUNC_4(VAR_7));





 if ((VAR_12 == -VAR_2) || (VAR_12 == -VAR_1)) {
  VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9,
      VAR_7->local_nls,
      FUNC_4(VAR_7));
  *VAR_10 = 1;
 }

 if (!VAR_12 && (FUNC_5(VAR_9->Attributes) & VAR_0)) {
  int VAR_13;
  int VAR_14 = 0;
  struct cifs_fid VAR_15;
  struct cifs_open_parms VAR_16;

  VAR_16.tcon = VAR_6;
  VAR_16.cifs_sb = VAR_7;
  VAR_16.desired_access = VAR_4;
  VAR_16.create_options = 0;
  VAR_16.disposition = VAR_3;
  VAR_16.path = VAR_8;
  VAR_16.fid = &VAR_15;
  VAR_16.reconnect = 0;


  VAR_13 = FUNC_2(VAR_5, &VAR_16, &VAR_14, ((void*)0));
  if (VAR_13 == -VAR_2)
   *VAR_11 = 1;
  else if (VAR_13 == 0)
   FUNC_0(VAR_5, VAR_6, VAR_15.netfid);
 }

 return VAR_12;
}
