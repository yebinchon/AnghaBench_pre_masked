
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_remote_node_context {int * user_cookie; int (* user_callback ) (int *) ;} ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(
 struct sci_remote_node_context *VAR_0)
{
 if (VAR_0->user_callback != ((void*)0)) {
  (*VAR_0->user_callback)(VAR_0->user_cookie);

  VAR_0->user_callback = ((void*)0);
  VAR_0->user_cookie = ((void*)0);
 }
}
