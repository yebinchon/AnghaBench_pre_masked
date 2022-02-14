
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ size; struct qed_bulletin_content* p_virt; } ;
struct qed_bulletin_content {scalar_t__ version; int crc; } ;
struct qed_vf_iov {TYPE_1__ bulletin; struct qed_bulletin_content bulletin_shadow; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,scalar_t__) ;
 int FUNC_2 (struct qed_bulletin_content*,struct qed_bulletin_content*,scalar_t__) ;

int FUNC_3(struct qed_hwfn *VAR_2, u8 *VAR_3)
{
 struct qed_vf_iov *VAR_4 = VAR_2->vf_iov_info;
 struct qed_bulletin_content VAR_5;
 u32 VAR_6, VAR_7;

 VAR_7 = sizeof(VAR_4->bulletin.p_virt->crc);
 *VAR_3 = 0;


 FUNC_2(&VAR_5, VAR_4->bulletin.p_virt, VAR_4->bulletin.size);


 if (VAR_5.version == VAR_4->bulletin_shadow.version)
  return 0;


 VAR_6 = FUNC_1(0, (u8 *)&VAR_5 + VAR_7,
      VAR_4->bulletin.size - VAR_7);
 if (VAR_6 != VAR_5.crc)
  return -VAR_0;


 FUNC_2(&VAR_4->bulletin_shadow, &VAR_5, VAR_4->bulletin.size);

 FUNC_0(VAR_2, VAR_1,
     "Read a bulletin update %08x\n", VAR_5.version);

 *VAR_3 = 1;

 return 0;
}
