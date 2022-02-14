
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_txe_hw {scalar_t__ aliveness; } ;
struct mei_device {int dummy; } ;
typedef enum mei_pg_state { ____Placeholder_mei_pg_state } mei_pg_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct mei_txe_hw* FUNC_0 (struct mei_device*) ;

__attribute__((used)) static inline enum mei_pg_state FUNC_1(struct mei_device *VAR_2)
{
 struct mei_txe_hw *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->aliveness ? VAR_0 : VAR_1;
}
