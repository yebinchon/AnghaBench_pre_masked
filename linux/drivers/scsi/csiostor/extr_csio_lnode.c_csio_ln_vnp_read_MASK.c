
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_lnode {int vnp_flowid; int fcf_flowid; struct csio_hw* hwp; } ;
struct csio_hw {int mb_mempool; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_lnode*,struct csio_mb*,int ,int ,int ,void (*) (struct csio_hw*,struct csio_mb*)) ;
 scalar_t__ FUNC_3 (struct csio_hw*,struct csio_mb*) ;
 struct csio_mb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct csio_mb*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct csio_lnode *VAR_5,
  void (*VAR_6) (struct csio_hw *, struct csio_mb *))
{
 struct csio_hw *VAR_7 = VAR_5->hwp;
 struct csio_mb *VAR_8;


 VAR_8 = FUNC_4(VAR_7->mb_mempool, VAR_3);
 if (!VAR_8) {
  FUNC_0(VAR_7, VAR_4);
  return -VAR_2;
 }


 FUNC_2(VAR_5, VAR_8,
        VAR_0,
        VAR_5->fcf_flowid,
        VAR_5->vnp_flowid,
        VAR_6);


 if (FUNC_3(VAR_7, VAR_8)) {
  FUNC_1(VAR_7, "Failed to issue mbox FCoE VNP command\n");
  FUNC_5(VAR_8, VAR_7->mb_mempool);
  return -VAR_1;
 }

 return 0;
}
