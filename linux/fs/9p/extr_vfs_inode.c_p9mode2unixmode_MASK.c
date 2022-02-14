
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct v9fs_session_info {scalar_t__ nodev; } ;
struct p9_wstat {int mode; int extension; } ;
typedef int ext ;
typedef scalar_t__ dev_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,char,int ) ;
 int FUNC_2 (struct v9fs_session_info*,struct p9_wstat*) ;
 int FUNC_3 (char*,char*,char*,int*,int*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (struct v9fs_session_info*) ;

__attribute__((used)) static umode_t FUNC_6(struct v9fs_session_info *VAR_13,
          struct p9_wstat *VAR_14, dev_t *VAR_15)
{
 int VAR_16;
 u32 VAR_17 = VAR_14->mode;

 *VAR_15 = 0;
 VAR_16 = FUNC_2(VAR_13, VAR_14);

 if ((VAR_17 & VAR_2) == VAR_2)
  VAR_16 |= VAR_8;
 else if ((VAR_17 & VAR_5) && (FUNC_5(VAR_13)))
  VAR_16 |= VAR_10;
 else if ((VAR_17 & VAR_4) && (FUNC_5(VAR_13))
   && (VAR_13->nodev == 0))
  VAR_16 |= VAR_12;
 else if ((VAR_17 & VAR_3) && (FUNC_5(VAR_13))
   && (VAR_13->nodev == 0))
  VAR_16 |= VAR_9;
 else if ((VAR_17 & VAR_1) && (FUNC_5(VAR_13))
   && (VAR_13->nodev == 0)) {
  char VAR_18 = 0, VAR_19[32];
  int VAR_20 = -1, VAR_21 = -1;

  FUNC_4(VAR_19, VAR_14->extension, sizeof(VAR_19));
  FUNC_3(VAR_19, "%c %i %i", &VAR_18, &VAR_20, &VAR_21);
  switch (VAR_18) {
  case 'c':
   VAR_16 |= VAR_7;
   break;
  case 'b':
   VAR_16 |= VAR_6;
   break;
  default:
   FUNC_1(VAR_0, "Unknown special type %c %s\n",
     VAR_18, VAR_14->extension);
  };
  *VAR_15 = FUNC_0(VAR_20, VAR_21);
 } else
  VAR_16 |= VAR_11;

 return VAR_16;
}
