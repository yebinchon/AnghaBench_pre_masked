
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int proc_net; } ;
struct file {int dummy; } ;
struct dir_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct file*,struct dir_context*,int ) ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct dir_context *VAR_2)
{
 int VAR_3;
 struct net *VAR_4;

 VAR_3 = -VAR_0;
 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_4 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4->proc_net);
  FUNC_3(VAR_4);
 }
 return VAR_3;
}
