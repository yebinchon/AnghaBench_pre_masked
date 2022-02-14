
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; int pfn; } ;
struct csio_eq_params {int eqstart; int eqsize; int eqaddr; int pciechn; scalar_t__ cidxfthresh; int fbmax; int fbmin; int iqid; int hostfcmode; scalar_t__ vfn; int pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct csio_hw*,char*) ;
 int FUNC_1 (struct csio_hw*,struct csio_mb*,void*,int ,struct csio_eq_params*,void (*) (struct csio_hw*,struct csio_mb*)) ;
 scalar_t__ FUNC_2 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_3 (struct csio_hw*,int) ;
 int FUNC_4 (struct csio_hw*,int) ;
 int FUNC_5 (struct csio_hw*,int) ;
 int FUNC_6 (struct csio_hw*,struct csio_mb*,int) ;
 struct csio_mb* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct csio_mb*,int ) ;
 int FUNC_9 (struct csio_eq_params*,int ,int) ;

int
FUNC_10(struct csio_hw *VAR_8, void *VAR_9, int VAR_10,
    int VAR_11, uint8_t VAR_12,
    void (*VAR_13) (struct csio_hw *, struct csio_mb *))
{
 struct csio_mb *VAR_14;
 struct csio_eq_params VAR_15;

 FUNC_9(&VAR_15, 0, sizeof(struct csio_eq_params));

 VAR_14 = FUNC_7(VAR_8->mb_mempool, VAR_4);
 if (!VAR_14) {
  FUNC_0(VAR_8, "EQ command out of memory!\n");
  return -VAR_3;
 }

 VAR_15.pfn = VAR_8->pfn;
 VAR_15.vfn = 0;
 VAR_15.eqstart = 1;
 VAR_15.hostfcmode = VAR_7;
 VAR_15.iqid = FUNC_3(VAR_8, VAR_11);
 VAR_15.fbmin = VAR_6;
 VAR_15.fbmax = VAR_5;
 VAR_15.cidxfthresh = 0;
 VAR_15.pciechn = VAR_12;
 VAR_15.eqsize = FUNC_5(VAR_8, VAR_10) / VAR_1;
 VAR_15.eqaddr = FUNC_4(VAR_8, VAR_10);

 FUNC_1(VAR_8, VAR_14, VAR_9, VAR_0,
        &VAR_15, VAR_13);

 if (FUNC_2(VAR_8, VAR_14)) {
  FUNC_0(VAR_8, "Issue of EQ OFLD cmd failed!\n");
  FUNC_8(VAR_14, VAR_8->mb_mempool);
  return -VAR_2;
 }

 if (VAR_13 != ((void*)0))
  return 0;

 return FUNC_6(VAR_8, VAR_14, VAR_10);
}
