
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct p9_wstat {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_1(struct v9fs_session_info *VAR_7,
         struct p9_wstat *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8->mode;

 VAR_9 = VAR_10 & VAR_3;
 if (FUNC_0(VAR_7)) {
  if ((VAR_10 & VAR_1) == VAR_1)
   VAR_9 |= VAR_5;

  if ((VAR_10 & VAR_0) == VAR_0)
   VAR_9 |= VAR_4;

  if ((VAR_10 & VAR_2) == VAR_2)
   VAR_9 |= VAR_6;
 }
 return VAR_9;
}
