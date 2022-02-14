
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct nvmet_req {int dummy; } ;
struct nvme_ana_rsp_hdr {int ngrps; int chgcnt; int member_0; } ;
struct nvme_ana_group_desc {int ngrps; int chgcnt; int member_0; } ;
typedef int hdr ;
typedef int __le32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvme_ana_rsp_hdr*) ;
 struct nvme_ana_rsp_hdr* FUNC_4 (int,int ) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct nvmet_req*,int ) ;
 scalar_t__ FUNC_6 (struct nvmet_req*,size_t,struct nvme_ana_rsp_hdr*,int) ;
 size_t FUNC_7 (struct nvmet_req*,size_t,struct nvme_ana_rsp_hdr*) ;
 int FUNC_8 (struct nvmet_req*,scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct nvmet_req *VAR_8)
{
 struct nvme_ana_rsp_hdr VAR_9 = { 0, };
 struct nvme_ana_group_desc *VAR_10;
 size_t VAR_11 = sizeof(struct nvme_ana_rsp_hdr);
 size_t VAR_12;
 u32 VAR_13;
 u16 VAR_14 = 0;
 u16 VAR_15;

 VAR_15 = VAR_4;
 VAR_10 = FUNC_4(sizeof(struct nvme_ana_group_desc) +
   VAR_2 * sizeof(__le32), VAR_0);
 if (!VAR_10)
  goto out;

 FUNC_2(&VAR_7);
 for (VAR_13 = 1; VAR_13 <= VAR_1; VAR_13++) {
  if (!VAR_6[VAR_13])
   continue;
  VAR_12 = FUNC_7(VAR_8, VAR_13, VAR_10);
  VAR_15 = FUNC_6(VAR_8, VAR_11, VAR_10, VAR_12);
  if (VAR_15)
   break;
  VAR_11 += VAR_12;
  VAR_14++;
 }
 for ( ; VAR_13 <= VAR_1; VAR_13++) {
  if (VAR_6[VAR_13])
   VAR_14++;
 }

 VAR_9.chgcnt = FUNC_1(VAR_5);
 VAR_9.ngrps = FUNC_0(VAR_14);
 FUNC_5(VAR_8, VAR_3);
 FUNC_9(&VAR_7);

 FUNC_3(VAR_10);


 VAR_15 = FUNC_6(VAR_8, 0, &VAR_9, sizeof(VAR_9));
out:
 FUNC_8(VAR_8, VAR_15);
}
