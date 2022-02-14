
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;


 int VAR_0 ;
 struct mei_cl* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mei_cl*,struct mei_device*) ;

struct mei_cl *FUNC_2(struct mei_device *VAR_1)
{
 struct mei_cl *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct mei_cl), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, VAR_1);

 return VAR_2;
}
