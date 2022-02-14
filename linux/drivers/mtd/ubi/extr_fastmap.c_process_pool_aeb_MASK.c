
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int vol_id; } ;
struct ubi_device {int dummy; } ;
struct ubi_attach_info {int dummy; } ;
struct ubi_ainf_volume {int vol_id; } ;
struct ubi_ainf_peb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*,char*) ;
 struct ubi_ainf_volume* FUNC_3 (struct ubi_attach_info*,int) ;
 int FUNC_4 (struct ubi_attach_info*,struct ubi_ainf_peb*) ;
 int FUNC_5 (struct ubi_device*,struct ubi_attach_info*,struct ubi_ainf_volume*,struct ubi_vid_hdr*,struct ubi_ainf_peb*) ;

__attribute__((used)) static int FUNC_6(struct ubi_device *VAR_3, struct ubi_attach_info *VAR_4,
       struct ubi_vid_hdr *VAR_5,
       struct ubi_ainf_peb *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5->vol_id);
 struct ubi_ainf_volume *VAR_8;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
  FUNC_4(VAR_4, VAR_6);

  return 0;
 }


 VAR_8 = FUNC_3(VAR_4, VAR_7);
 if (!VAR_8) {
  FUNC_2(VAR_3, "orphaned volume in fastmap pool!");
  FUNC_4(VAR_4, VAR_6);
  return VAR_0;
 }

 FUNC_1(VAR_7 == VAR_8->vol_id);

 return FUNC_5(VAR_3, VAR_4, VAR_8, VAR_5, VAR_6);
}
