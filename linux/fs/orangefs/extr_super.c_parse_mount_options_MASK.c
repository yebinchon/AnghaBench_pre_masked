
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {int s_flags; } ;
struct orangefs_sb_info_s {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct orangefs_sb_info_s* FUNC_0 (struct super_block*) ;



 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_6, char *VAR_7,
  int VAR_8)
{
 struct orangefs_sb_info_s *VAR_9 = FUNC_0(VAR_6);
 substring_t VAR_10[VAR_1];
 char *VAR_11;





 VAR_6->s_flags &= ~VAR_4;
 VAR_9->flags &= ~VAR_2;
 VAR_9->flags &= ~VAR_3;

 while ((VAR_11 = FUNC_3(&VAR_7, ",")) != ((void*)0)) {
  int VAR_12;

  if (!*VAR_11)
   continue;

  VAR_12 = FUNC_2(VAR_11, VAR_5, VAR_10);
  switch (VAR_12) {
  case 130:
   VAR_6->s_flags |= VAR_4;
   break;
  case 129:
   VAR_9->flags |= VAR_2;
   break;
  case 128:
   VAR_9->flags |= VAR_3;
   break;
  default:
   goto fail;
  }
 }

 return 0;
fail:
 if (!VAR_8)
  FUNC_1("Error: mount option [%s] is not supported.\n", VAR_11);
 return -VAR_0;
}
