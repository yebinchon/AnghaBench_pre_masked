
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int substring_t ;
struct fcloop_ctrl_options {int mask; int roles; int fcaddr; void* lpwwpn; void* lpwwnn; void* wwpn; void* wwnn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (int *,void**) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int
FUNC_8(struct fcloop_ctrl_options *VAR_5,
  const char *VAR_6)
{
 substring_t VAR_7[VAR_3];
 char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12 = 0;
 u64 VAR_13;

 VAR_8 = VAR_9 = FUNC_1(VAR_6, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 while ((VAR_10 = FUNC_7(&VAR_9, ",\n")) != ((void*)0)) {
  if (!*VAR_10)
   continue;

  VAR_11 = FUNC_4(VAR_10, VAR_4, VAR_7);
  VAR_5->mask |= VAR_11;
  switch (VAR_11) {
  case 129:
   if (FUNC_5(VAR_7, &VAR_13)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->wwnn = VAR_13;
   break;
  case 128:
   if (FUNC_5(VAR_7, &VAR_13)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->wwpn = VAR_13;
   break;
  case 130:
   if (FUNC_3(VAR_7, &VAR_11)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->roles = VAR_11;
   break;
  case 133:
   if (FUNC_2(VAR_7, &VAR_11)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->fcaddr = VAR_11;
   break;
  case 132:
   if (FUNC_5(VAR_7, &VAR_13)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->lpwwnn = VAR_13;
   break;
  case 131:
   if (FUNC_5(VAR_7, &VAR_13)) {
    VAR_12 = -VAR_0;
    goto out_free_options;
   }
   VAR_5->lpwwpn = VAR_13;
   break;
  default:
   FUNC_6("unknown parameter or missing value '%s'\n", VAR_10);
   VAR_12 = -VAR_0;
   goto out_free_options;
  }
 }

out_free_options:
 FUNC_0(VAR_8);
 return VAR_12;
}
