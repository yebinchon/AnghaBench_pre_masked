
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsg_callback {char const* prefix; void (* callback ) (char const*,char*) ;int list; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsg_callback* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_4,
      void (*VAR_5)(const char *VAR_6, char *VAR_7))
{
 struct smsg_callback *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct smsg_callback), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->prefix = VAR_4;
 VAR_8->len = FUNC_4(VAR_4);
 VAR_8->callback = VAR_5;
 FUNC_2(&VAR_3);
 FUNC_1(&VAR_8->list, &VAR_2);
 FUNC_3(&VAR_3);
 return 0;
}
