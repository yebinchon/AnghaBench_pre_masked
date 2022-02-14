
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fw_event_work* FUNC_1 (int,int ) ;

__attribute__((used)) static struct fw_event_work *FUNC_2(int VAR_1)
{
 struct fw_event_work *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2) + VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->refcount);
 return VAR_2;
}
