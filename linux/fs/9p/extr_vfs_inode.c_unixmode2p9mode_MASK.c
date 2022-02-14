
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct v9fs_session_info {scalar_t__ nodev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (struct v9fs_session_info*) ;

__attribute__((used)) static u32 FUNC_6(struct v9fs_session_info *VAR_10, umode_t VAR_11)
{
 int VAR_12;
 VAR_12 = VAR_11 & 0777;
 if (FUNC_2(VAR_11))
  VAR_12 |= VAR_1;
 if (FUNC_5(VAR_10)) {
  if (VAR_10->nodev == 0) {
   if (FUNC_4(VAR_11))
    VAR_12 |= VAR_6;
   if (FUNC_3(VAR_11))
    VAR_12 |= VAR_2;
   if (FUNC_0(VAR_11))
    VAR_12 |= VAR_0;
   if (FUNC_1(VAR_11))
    VAR_12 |= VAR_0;
  }

  if ((VAR_11 & VAR_8) == VAR_8)
   VAR_12 |= VAR_4;
  if ((VAR_11 & VAR_7) == VAR_7)
   VAR_12 |= VAR_3;
  if ((VAR_11 & VAR_9) == VAR_9)
   VAR_12 |= VAR_5;
 }
 return VAR_12;
}
