
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct qed_rdma_info {int lock; int cid_map; int proto; } ;
struct qed_hwfn {struct qed_rdma_info* p_rdma_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_hwfn*,int *,int) ;
 int FUNC_3 (struct qed_hwfn*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_hwfn*,int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct qed_hwfn *VAR_3, u16 *VAR_4)
{
 struct qed_rdma_info *VAR_5 = VAR_3->p_rdma_info;
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_6(&VAR_3->p_rdma_info->lock);
 VAR_8 = FUNC_5(VAR_3, &VAR_5->cid_map,
        &VAR_6);
 if (VAR_8) {
  FUNC_7(&VAR_5->lock);
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_3, &VAR_5->cid_map,
        &VAR_7);

 FUNC_7(&VAR_5->lock);
 if (VAR_8)
  goto err;


 if ((VAR_7 - VAR_6) != 1) {
  FUNC_0(VAR_3, "Failed to allocate two adjacent qp's'\n");
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_6 += FUNC_4(VAR_3,
            VAR_5->proto);
 VAR_7 += FUNC_4(VAR_3,
            VAR_5->proto);




 VAR_8 = FUNC_3(VAR_3, VAR_1, VAR_6);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_3(VAR_3, VAR_1, VAR_7);
 if (VAR_8)
  goto err;

 *VAR_4 = (u16)VAR_6;
 return VAR_8;

err:
 FUNC_6(&VAR_5->lock);
 FUNC_2(VAR_3, &VAR_5->cid_map, VAR_6);
 FUNC_2(VAR_3, &VAR_5->cid_map, VAR_7);

 FUNC_7(&VAR_5->lock);
 FUNC_1(VAR_3, VAR_2,
     "Allocate CID - failed, rc = %d\n", VAR_8);
 return VAR_8;
}
