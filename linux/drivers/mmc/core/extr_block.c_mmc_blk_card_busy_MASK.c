
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct request {int dummy; } ;
struct TYPE_5__ {int* resp; } ;
struct TYPE_4__ {scalar_t__ bytes_xfered; } ;
struct TYPE_6__ {TYPE_2__ cmd; TYPE_1__ data; } ;
struct mmc_queue_req {TYPE_3__ brq; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mmc_card*,int ,struct request*,int*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct mmc_card*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct mmc_queue_req* FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;

__attribute__((used)) static int FUNC_6(struct mmc_card *VAR_4, struct request *VAR_5)
{
 struct mmc_queue_req *VAR_6 = FUNC_4(VAR_5);
 u32 VAR_7 = 0;
 int VAR_8;

 if (FUNC_3(VAR_4->host) || FUNC_5(VAR_5) == VAR_3)
  return 0;

 VAR_8 = FUNC_0(VAR_4, VAR_1, VAR_5, &VAR_7);





 if (VAR_7 & FUNC_1(&VAR_6->brq)) {
  VAR_6->brq.data.bytes_xfered = 0;
  VAR_8 = VAR_8 ? VAR_8 : -VAR_0;
 }


 if (FUNC_2(VAR_4) && VAR_7 & VAR_2)
  VAR_6->brq.cmd.resp[0] |= VAR_2;

 return VAR_8;
}
