
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {void** msg_array; } ;
struct mon_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mon_private*) ;

__attribute__((used)) static struct mon_private *FUNC_2(void)
{
 int VAR_2;
 struct mon_private *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct mon_private), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3->msg_array[VAR_2] = FUNC_0(sizeof(struct mon_msg),
          VAR_0);
  if (!VAR_3->msg_array[VAR_2]) {
   FUNC_1(VAR_3);
   return ((void*)0);
  }
 }
 return VAR_3;
}
