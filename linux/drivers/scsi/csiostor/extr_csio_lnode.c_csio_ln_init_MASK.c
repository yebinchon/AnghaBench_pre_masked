
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {TYPE_1__* fcfinfo; int fcf_lsthead; void* fcf_flowid; void* vnp_flowid; int sm; } ;
struct csio_hw {int dummy; } ;
struct csio_fcf_info {int dummy; } ;
struct TYPE_2__ {int kref; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct csio_lnode*) ;
 scalar_t__ FUNC_4 (struct csio_lnode*) ;
 int FUNC_5 (struct csio_lnode*,char*) ;
 scalar_t__ FUNC_6 (struct csio_lnode*) ;
 struct csio_hw* FUNC_7 (struct csio_lnode*) ;
 int VAR_4 ;
 struct csio_lnode* FUNC_8 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_9 (struct csio_lnode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_13(struct csio_lnode *VAR_6)
{
 int VAR_7 = -VAR_1;
 struct csio_lnode *VAR_8, *VAR_9;
 struct csio_hw *VAR_10 = FUNC_7(VAR_6);

 FUNC_2(&VAR_6->sm, VAR_4);
 VAR_6->vnp_flowid = VAR_0;
 VAR_6->fcf_flowid = VAR_0;

 if (FUNC_4(VAR_6)) {



  VAR_6->fcfinfo = FUNC_12(sizeof(struct csio_fcf_info), VAR_2);
  if (!VAR_6->fcfinfo) {
   FUNC_5(VAR_6, "Failed to alloc FCF record\n");
   FUNC_0(VAR_10, VAR_5);
   goto err;
  }

  FUNC_1(&VAR_6->fcf_lsthead);
  FUNC_11(&VAR_6->fcfinfo->kref);

  if (VAR_3 && FUNC_6(VAR_6))
   goto err;

 } else {





  VAR_8 = FUNC_9(VAR_6);

  if (FUNC_3(VAR_6)) {

   VAR_9 = FUNC_8(VAR_6);
   FUNC_10(&VAR_9->fcfinfo->kref);
   VAR_6->fcfinfo = VAR_9->fcfinfo;
  } else {

   VAR_6->fcfinfo = FUNC_12(sizeof(struct csio_fcf_info),
        VAR_2);
   if (!VAR_6->fcfinfo) {
    FUNC_5(VAR_6, "Failed to alloc FCF info\n");
    FUNC_0(VAR_10, VAR_5);
    goto err;
   }

   FUNC_11(&VAR_6->fcfinfo->kref);

   if (VAR_3 && FUNC_6(VAR_6))
    goto err;
  }

 }

 return 0;
err:
 return VAR_7;
}
