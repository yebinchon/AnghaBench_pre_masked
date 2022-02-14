
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct kiocb {int ki_cookie; TYPE_2__* ki_filp; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {int host; } ;


 struct block_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct request_queue* FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct request_queue*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct kiocb *VAR_0, bool VAR_1)
{
 struct block_device *VAR_2 = FUNC_0(VAR_0->ki_filp->f_mapping->host);
 struct request_queue *VAR_3 = FUNC_2(VAR_2);

 return FUNC_3(VAR_3, FUNC_1(VAR_0->ki_cookie), VAR_1);
}
