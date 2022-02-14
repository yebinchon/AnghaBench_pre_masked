
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct user_namespace {int dummy; } ;
struct TYPE_4__ {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct iattr {int ia_valid; int ia_mode; int ia_size; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; int ia_gid; int ia_uid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct user_namespace*,int) ;
 int FUNC_2 (struct user_namespace*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static __be32 *
FUNC_5(__be32 *VAR_8, struct iattr *VAR_9, struct user_namespace *VAR_10)
{
 u32 VAR_11, VAR_12;

 VAR_9->ia_valid = 0;





 if ((VAR_11 = FUNC_3(*VAR_8++)) != (u32)-1 && VAR_11 != 0xffff) {
  VAR_9->ia_valid |= VAR_3;
  VAR_9->ia_mode = VAR_11;
 }
 if ((VAR_11 = FUNC_3(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_uid = FUNC_2(VAR_10, VAR_11);
  if (FUNC_4(VAR_9->ia_uid))
   VAR_9->ia_valid |= VAR_7;
 }
 if ((VAR_11 = FUNC_3(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_gid = FUNC_1(VAR_10, VAR_11);
  if (FUNC_0(VAR_9->ia_gid))
   VAR_9->ia_valid |= VAR_2;
 }
 if ((VAR_11 = FUNC_3(*VAR_8++)) != (u32)-1) {
  VAR_9->ia_valid |= VAR_6;
  VAR_9->ia_size = VAR_11;
 }
 VAR_11 = FUNC_3(*VAR_8++); VAR_12 = FUNC_3(*VAR_8++);
 if (VAR_11 != (u32)-1 && VAR_12 != (u32)-1) {
  VAR_9->ia_valid |= VAR_0 | VAR_1;
  VAR_9->ia_atime.tv_sec = VAR_11;
  VAR_9->ia_atime.tv_nsec = VAR_12 * 1000;
 }
 VAR_11 = FUNC_3(*VAR_8++); VAR_12 = FUNC_3(*VAR_8++);
 if (VAR_11 != (u32)-1 && VAR_12 != (u32)-1) {
  VAR_9->ia_valid |= VAR_4 | VAR_5;
  VAR_9->ia_mtime.tv_sec = VAR_11;
  VAR_9->ia_mtime.tv_nsec = VAR_12 * 1000;
  if (VAR_12 == 1000000)
   VAR_9->ia_valid &= ~(VAR_1|VAR_5);
 }
 return VAR_8;
}
