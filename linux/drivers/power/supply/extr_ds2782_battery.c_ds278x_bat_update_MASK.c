
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds278x_info {int status; int capacity; int battery; } ;


 int FUNC_0 (struct ds278x_info*,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ds278x_info *VAR_0)
{
 int VAR_1 = VAR_0->status;
 int VAR_2 = VAR_0->capacity;

 FUNC_0(VAR_0, &VAR_0->status);

 if ((VAR_1 != VAR_0->status) || (VAR_2 != VAR_0->capacity))
  FUNC_1(VAR_0->battery);
}
