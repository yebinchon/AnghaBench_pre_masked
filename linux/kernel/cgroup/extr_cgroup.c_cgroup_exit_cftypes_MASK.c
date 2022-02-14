
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cftype {char* name; scalar_t__ max_write_len; int flags; int * ss; int * kf_ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cftype *VAR_3)
{
 struct cftype *VAR_4;

 for (VAR_4 = VAR_3; VAR_4->name[0] != '\0'; VAR_4++) {

  if (VAR_4->max_write_len && VAR_4->max_write_len != VAR_0)
   FUNC_0(VAR_4->kf_ops);
  VAR_4->kf_ops = ((void*)0);
  VAR_4->ss = ((void*)0);


  VAR_4->flags &= ~(VAR_2 | VAR_1);
 }
}
