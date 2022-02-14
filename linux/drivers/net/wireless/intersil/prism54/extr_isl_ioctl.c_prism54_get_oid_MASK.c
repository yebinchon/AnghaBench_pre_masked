
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union oid_res_t {int ptr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *,union oid_res_t*) ;
 int FUNC_2 (int,union oid_res_t*,char*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
  struct iw_point *VAR_5, char *VAR_6)
{
 union oid_res_t VAR_7;
 int VAR_8;
 enum oid_num_t VAR_9 = VAR_5->flags;

 VAR_8 = FUNC_1(FUNC_3(VAR_3), VAR_9, 0, ((void*)0), &VAR_7);
 VAR_5->length = FUNC_2(VAR_9, &VAR_7, VAR_6);
 if ((VAR_2[VAR_9].flags & VAR_0) != VAR_1)
  FUNC_0(VAR_7.ptr);
 return VAR_8;
}
