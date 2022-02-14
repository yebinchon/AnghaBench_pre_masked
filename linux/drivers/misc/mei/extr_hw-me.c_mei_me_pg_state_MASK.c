
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_hw {int pg_state; } ;
struct mei_device {int dummy; } ;
typedef enum mei_pg_state { ____Placeholder_mei_pg_state } mei_pg_state ;


 struct mei_me_hw* FUNC_0 (struct mei_device*) ;

__attribute__((used)) static inline enum mei_pg_state FUNC_1(struct mei_device *VAR_0)
{
 struct mei_me_hw *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pg_state;
}
