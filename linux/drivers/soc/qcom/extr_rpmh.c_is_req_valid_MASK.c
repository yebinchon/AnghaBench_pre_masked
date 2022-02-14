
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_req {scalar_t__ sleep_val; scalar_t__ wake_val; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cache_req *VAR_1)
{
 return (VAR_1->sleep_val != VAR_0 &&
  VAR_1->wake_val != VAR_0 &&
  VAR_1->sleep_val != VAR_1->wake_val);
}
