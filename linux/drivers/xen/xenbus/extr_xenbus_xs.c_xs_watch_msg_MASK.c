
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_watch_event {char const* path; char const* token; int list; int * handle; scalar_t__ body; int len; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (struct xs_watch_event*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,char) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct xs_watch_event *VAR_5)
{
 if (FUNC_0(VAR_5->body, VAR_5->len) != 2) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }
 VAR_5->path = (const char *)VAR_5->body;
 VAR_5->token = (const char *)FUNC_6(VAR_5->body, '\0') + 1;

 FUNC_4(&VAR_4);
 VAR_5->handle = FUNC_1(VAR_5->token);
 if (VAR_5->handle != ((void*)0)) {
  FUNC_4(&VAR_2);
  FUNC_3(&VAR_5->list, &VAR_1);
  FUNC_7(&VAR_3);
  FUNC_5(&VAR_2);
 } else
  FUNC_2(VAR_5);
 FUNC_5(&VAR_4);

 return 0;
}
