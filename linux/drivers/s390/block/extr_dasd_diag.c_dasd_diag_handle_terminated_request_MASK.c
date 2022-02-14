
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ retries; int status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dasd_ccw_req *VAR_2)
{
 if (VAR_2->retries < 0)
  VAR_2->status = VAR_0;
 else
  VAR_2->status = VAR_1;
}
