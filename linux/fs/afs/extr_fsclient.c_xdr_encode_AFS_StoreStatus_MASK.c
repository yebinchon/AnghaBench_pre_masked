
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tv_sec; } ;
struct iattr {int ia_valid; int ia_mode; int ia_gid; int ia_uid; TYPE_1__ ia_mtime; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(__be32 **VAR_10, struct iattr *VAR_11)
{
 __be32 *VAR_12 = *VAR_10;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 VAR_13 = 0;
 if (VAR_11->ia_valid & VAR_6) {
  VAR_13 |= VAR_2;
  VAR_14 = VAR_11->ia_mtime.tv_sec;
 }

 if (VAR_11->ia_valid & VAR_7) {
  VAR_13 |= VAR_3;
  VAR_15 = FUNC_1(&VAR_9, VAR_11->ia_uid);
 }

 if (VAR_11->ia_valid & VAR_4) {
  VAR_13 |= VAR_0;
  VAR_16 = FUNC_0(&VAR_9, VAR_11->ia_gid);
 }

 if (VAR_11->ia_valid & VAR_5) {
  VAR_13 |= VAR_1;
  VAR_17 = VAR_11->ia_mode & VAR_8;
 }

 *VAR_12++ = FUNC_2(VAR_13);
 *VAR_12++ = FUNC_2(VAR_14);
 *VAR_12++ = FUNC_2(VAR_15);
 *VAR_12++ = FUNC_2(VAR_16);
 *VAR_12++ = FUNC_2(VAR_17);
 *VAR_12++ = 0;
 *VAR_10 = VAR_12;
}
