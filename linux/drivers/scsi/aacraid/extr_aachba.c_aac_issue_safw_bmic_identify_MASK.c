
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct aac_srb {int* cdb; int flags; } ;
struct aac_srb_unit {struct aac_srb srb; } ;
struct aac_dev {int dummy; } ;
struct aac_ciss_identify_pd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aac_dev*,struct aac_srb_unit*,struct aac_ciss_identify_pd*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aac_ciss_identify_pd*) ;
 struct aac_ciss_identify_pd* FUNC_3 (int,int ) ;
 int FUNC_4 (struct aac_srb_unit*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct aac_dev *VAR_5,
 struct aac_ciss_identify_pd **VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9 = -VAR_2;
 int VAR_10;
 struct aac_srb_unit VAR_11;
 struct aac_srb *VAR_12;
 struct aac_ciss_identify_pd *VAR_13;

 VAR_10 = sizeof(struct aac_ciss_identify_pd);
 VAR_13 = FUNC_3(VAR_10, VAR_3);
 if (!VAR_13)
  goto out;

 FUNC_4(&VAR_11, 0, sizeof(struct aac_srb_unit));

 VAR_12 = &VAR_11.srb;
 VAR_12->flags = FUNC_1(VAR_4);
 VAR_12->cdb[0] = 0x26;
 VAR_12->cdb[2] = (u8)((VAR_0 + VAR_8) & 0x00FF);
 VAR_12->cdb[6] = VAR_1;

 VAR_9 = FUNC_0(VAR_5, &VAR_11, VAR_13, VAR_10);
 if (FUNC_5(VAR_9 < 0))
  goto mem_free_all;

 *VAR_6 = VAR_13;

out:
 return VAR_9;
mem_free_all:
 FUNC_2(VAR_13);
 goto out;
}
