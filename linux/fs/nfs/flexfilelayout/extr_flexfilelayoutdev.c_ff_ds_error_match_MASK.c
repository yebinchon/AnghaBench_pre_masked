
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct nfs4_ff_layout_ds_err {scalar_t__ opnum; scalar_t__ status; scalar_t__ offset; int length; int deviceid; TYPE_1__ stateid; } ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(const struct nfs4_ff_layout_ds_err *VAR_0,
  const struct nfs4_ff_layout_ds_err *VAR_1)
{
 int VAR_2;

 if (VAR_0->opnum != VAR_1->opnum)
  return VAR_0->opnum < VAR_1->opnum ? -1 : 1;
 if (VAR_0->status != VAR_1->status)
  return VAR_0->status < VAR_1->status ? -1 : 1;
 VAR_2 = FUNC_0(VAR_0->stateid.data, VAR_1->stateid.data,
   sizeof(VAR_0->stateid.data));
 if (VAR_2 != 0)
  return VAR_2;
 VAR_2 = FUNC_0(&VAR_0->deviceid, &VAR_1->deviceid, sizeof(VAR_0->deviceid));
 if (VAR_2 != 0)
  return VAR_2;
 if (FUNC_1(VAR_0->offset, VAR_0->length) < VAR_1->offset)
  return -1;
 if (VAR_0->offset > FUNC_1(VAR_1->offset, VAR_1->length))
  return 1;

 return 0;
}
