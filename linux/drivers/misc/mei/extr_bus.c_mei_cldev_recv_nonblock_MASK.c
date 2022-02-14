
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_cl_device {struct mei_cl* cl; } ;
struct mei_cl {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mei_cl*,int *,size_t,int ,int ) ;

ssize_t FUNC_1(struct mei_cl_device *VAR_1, u8 *VAR_2,
    size_t VAR_3)
{
 struct mei_cl *VAR_4 = VAR_1->cl;

 return FUNC_0(VAR_4, VAR_2, VAR_3, VAR_0, 0);
}
