
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_io_request {int raid_bypass; int * error_info; scalar_t__ status; int * scmd; } ;



__attribute__((used)) static inline void FUNC_0(struct pqi_io_request *VAR_0)
{
 VAR_0->scmd = ((void*)0);
 VAR_0->status = 0;
 VAR_0->error_info = ((void*)0);
 VAR_0->raid_bypass = 0;
}
