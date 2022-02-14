
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_msgseg {struct msg_msgseg* next; } ;
struct msg_msg {struct msg_msgseg* next; int * security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct msg_msg*) ;
 void* FUNC_2 (int,int ) ;
 size_t FUNC_3 (size_t,int ) ;

__attribute__((used)) static struct msg_msg *FUNC_4(size_t VAR_3)
{
 struct msg_msg *VAR_4;
 struct msg_msgseg **VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_0);
 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_6, VAR_2);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->next = ((void*)0);
 VAR_4->security = ((void*)0);

 VAR_3 -= VAR_6;
 VAR_5 = &VAR_4->next;
 while (VAR_3 > 0) {
  struct msg_msgseg *VAR_7;

  FUNC_0();

  VAR_6 = FUNC_3(VAR_3, VAR_1);
  VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_6, VAR_2);
  if (VAR_7 == ((void*)0))
   goto out_err;
  *VAR_5 = VAR_7;
  VAR_7->next = ((void*)0);
  VAR_5 = &VAR_7->next;
  VAR_3 -= VAR_6;
 }

 return VAR_4;

out_err:
 FUNC_1(VAR_4);
 return ((void*)0);
}
