
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {scalar_t__ vol_type; int compat; int data_pad; int used_ebs; int vol_id; } ;
struct ubi_attach_info {int dummy; } ;
struct ubi_ainf_volume {int used_ebs; int data_pad; int vol_type; int compat; } ;


 scalar_t__ FUNC_0 (struct ubi_ainf_volume*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct ubi_ainf_volume* FUNC_3 (struct ubi_attach_info*,int,int*) ;

__attribute__((used)) static struct ubi_ainf_volume *FUNC_4(struct ubi_attach_info *VAR_3,
       int VAR_4, int VAR_5,
       const struct ubi_vid_hdr *VAR_6)
{
 struct ubi_ainf_volume *VAR_7;
 bool VAR_8;

 FUNC_2(VAR_4 == FUNC_1(VAR_6->vol_id));

 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_8);
 if (FUNC_0(VAR_7) || !VAR_8)
  return VAR_7;

 VAR_7->used_ebs = FUNC_1(VAR_6->used_ebs);
 VAR_7->data_pad = FUNC_1(VAR_6->data_pad);
 VAR_7->compat = VAR_6->compat;
 VAR_7->vol_type = VAR_6->vol_type == VAR_2 ? VAR_0
           : VAR_1;

 return VAR_7;
}
