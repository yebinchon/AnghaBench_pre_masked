
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int from; } ;
typedef TYPE_1__ substring_t ;
struct nilfs_super_data {int flags; unsigned long long cno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long long*) ;
 int FUNC_1 (int *,int ,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3,
           const substring_t *VAR_4,
           struct nilfs_super_data *VAR_5)
{
 unsigned long long VAR_6;
 const char *VAR_7 = ((void*)0);
 int VAR_8;

 if (!(VAR_5->flags & VAR_2)) {
  VAR_7 = "read-only option is not specified";
  goto parse_error;
 }

 VAR_8 = FUNC_0(VAR_4->from, 0, &VAR_6);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   VAR_7 = "too large checkpoint number";
  else
   VAR_7 = "malformed argument";
  goto parse_error;
 } else if (VAR_6 == 0) {
  VAR_7 = "invalid checkpoint number 0";
  goto parse_error;
 }
 VAR_5->cno = VAR_6;
 return 0;

parse_error:
 FUNC_1(((void*)0), VAR_1, "invalid option \"%s\": %s", VAR_3, VAR_7);
 return 1;
}
