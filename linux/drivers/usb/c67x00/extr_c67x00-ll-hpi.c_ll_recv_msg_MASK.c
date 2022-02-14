
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int msg_received; } ;
struct TYPE_4__ {TYPE_1__ lcp; } ;
struct c67x00_device {TYPE_2__ hpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct c67x00_device *VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_1(&VAR_2->hpi.lcp.msg_received, 5 * VAR_1);
 FUNC_0(!VAR_3);

 return (VAR_3 == 0) ? -VAR_0 : 0;
}
