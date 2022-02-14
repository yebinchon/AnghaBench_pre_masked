
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int ioasc; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {int job_step; TYPE_3__ s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ipr_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->s.ioasa.hdr.ioasc);

 if (VAR_4 == VAR_0) {
  VAR_3->job_step = VAR_2;
  return VAR_1;
 }

 return FUNC_1(VAR_3);
}
