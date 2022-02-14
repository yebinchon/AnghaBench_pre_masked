
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ pg_event; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct mei_device *VAR_2)
{
 return VAR_2->pg_event >= VAR_1 &&
        VAR_2->pg_event <= VAR_0;
}
