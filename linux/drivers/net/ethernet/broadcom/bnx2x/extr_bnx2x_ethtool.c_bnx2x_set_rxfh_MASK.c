
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__* ind_table; } ;
struct bnx2x {scalar_t__ state; TYPE_2__* fp; TYPE_1__ rss_conf_obj; } ;
struct TYPE_4__ {scalar_t__ const cl_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct bnx2x*,int) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, const u32 *VAR_6,
     const u8 *VAR_7, const u8 VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_1(VAR_5);
 size_t VAR_10;




 if (VAR_7 ||
     (VAR_8 != VAR_2 && VAR_8 != VAR_3))
  return -VAR_1;

 if (!VAR_6)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9->rss_conf_obj.ind_table[VAR_10] = VAR_6[VAR_10] + VAR_9->fp->cl_id;
 }

 if (VAR_9->state == VAR_0)
  return FUNC_0(VAR_9, 0);

 return 0;
}
