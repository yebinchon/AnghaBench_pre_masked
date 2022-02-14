
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ min_numbuffers; scalar_t__ min_bufsize; scalar_t__ device_bufsize; scalar_t__ numbuffers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct vpfe_device* FUNC_0 (int,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct vpfe_device *FUNC_1(void)
{
 struct vpfe_device *VAR_4;


 if ((VAR_3 > 0) &&
     (VAR_3 < VAR_2.min_numbuffers))
  VAR_3 = VAR_2.min_numbuffers;





 if (VAR_1 < VAR_2.min_bufsize)
  VAR_1 = VAR_2.min_bufsize;

 VAR_2.numbuffers = VAR_3;

 if (VAR_3)
  VAR_2.device_bufsize = VAR_1;


 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);

 return VAR_4;
}
