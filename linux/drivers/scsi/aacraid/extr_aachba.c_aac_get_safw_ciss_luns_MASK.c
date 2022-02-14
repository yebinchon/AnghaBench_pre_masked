
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct aac_srb {int* cdb; int flags; } ;
struct aac_srb_unit {struct aac_srb srb; } ;
struct aac_dev {struct aac_ciss_phys_luns_resp* safw_phys_luns; } ;
struct aac_ciss_phys_luns_resp {int resp_flag; } ;
struct _ciss_lun {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aac_dev*,struct aac_srb_unit*,struct aac_ciss_phys_luns_resp*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aac_ciss_phys_luns_resp*) ;
 struct aac_ciss_phys_luns_resp* FUNC_3 (int,int ) ;
 int FUNC_4 (struct aac_srb_unit*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct aac_dev *VAR_6)
{
 int VAR_7 = -VAR_2;
 int VAR_8;
 struct aac_srb *VAR_9;
 struct aac_srb_unit VAR_10;
 struct aac_ciss_phys_luns_resp *VAR_11;

 VAR_8 = sizeof(struct aac_ciss_phys_luns_resp) +
  (VAR_0 - 1) * sizeof(struct _ciss_lun);
 VAR_11 = FUNC_3(VAR_8, VAR_4);
 if (VAR_11 == ((void*)0))
  goto out;

 FUNC_4(&VAR_10, 0, sizeof(struct aac_srb_unit));

 VAR_9 = &VAR_10.srb;
 VAR_9->flags = FUNC_1(VAR_5);
 VAR_9->cdb[0] = VAR_1;
 VAR_9->cdb[1] = 2;
 VAR_9->cdb[8] = (u8)(VAR_8 >> 8);
 VAR_9->cdb[9] = (u8)(VAR_8);

 VAR_7 = FUNC_0(VAR_6, &VAR_10, VAR_11, VAR_8);
 if (FUNC_5(VAR_7 < 0))
  goto mem_free_all;

 if (VAR_11->resp_flag != 2) {
  VAR_7 = -VAR_3;
  goto mem_free_all;
 }

 VAR_6->safw_phys_luns = VAR_11;

out:
 return VAR_7;
mem_free_all:
 FUNC_2(VAR_11);
 goto out;
}
