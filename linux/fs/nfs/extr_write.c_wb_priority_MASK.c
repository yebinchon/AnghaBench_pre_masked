
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct writeback_control *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->sync_mode == VAR_1)
  VAR_3 = VAR_0;
 return VAR_3;
}
