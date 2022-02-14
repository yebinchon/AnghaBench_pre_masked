
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_reset_start; } ;
struct csio_hw {scalar_t__ rst_retries; TYPE_1__ stats; int sm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csio_hw*,char*) ;
 int FUNC_1 (struct csio_hw*) ;
 scalar_t__ FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct csio_hw *VAR_5)
{
 if (!FUNC_1(VAR_5))
  return -VAR_3;

 if (VAR_5->rst_retries >= VAR_1) {
  FUNC_0(VAR_5, "Max hw reset attempts reached..");
  return -VAR_2;
 }

 VAR_5->rst_retries++;
 FUNC_3(&VAR_5->sm, VAR_0);

 if (FUNC_2(VAR_5)) {
  VAR_5->rst_retries = 0;
  VAR_5->stats.n_reset_start = FUNC_4(VAR_4);
  return 0;
 } else
  return -VAR_2;
}
